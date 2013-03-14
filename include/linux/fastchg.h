/*
 * Author: Chad Froebel <chadfroebel@gmail.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


#ifndef _LINUX_FASTCHG_H
#define _LINUX_FASTCHG_H

extern int force_fast_charge;

#define FAST_CHARGE_DISABLED 0	/* default */
#define FAST_CHARGE_FORCE_AC 1
#define FAST_CHARGE_FORCE_AC_IF_NO_USB 2

extern int is_fast_charge_forced;

#define FAST_CHARGE_NOT_FORCED 0
#define FAST_CHARGE_FORCED 1

extern int current_charge_mode;

#define CURRENT_CHARGE_MODE_DISCHARGING 0
#define CURRENT_CHARGE_MODE_AC 1
#define CURRENT_CHARGE_MODE_USB 2

#endif
