// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright 2018-2021 NXP
 *
 */

#include <common.h>
#include <command.h>
#include <net.h>
#include <console.h>
#include <env.h>
#include "test_net.h"

#define ping_ip		"192.168.1.2"
#define ipaddr		"192.168.1.1"

/* before run this func, need connect network */
int test_net(void)
{
#ifdef CONFIG_ENETC_COREID_SET
	pci_init();
	mdelay(1 * 1000);  /* avoid that baremetal sometimes hang  */
	eth_initialize();
#elif CONFIG_FEC_COREID_SET
	eth_initialize();
#endif
	net_ping_ip = string_to_ip(ping_ip);
	net_ip = string_to_ip(ipaddr);

	printf("net test case\n");
	if (net_ping_ip.s_addr == 0)
		return CMD_RET_USAGE;

	if (net_loop(PING) < 0) {
		printf("ping failed; host %s is not alive\n", ping_ip);
		return CMD_RET_FAILURE;
	}

	printf("host %s is alive\n", ping_ip);

	return CMD_RET_SUCCESS;
}
