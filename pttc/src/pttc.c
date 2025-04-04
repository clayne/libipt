/*
 * Copyright (C) 2013-2025 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *  * Neither the name of Intel Corporation nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "errcode.h"
#include "pttc.h"
#include "parse.h"

int pttc_main(const struct pttc_options *options)
{
	int errcode;
	enum { buflen = 1024 };
	uint8_t buf[buflen];
	struct pt_config conf;

	pt_config_init(&conf);
	conf.cpu = options->cpu;
	conf.begin = buf;
	conf.end = buf+buflen;

	/* apply errata for the chosen cpu. */
	if (conf.cpu.vendor) {
		errcode = pt_cpu_errata(&conf.errata, &conf.cpu);
		if (errcode < 0) {
			fprintf(stderr,
				"fatal: errata configuration failed %d: %s\n",
				errcode, pt_errstr(pt_errcode(errcode)));
			return errcode;
		}
	}

	errcode = parse(options->pttfile, &conf);
	if (errcode < 0 && errcode != -err_run)
		fprintf(stderr, "fatal: %s\n", errstr[-errcode]);

	return -errcode;

}
