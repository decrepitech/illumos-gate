/*
 * This file and its contents are supplied under the terms of the
 * Common Development and Distribution License ("CDDL"), version 1.0.
 * You may only use this file in accordance with the terms of version
 * 1.0 of the CDDL.
 *
 * A full copy of the text of the CDDL should have accompanied this
 * source.  A copy of the CDDL is also available via the Internet at
 * http://www.illumos.org/license/CDDL.
 */

/*
 * Copyright 2020 Oxide Computer Company
 */

#ifndef _SYS_BOOTBANNER_H
#define	_SYS_BOOTBANNER_H

/*
 * Rendering of the boot banner, used on the system and zone consoles.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern void bootbanner_print(void (*)(const char *, uint_t), int kmflag);

#ifdef __cplusplus
}
#endif

#endif /* _SYS_BOOTBANNER_H */
