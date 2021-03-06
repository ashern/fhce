/*
 * Copyright (C) 2008, 2009, 2010 The Collaborative Software Foundation.
 *
 * This file is part of FeedHandlers (FH).
 *
 * FH is free software: you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * FH is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with FH.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __FH_ADM_STATUS_RESP_H__
#define __FH_ADM_STATUS_RESP_H__

#include "fh_errors.h"

typedef struct {
    char        status_service[16]; /* Service Name         */
    uint32_t    status_state;       /* Service state        */
    uint32_t    status_pid;         /* Process ID           */
    uint32_t    status_fp_cpu;      /* FP CPU affinity      */
    uint32_t    status_fp_tid;      /* FP Thread ID         */
    uint32_t    status_uptime;      /* Up time              */
    uint32_t    status_pmem;        /* Percentage memory    */
    uint32_t    status_putime;      /* Percentage User CPU  */
    uint32_t    status_pstime;      /* Percentage Sys CPU   */
} fh_adm_status_resp_t;

FH_STATUS adm_status_resp_pack   (void *msg, char *data, int *length);
FH_STATUS adm_status_resp_unpack (void *msg, char *data, int length);

#endif /* __FH_ADM_STATUS_RESP_H__ */
