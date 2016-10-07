#include <machine/rtems-bsd-kernel-space.h>

/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   freebsd-org/sys/dev/mmc/mmcbus_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */

#include <rtems/bsd/sys/param.h>
#include <sys/queue.h>
#include <sys/kernel.h>
#include <sys/kobj.h>
#include <sys/bus.h>
#include <dev/mmc/mmcreg.h>
#include <dev/mmc/bridge.h>
#include <rtems/bsd/local/mmcbus_if.h>

struct kobjop_desc mmcbus_wait_for_request_desc = {
	0, { &mmcbus_wait_for_request_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc mmcbus_acquire_bus_desc = {
	0, { &mmcbus_acquire_bus_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc mmcbus_release_bus_desc = {
	0, { &mmcbus_release_bus_desc, (kobjop_t)kobj_error_method }
};

