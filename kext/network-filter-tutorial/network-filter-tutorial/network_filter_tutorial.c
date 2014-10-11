//
//  network_filter_tutorial.c
//  network-filter-tutorial
//
//  Created by Adam Schepis on 10/10/14.
//  Copyright (c) 2014 Adam Schepis. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t network_filter_tutorial_start(kmod_info_t * ki, void *d);
kern_return_t network_filter_tutorial_stop(kmod_info_t *ki, void *d);

kern_return_t network_filter_tutorial_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t network_filter_tutorial_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
