/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2024 John Sanpe <sanpeqf@gmail.com>
 */

#include <config.h>

int
main(int argc, const char *argv[])
{
    bfdev_log_notice("bfdev infomation:\n");
    bfdev_log_notice("  version: %s\n", __bfdev_stringify(BFDEV_VERSION));
    bfdev_log_notice("  name: %s\n", __bfdev_stringify(BFDEV_NAME));
    bfdev_log_notice("  arch: %s\n", __bfdev_stringify(BFDEV_ARCH));

    return 0;
}
