// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright 2018-2021 NXP
 *
 */

#include <config.h>
#include <command.h>
#include <common.h>
#include <malloc.h>
#include <env.h>
#include <linux/types.h>
#include "test.h"
#include "../cmd/wavplayer.h"

void core1_main(void)
{
#ifdef CONFIG_I2C_COREID_SET
	test_i2c();
#endif
#ifdef CONFIG_IRQ_COREID_SET
	test_irq_init();
#endif
#ifdef CONFIG_GPIO_COREID_SET
	test_gpio();
#endif
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif
#ifdef CONFIG_QSPI_COREID_SET
	test_qspi();
#endif
#if defined(CONFIG_FMAN_COREID_SET) || defined(CONFIG_ENETC_COREID_SET) || defined(CONFIG_FEC_COREID_SET)
	test_net();
#endif

#ifdef CONFIG_USB_COREID_SET
	test_usb();
#endif
#ifdef CONFIG_PCIE_COREID_SET
	test_pcie();
#endif

#ifdef CONFIG_CAN_COREID_SET
	test_flexcan();
#endif

#ifdef CONFIG_SAI_COREID_SET
	test_wavplay();
#endif

	return;
}

void core2_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

#ifdef CONFIG_USB_COREID_SET
	test_usb();
#endif
#ifdef CONFIG_PCIE_COREID_SET
	test_pcie();
#endif

	return;
}

void core3_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

#ifdef CONFIG_USB_COREID_SET
	test_usb();
#endif

	return;
}

void core4_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core5_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core6_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core7_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core8_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core9_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core10_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core11_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core12_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core13_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core14_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}

void core15_main(void)
{
#ifdef CONFIG_ICC_COREID_SET
	test_icc_func_init();
#endif

	return;
}
