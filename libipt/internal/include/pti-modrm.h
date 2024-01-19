/*
 * Copyright (c) 2013-2024, Intel Corporation
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

#if !defined(PTI_MODRM_H)
#define PTI_MODRM_H

enum pti_modrm {
	PTI_MODRM_FALSE,
	PTI_MODRM_TRUE,
	PTI_MODRM_IGNORE_MOD,
	PTI_MODRM_UNDEF,
};

static uint8_t has_modrm_map_0x0[256] = {
/*opcode 0x0*/ PTI_MODRM_TRUE,
/*opcode 0x1*/ PTI_MODRM_TRUE,
/*opcode 0x2*/ PTI_MODRM_TRUE,
/*opcode 0x3*/ PTI_MODRM_TRUE,
/*opcode 0x4*/ PTI_MODRM_FALSE,
/*opcode 0x5*/ PTI_MODRM_FALSE,
/*opcode 0x6*/ PTI_MODRM_FALSE,
/*opcode 0x7*/ PTI_MODRM_FALSE,
/*opcode 0x8*/ PTI_MODRM_TRUE,
/*opcode 0x9*/ PTI_MODRM_TRUE,
/*opcode 0xa*/ PTI_MODRM_TRUE,
/*opcode 0xb*/ PTI_MODRM_TRUE,
/*opcode 0xc*/ PTI_MODRM_FALSE,
/*opcode 0xd*/ PTI_MODRM_FALSE,
/*opcode 0xe*/ PTI_MODRM_FALSE,
/*opcode 0xf*/ PTI_MODRM_UNDEF,
/*opcode 0x10*/ PTI_MODRM_TRUE,
/*opcode 0x11*/ PTI_MODRM_TRUE,
/*opcode 0x12*/ PTI_MODRM_TRUE,
/*opcode 0x13*/ PTI_MODRM_TRUE,
/*opcode 0x14*/ PTI_MODRM_FALSE,
/*opcode 0x15*/ PTI_MODRM_FALSE,
/*opcode 0x16*/ PTI_MODRM_FALSE,
/*opcode 0x17*/ PTI_MODRM_FALSE,
/*opcode 0x18*/ PTI_MODRM_TRUE,
/*opcode 0x19*/ PTI_MODRM_TRUE,
/*opcode 0x1a*/ PTI_MODRM_TRUE,
/*opcode 0x1b*/ PTI_MODRM_TRUE,
/*opcode 0x1c*/ PTI_MODRM_FALSE,
/*opcode 0x1d*/ PTI_MODRM_FALSE,
/*opcode 0x1e*/ PTI_MODRM_FALSE,
/*opcode 0x1f*/ PTI_MODRM_FALSE,
/*opcode 0x20*/ PTI_MODRM_TRUE,
/*opcode 0x21*/ PTI_MODRM_TRUE,
/*opcode 0x22*/ PTI_MODRM_TRUE,
/*opcode 0x23*/ PTI_MODRM_TRUE,
/*opcode 0x24*/ PTI_MODRM_FALSE,
/*opcode 0x25*/ PTI_MODRM_FALSE,
/*opcode 0x26*/ PTI_MODRM_UNDEF,
/*opcode 0x27*/ PTI_MODRM_FALSE,
/*opcode 0x28*/ PTI_MODRM_TRUE,
/*opcode 0x29*/ PTI_MODRM_TRUE,
/*opcode 0x2a*/ PTI_MODRM_TRUE,
/*opcode 0x2b*/ PTI_MODRM_TRUE,
/*opcode 0x2c*/ PTI_MODRM_FALSE,
/*opcode 0x2d*/ PTI_MODRM_FALSE,
/*opcode 0x2e*/ PTI_MODRM_UNDEF,
/*opcode 0x2f*/ PTI_MODRM_FALSE,
/*opcode 0x30*/ PTI_MODRM_TRUE,
/*opcode 0x31*/ PTI_MODRM_TRUE,
/*opcode 0x32*/ PTI_MODRM_TRUE,
/*opcode 0x33*/ PTI_MODRM_TRUE,
/*opcode 0x34*/ PTI_MODRM_FALSE,
/*opcode 0x35*/ PTI_MODRM_FALSE,
/*opcode 0x36*/ PTI_MODRM_UNDEF,
/*opcode 0x37*/ PTI_MODRM_FALSE,
/*opcode 0x38*/ PTI_MODRM_TRUE,
/*opcode 0x39*/ PTI_MODRM_TRUE,
/*opcode 0x3a*/ PTI_MODRM_TRUE,
/*opcode 0x3b*/ PTI_MODRM_TRUE,
/*opcode 0x3c*/ PTI_MODRM_FALSE,
/*opcode 0x3d*/ PTI_MODRM_FALSE,
/*opcode 0x3e*/ PTI_MODRM_UNDEF,
/*opcode 0x3f*/ PTI_MODRM_FALSE,
/*opcode 0x40*/ PTI_MODRM_FALSE,
/*opcode 0x41*/ PTI_MODRM_FALSE,
/*opcode 0x42*/ PTI_MODRM_FALSE,
/*opcode 0x43*/ PTI_MODRM_FALSE,
/*opcode 0x44*/ PTI_MODRM_FALSE,
/*opcode 0x45*/ PTI_MODRM_FALSE,
/*opcode 0x46*/ PTI_MODRM_FALSE,
/*opcode 0x47*/ PTI_MODRM_FALSE,
/*opcode 0x48*/ PTI_MODRM_FALSE,
/*opcode 0x49*/ PTI_MODRM_FALSE,
/*opcode 0x4a*/ PTI_MODRM_FALSE,
/*opcode 0x4b*/ PTI_MODRM_FALSE,
/*opcode 0x4c*/ PTI_MODRM_FALSE,
/*opcode 0x4d*/ PTI_MODRM_FALSE,
/*opcode 0x4e*/ PTI_MODRM_FALSE,
/*opcode 0x4f*/ PTI_MODRM_FALSE,
/*opcode 0x50*/ PTI_MODRM_FALSE,
/*opcode 0x51*/ PTI_MODRM_FALSE,
/*opcode 0x52*/ PTI_MODRM_FALSE,
/*opcode 0x53*/ PTI_MODRM_FALSE,
/*opcode 0x54*/ PTI_MODRM_FALSE,
/*opcode 0x55*/ PTI_MODRM_FALSE,
/*opcode 0x56*/ PTI_MODRM_FALSE,
/*opcode 0x57*/ PTI_MODRM_FALSE,
/*opcode 0x58*/ PTI_MODRM_FALSE,
/*opcode 0x59*/ PTI_MODRM_FALSE,
/*opcode 0x5a*/ PTI_MODRM_FALSE,
/*opcode 0x5b*/ PTI_MODRM_FALSE,
/*opcode 0x5c*/ PTI_MODRM_FALSE,
/*opcode 0x5d*/ PTI_MODRM_FALSE,
/*opcode 0x5e*/ PTI_MODRM_FALSE,
/*opcode 0x5f*/ PTI_MODRM_FALSE,
/*opcode 0x60*/ PTI_MODRM_FALSE,
/*opcode 0x61*/ PTI_MODRM_FALSE,
/*opcode 0x62*/ PTI_MODRM_TRUE,
/*opcode 0x63*/ PTI_MODRM_TRUE,
/*opcode 0x64*/ PTI_MODRM_UNDEF,
/*opcode 0x65*/ PTI_MODRM_UNDEF,
/*opcode 0x66*/ PTI_MODRM_UNDEF,
/*opcode 0x67*/ PTI_MODRM_UNDEF,
/*opcode 0x68*/ PTI_MODRM_FALSE,
/*opcode 0x69*/ PTI_MODRM_TRUE,
/*opcode 0x6a*/ PTI_MODRM_FALSE,
/*opcode 0x6b*/ PTI_MODRM_TRUE,
/*opcode 0x6c*/ PTI_MODRM_FALSE,
/*opcode 0x6d*/ PTI_MODRM_FALSE,
/*opcode 0x6e*/ PTI_MODRM_FALSE,
/*opcode 0x6f*/ PTI_MODRM_FALSE,
/*opcode 0x70*/ PTI_MODRM_FALSE,
/*opcode 0x71*/ PTI_MODRM_FALSE,
/*opcode 0x72*/ PTI_MODRM_FALSE,
/*opcode 0x73*/ PTI_MODRM_FALSE,
/*opcode 0x74*/ PTI_MODRM_FALSE,
/*opcode 0x75*/ PTI_MODRM_FALSE,
/*opcode 0x76*/ PTI_MODRM_FALSE,
/*opcode 0x77*/ PTI_MODRM_FALSE,
/*opcode 0x78*/ PTI_MODRM_FALSE,
/*opcode 0x79*/ PTI_MODRM_FALSE,
/*opcode 0x7a*/ PTI_MODRM_FALSE,
/*opcode 0x7b*/ PTI_MODRM_FALSE,
/*opcode 0x7c*/ PTI_MODRM_FALSE,
/*opcode 0x7d*/ PTI_MODRM_FALSE,
/*opcode 0x7e*/ PTI_MODRM_FALSE,
/*opcode 0x7f*/ PTI_MODRM_FALSE,
/*opcode 0x80*/ PTI_MODRM_TRUE,
/*opcode 0x81*/ PTI_MODRM_TRUE,
/*opcode 0x82*/ PTI_MODRM_TRUE,
/*opcode 0x83*/ PTI_MODRM_TRUE,
/*opcode 0x84*/ PTI_MODRM_TRUE,
/*opcode 0x85*/ PTI_MODRM_TRUE,
/*opcode 0x86*/ PTI_MODRM_TRUE,
/*opcode 0x87*/ PTI_MODRM_TRUE,
/*opcode 0x88*/ PTI_MODRM_TRUE,
/*opcode 0x89*/ PTI_MODRM_TRUE,
/*opcode 0x8a*/ PTI_MODRM_TRUE,
/*opcode 0x8b*/ PTI_MODRM_TRUE,
/*opcode 0x8c*/ PTI_MODRM_TRUE,
/*opcode 0x8d*/ PTI_MODRM_TRUE,
/*opcode 0x8e*/ PTI_MODRM_TRUE,
/*opcode 0x8f*/ PTI_MODRM_TRUE,
/*opcode 0x90*/ PTI_MODRM_FALSE,
/*opcode 0x91*/ PTI_MODRM_FALSE,
/*opcode 0x92*/ PTI_MODRM_FALSE,
/*opcode 0x93*/ PTI_MODRM_FALSE,
/*opcode 0x94*/ PTI_MODRM_FALSE,
/*opcode 0x95*/ PTI_MODRM_FALSE,
/*opcode 0x96*/ PTI_MODRM_FALSE,
/*opcode 0x97*/ PTI_MODRM_FALSE,
/*opcode 0x98*/ PTI_MODRM_FALSE,
/*opcode 0x99*/ PTI_MODRM_FALSE,
/*opcode 0x9a*/ PTI_MODRM_FALSE,
/*opcode 0x9b*/ PTI_MODRM_FALSE,
/*opcode 0x9c*/ PTI_MODRM_FALSE,
/*opcode 0x9d*/ PTI_MODRM_FALSE,
/*opcode 0x9e*/ PTI_MODRM_FALSE,
/*opcode 0x9f*/ PTI_MODRM_FALSE,
/*opcode 0xa0*/ PTI_MODRM_FALSE,
/*opcode 0xa1*/ PTI_MODRM_FALSE,
/*opcode 0xa2*/ PTI_MODRM_FALSE,
/*opcode 0xa3*/ PTI_MODRM_FALSE,
/*opcode 0xa4*/ PTI_MODRM_FALSE,
/*opcode 0xa5*/ PTI_MODRM_FALSE,
/*opcode 0xa6*/ PTI_MODRM_FALSE,
/*opcode 0xa7*/ PTI_MODRM_FALSE,
/*opcode 0xa8*/ PTI_MODRM_FALSE,
/*opcode 0xa9*/ PTI_MODRM_FALSE,
/*opcode 0xaa*/ PTI_MODRM_FALSE,
/*opcode 0xab*/ PTI_MODRM_FALSE,
/*opcode 0xac*/ PTI_MODRM_FALSE,
/*opcode 0xad*/ PTI_MODRM_FALSE,
/*opcode 0xae*/ PTI_MODRM_FALSE,
/*opcode 0xaf*/ PTI_MODRM_FALSE,
/*opcode 0xb0*/ PTI_MODRM_FALSE,
/*opcode 0xb1*/ PTI_MODRM_FALSE,
/*opcode 0xb2*/ PTI_MODRM_FALSE,
/*opcode 0xb3*/ PTI_MODRM_FALSE,
/*opcode 0xb4*/ PTI_MODRM_FALSE,
/*opcode 0xb5*/ PTI_MODRM_FALSE,
/*opcode 0xb6*/ PTI_MODRM_FALSE,
/*opcode 0xb7*/ PTI_MODRM_FALSE,
/*opcode 0xb8*/ PTI_MODRM_FALSE,
/*opcode 0xb9*/ PTI_MODRM_FALSE,
/*opcode 0xba*/ PTI_MODRM_FALSE,
/*opcode 0xbb*/ PTI_MODRM_FALSE,
/*opcode 0xbc*/ PTI_MODRM_FALSE,
/*opcode 0xbd*/ PTI_MODRM_FALSE,
/*opcode 0xbe*/ PTI_MODRM_FALSE,
/*opcode 0xbf*/ PTI_MODRM_FALSE,
/*opcode 0xc0*/ PTI_MODRM_TRUE,
/*opcode 0xc1*/ PTI_MODRM_TRUE,
/*opcode 0xc2*/ PTI_MODRM_FALSE,
/*opcode 0xc3*/ PTI_MODRM_FALSE,
/*opcode 0xc4*/ PTI_MODRM_TRUE,
/*opcode 0xc5*/ PTI_MODRM_TRUE,
/*opcode 0xc6*/ PTI_MODRM_TRUE,
/*opcode 0xc7*/ PTI_MODRM_TRUE,
/*opcode 0xc8*/ PTI_MODRM_FALSE,
/*opcode 0xc9*/ PTI_MODRM_FALSE,
/*opcode 0xca*/ PTI_MODRM_FALSE,
/*opcode 0xcb*/ PTI_MODRM_FALSE,
/*opcode 0xcc*/ PTI_MODRM_FALSE,
/*opcode 0xcd*/ PTI_MODRM_FALSE,
/*opcode 0xce*/ PTI_MODRM_FALSE,
/*opcode 0xcf*/ PTI_MODRM_FALSE,
/*opcode 0xd0*/ PTI_MODRM_TRUE,
/*opcode 0xd1*/ PTI_MODRM_TRUE,
/*opcode 0xd2*/ PTI_MODRM_TRUE,
/*opcode 0xd3*/ PTI_MODRM_TRUE,
/*opcode 0xd4*/ PTI_MODRM_FALSE,
/*opcode 0xd5*/ PTI_MODRM_FALSE,
/*opcode 0xd6*/ PTI_MODRM_FALSE,
/*opcode 0xd7*/ PTI_MODRM_FALSE,
/*opcode 0xd8*/ PTI_MODRM_TRUE,
/*opcode 0xd9*/ PTI_MODRM_TRUE,
/*opcode 0xda*/ PTI_MODRM_TRUE,
/*opcode 0xdb*/ PTI_MODRM_TRUE,
/*opcode 0xdc*/ PTI_MODRM_TRUE,
/*opcode 0xdd*/ PTI_MODRM_TRUE,
/*opcode 0xde*/ PTI_MODRM_TRUE,
/*opcode 0xdf*/ PTI_MODRM_TRUE,
/*opcode 0xe0*/ PTI_MODRM_FALSE,
/*opcode 0xe1*/ PTI_MODRM_FALSE,
/*opcode 0xe2*/ PTI_MODRM_FALSE,
/*opcode 0xe3*/ PTI_MODRM_FALSE,
/*opcode 0xe4*/ PTI_MODRM_FALSE,
/*opcode 0xe5*/ PTI_MODRM_FALSE,
/*opcode 0xe6*/ PTI_MODRM_FALSE,
/*opcode 0xe7*/ PTI_MODRM_FALSE,
/*opcode 0xe8*/ PTI_MODRM_FALSE,
/*opcode 0xe9*/ PTI_MODRM_FALSE,
/*opcode 0xea*/ PTI_MODRM_FALSE,
/*opcode 0xeb*/ PTI_MODRM_FALSE,
/*opcode 0xec*/ PTI_MODRM_FALSE,
/*opcode 0xed*/ PTI_MODRM_FALSE,
/*opcode 0xee*/ PTI_MODRM_FALSE,
/*opcode 0xef*/ PTI_MODRM_FALSE,
/*opcode 0xf0*/ PTI_MODRM_UNDEF,
/*opcode 0xf1*/ PTI_MODRM_FALSE,
/*opcode 0xf2*/ PTI_MODRM_UNDEF,
/*opcode 0xf3*/ PTI_MODRM_UNDEF,
/*opcode 0xf4*/ PTI_MODRM_FALSE,
/*opcode 0xf5*/ PTI_MODRM_FALSE,
/*opcode 0xf6*/ PTI_MODRM_TRUE,
/*opcode 0xf7*/ PTI_MODRM_TRUE,
/*opcode 0xf8*/ PTI_MODRM_FALSE,
/*opcode 0xf9*/ PTI_MODRM_FALSE,
/*opcode 0xfa*/ PTI_MODRM_FALSE,
/*opcode 0xfb*/ PTI_MODRM_FALSE,
/*opcode 0xfc*/ PTI_MODRM_FALSE,
/*opcode 0xfd*/ PTI_MODRM_FALSE,
/*opcode 0xfe*/ PTI_MODRM_TRUE,
/*opcode 0xff*/ PTI_MODRM_TRUE,
};
static uint8_t has_modrm_map_0x0F[256] = {
/*opcode 0x0*/ PTI_MODRM_TRUE,
/*opcode 0x1*/ PTI_MODRM_TRUE,
/*opcode 0x2*/ PTI_MODRM_TRUE,
/*opcode 0x3*/ PTI_MODRM_TRUE,
/*opcode 0x4*/ PTI_MODRM_UNDEF,
/*opcode 0x5*/ PTI_MODRM_FALSE,
/*opcode 0x6*/ PTI_MODRM_FALSE,
/*opcode 0x7*/ PTI_MODRM_FALSE,
/*opcode 0x8*/ PTI_MODRM_FALSE,
/*opcode 0x9*/ PTI_MODRM_FALSE,
/*opcode 0xa*/ PTI_MODRM_UNDEF,
/*opcode 0xb*/ PTI_MODRM_FALSE,
/*opcode 0xc*/ PTI_MODRM_UNDEF,
/*opcode 0xd*/ PTI_MODRM_TRUE,
/*opcode 0xe*/ PTI_MODRM_FALSE,
/*opcode 0xf*/ PTI_MODRM_UNDEF,
/*opcode 0x10*/ PTI_MODRM_TRUE,
/*opcode 0x11*/ PTI_MODRM_TRUE,
/*opcode 0x12*/ PTI_MODRM_TRUE,
/*opcode 0x13*/ PTI_MODRM_TRUE,
/*opcode 0x14*/ PTI_MODRM_TRUE,
/*opcode 0x15*/ PTI_MODRM_TRUE,
/*opcode 0x16*/ PTI_MODRM_TRUE,
/*opcode 0x17*/ PTI_MODRM_TRUE,
/*opcode 0x18*/ PTI_MODRM_TRUE,
/*opcode 0x19*/ PTI_MODRM_TRUE,
/*opcode 0x1a*/ PTI_MODRM_TRUE,
/*opcode 0x1b*/ PTI_MODRM_TRUE,
/*opcode 0x1c*/ PTI_MODRM_TRUE,
/*opcode 0x1d*/ PTI_MODRM_TRUE,
/*opcode 0x1e*/ PTI_MODRM_TRUE,
/*opcode 0x1f*/ PTI_MODRM_TRUE,
/*opcode 0x20*/ PTI_MODRM_IGNORE_MOD,
/*opcode 0x21*/ PTI_MODRM_IGNORE_MOD,
/*opcode 0x22*/ PTI_MODRM_IGNORE_MOD,
/*opcode 0x23*/ PTI_MODRM_IGNORE_MOD,
/*opcode 0x24*/ PTI_MODRM_UNDEF,
/*opcode 0x25*/ PTI_MODRM_UNDEF,
/*opcode 0x26*/ PTI_MODRM_UNDEF,
/*opcode 0x27*/ PTI_MODRM_UNDEF,
/*opcode 0x28*/ PTI_MODRM_TRUE,
/*opcode 0x29*/ PTI_MODRM_TRUE,
/*opcode 0x2a*/ PTI_MODRM_TRUE,
/*opcode 0x2b*/ PTI_MODRM_TRUE,
/*opcode 0x2c*/ PTI_MODRM_TRUE,
/*opcode 0x2d*/ PTI_MODRM_TRUE,
/*opcode 0x2e*/ PTI_MODRM_TRUE,
/*opcode 0x2f*/ PTI_MODRM_TRUE,
/*opcode 0x30*/ PTI_MODRM_FALSE,
/*opcode 0x31*/ PTI_MODRM_FALSE,
/*opcode 0x32*/ PTI_MODRM_FALSE,
/*opcode 0x33*/ PTI_MODRM_FALSE,
/*opcode 0x34*/ PTI_MODRM_FALSE,
/*opcode 0x35*/ PTI_MODRM_FALSE,
/*opcode 0x36*/ PTI_MODRM_UNDEF,
/*opcode 0x37*/ PTI_MODRM_FALSE,
/*opcode 0x38*/ PTI_MODRM_UNDEF,
/*opcode 0x39*/ PTI_MODRM_UNDEF,
/*opcode 0x3a*/ PTI_MODRM_UNDEF,
/*opcode 0x3b*/ PTI_MODRM_UNDEF,
/*opcode 0x3c*/ PTI_MODRM_UNDEF,
/*opcode 0x3d*/ PTI_MODRM_UNDEF,
/*opcode 0x3e*/ PTI_MODRM_UNDEF,
/*opcode 0x3f*/ PTI_MODRM_UNDEF,
/*opcode 0x40*/ PTI_MODRM_TRUE,
/*opcode 0x41*/ PTI_MODRM_TRUE,
/*opcode 0x42*/ PTI_MODRM_TRUE,
/*opcode 0x43*/ PTI_MODRM_TRUE,
/*opcode 0x44*/ PTI_MODRM_TRUE,
/*opcode 0x45*/ PTI_MODRM_TRUE,
/*opcode 0x46*/ PTI_MODRM_TRUE,
/*opcode 0x47*/ PTI_MODRM_TRUE,
/*opcode 0x48*/ PTI_MODRM_TRUE,
/*opcode 0x49*/ PTI_MODRM_TRUE,
/*opcode 0x4a*/ PTI_MODRM_TRUE,
/*opcode 0x4b*/ PTI_MODRM_TRUE,
/*opcode 0x4c*/ PTI_MODRM_TRUE,
/*opcode 0x4d*/ PTI_MODRM_TRUE,
/*opcode 0x4e*/ PTI_MODRM_TRUE,
/*opcode 0x4f*/ PTI_MODRM_TRUE,
/*opcode 0x50*/ PTI_MODRM_TRUE,
/*opcode 0x51*/ PTI_MODRM_TRUE,
/*opcode 0x52*/ PTI_MODRM_TRUE,
/*opcode 0x53*/ PTI_MODRM_TRUE,
/*opcode 0x54*/ PTI_MODRM_TRUE,
/*opcode 0x55*/ PTI_MODRM_TRUE,
/*opcode 0x56*/ PTI_MODRM_TRUE,
/*opcode 0x57*/ PTI_MODRM_TRUE,
/*opcode 0x58*/ PTI_MODRM_TRUE,
/*opcode 0x59*/ PTI_MODRM_TRUE,
/*opcode 0x5a*/ PTI_MODRM_TRUE,
/*opcode 0x5b*/ PTI_MODRM_TRUE,
/*opcode 0x5c*/ PTI_MODRM_TRUE,
/*opcode 0x5d*/ PTI_MODRM_TRUE,
/*opcode 0x5e*/ PTI_MODRM_TRUE,
/*opcode 0x5f*/ PTI_MODRM_TRUE,
/*opcode 0x60*/ PTI_MODRM_TRUE,
/*opcode 0x61*/ PTI_MODRM_TRUE,
/*opcode 0x62*/ PTI_MODRM_TRUE,
/*opcode 0x63*/ PTI_MODRM_TRUE,
/*opcode 0x64*/ PTI_MODRM_TRUE,
/*opcode 0x65*/ PTI_MODRM_TRUE,
/*opcode 0x66*/ PTI_MODRM_TRUE,
/*opcode 0x67*/ PTI_MODRM_TRUE,
/*opcode 0x68*/ PTI_MODRM_TRUE,
/*opcode 0x69*/ PTI_MODRM_TRUE,
/*opcode 0x6a*/ PTI_MODRM_TRUE,
/*opcode 0x6b*/ PTI_MODRM_TRUE,
/*opcode 0x6c*/ PTI_MODRM_TRUE,
/*opcode 0x6d*/ PTI_MODRM_TRUE,
/*opcode 0x6e*/ PTI_MODRM_TRUE,
/*opcode 0x6f*/ PTI_MODRM_TRUE,
/*opcode 0x70*/ PTI_MODRM_TRUE,
/*opcode 0x71*/ PTI_MODRM_TRUE,
/*opcode 0x72*/ PTI_MODRM_TRUE,
/*opcode 0x73*/ PTI_MODRM_TRUE,
/*opcode 0x74*/ PTI_MODRM_TRUE,
/*opcode 0x75*/ PTI_MODRM_TRUE,
/*opcode 0x76*/ PTI_MODRM_TRUE,
/*opcode 0x77*/ PTI_MODRM_FALSE,
/*opcode 0x78*/ PTI_MODRM_TRUE,
/*opcode 0x79*/ PTI_MODRM_TRUE,
/*opcode 0x7a*/ PTI_MODRM_TRUE,
/*opcode 0x7b*/ PTI_MODRM_TRUE,
/*opcode 0x7c*/ PTI_MODRM_TRUE,
/*opcode 0x7d*/ PTI_MODRM_TRUE,
/*opcode 0x7e*/ PTI_MODRM_TRUE,
/*opcode 0x7f*/ PTI_MODRM_TRUE,
/*opcode 0x80*/ PTI_MODRM_FALSE,
/*opcode 0x81*/ PTI_MODRM_FALSE,
/*opcode 0x82*/ PTI_MODRM_FALSE,
/*opcode 0x83*/ PTI_MODRM_FALSE,
/*opcode 0x84*/ PTI_MODRM_FALSE,
/*opcode 0x85*/ PTI_MODRM_FALSE,
/*opcode 0x86*/ PTI_MODRM_FALSE,
/*opcode 0x87*/ PTI_MODRM_FALSE,
/*opcode 0x88*/ PTI_MODRM_FALSE,
/*opcode 0x89*/ PTI_MODRM_FALSE,
/*opcode 0x8a*/ PTI_MODRM_FALSE,
/*opcode 0x8b*/ PTI_MODRM_FALSE,
/*opcode 0x8c*/ PTI_MODRM_FALSE,
/*opcode 0x8d*/ PTI_MODRM_FALSE,
/*opcode 0x8e*/ PTI_MODRM_FALSE,
/*opcode 0x8f*/ PTI_MODRM_FALSE,
/*opcode 0x90*/ PTI_MODRM_TRUE,
/*opcode 0x91*/ PTI_MODRM_TRUE,
/*opcode 0x92*/ PTI_MODRM_TRUE,
/*opcode 0x93*/ PTI_MODRM_TRUE,
/*opcode 0x94*/ PTI_MODRM_TRUE,
/*opcode 0x95*/ PTI_MODRM_TRUE,
/*opcode 0x96*/ PTI_MODRM_TRUE,
/*opcode 0x97*/ PTI_MODRM_TRUE,
/*opcode 0x98*/ PTI_MODRM_TRUE,
/*opcode 0x99*/ PTI_MODRM_TRUE,
/*opcode 0x9a*/ PTI_MODRM_TRUE,
/*opcode 0x9b*/ PTI_MODRM_TRUE,
/*opcode 0x9c*/ PTI_MODRM_TRUE,
/*opcode 0x9d*/ PTI_MODRM_TRUE,
/*opcode 0x9e*/ PTI_MODRM_TRUE,
/*opcode 0x9f*/ PTI_MODRM_TRUE,
/*opcode 0xa0*/ PTI_MODRM_FALSE,
/*opcode 0xa1*/ PTI_MODRM_FALSE,
/*opcode 0xa2*/ PTI_MODRM_FALSE,
/*opcode 0xa3*/ PTI_MODRM_TRUE,
/*opcode 0xa4*/ PTI_MODRM_TRUE,
/*opcode 0xa5*/ PTI_MODRM_TRUE,
/*opcode 0xa6*/ PTI_MODRM_UNDEF,
/*opcode 0xa7*/ PTI_MODRM_UNDEF,
/*opcode 0xa8*/ PTI_MODRM_FALSE,
/*opcode 0xa9*/ PTI_MODRM_FALSE,
/*opcode 0xaa*/ PTI_MODRM_FALSE,
/*opcode 0xab*/ PTI_MODRM_TRUE,
/*opcode 0xac*/ PTI_MODRM_TRUE,
/*opcode 0xad*/ PTI_MODRM_TRUE,
/*opcode 0xae*/ PTI_MODRM_TRUE,
/*opcode 0xaf*/ PTI_MODRM_TRUE,
/*opcode 0xb0*/ PTI_MODRM_TRUE,
/*opcode 0xb1*/ PTI_MODRM_TRUE,
/*opcode 0xb2*/ PTI_MODRM_TRUE,
/*opcode 0xb3*/ PTI_MODRM_TRUE,
/*opcode 0xb4*/ PTI_MODRM_TRUE,
/*opcode 0xb5*/ PTI_MODRM_TRUE,
/*opcode 0xb6*/ PTI_MODRM_TRUE,
/*opcode 0xb7*/ PTI_MODRM_TRUE,
/*opcode 0xb8*/ PTI_MODRM_TRUE,
/*opcode 0xb9*/ PTI_MODRM_UNDEF,
/*opcode 0xba*/ PTI_MODRM_TRUE,
/*opcode 0xbb*/ PTI_MODRM_TRUE,
/*opcode 0xbc*/ PTI_MODRM_TRUE,
/*opcode 0xbd*/ PTI_MODRM_TRUE,
/*opcode 0xbe*/ PTI_MODRM_TRUE,
/*opcode 0xbf*/ PTI_MODRM_TRUE,
/*opcode 0xc0*/ PTI_MODRM_TRUE,
/*opcode 0xc1*/ PTI_MODRM_TRUE,
/*opcode 0xc2*/ PTI_MODRM_TRUE,
/*opcode 0xc3*/ PTI_MODRM_TRUE,
/*opcode 0xc4*/ PTI_MODRM_TRUE,
/*opcode 0xc5*/ PTI_MODRM_TRUE,
/*opcode 0xc6*/ PTI_MODRM_TRUE,
/*opcode 0xc7*/ PTI_MODRM_TRUE,
/*opcode 0xc8*/ PTI_MODRM_FALSE,
/*opcode 0xc9*/ PTI_MODRM_FALSE,
/*opcode 0xca*/ PTI_MODRM_FALSE,
/*opcode 0xcb*/ PTI_MODRM_FALSE,
/*opcode 0xcc*/ PTI_MODRM_FALSE,
/*opcode 0xcd*/ PTI_MODRM_FALSE,
/*opcode 0xce*/ PTI_MODRM_FALSE,
/*opcode 0xcf*/ PTI_MODRM_FALSE,
/*opcode 0xd0*/ PTI_MODRM_TRUE,
/*opcode 0xd1*/ PTI_MODRM_TRUE,
/*opcode 0xd2*/ PTI_MODRM_TRUE,
/*opcode 0xd3*/ PTI_MODRM_TRUE,
/*opcode 0xd4*/ PTI_MODRM_TRUE,
/*opcode 0xd5*/ PTI_MODRM_TRUE,
/*opcode 0xd6*/ PTI_MODRM_TRUE,
/*opcode 0xd7*/ PTI_MODRM_TRUE,
/*opcode 0xd8*/ PTI_MODRM_TRUE,
/*opcode 0xd9*/ PTI_MODRM_TRUE,
/*opcode 0xda*/ PTI_MODRM_TRUE,
/*opcode 0xdb*/ PTI_MODRM_TRUE,
/*opcode 0xdc*/ PTI_MODRM_TRUE,
/*opcode 0xdd*/ PTI_MODRM_TRUE,
/*opcode 0xde*/ PTI_MODRM_TRUE,
/*opcode 0xdf*/ PTI_MODRM_TRUE,
/*opcode 0xe0*/ PTI_MODRM_TRUE,
/*opcode 0xe1*/ PTI_MODRM_TRUE,
/*opcode 0xe2*/ PTI_MODRM_TRUE,
/*opcode 0xe3*/ PTI_MODRM_TRUE,
/*opcode 0xe4*/ PTI_MODRM_TRUE,
/*opcode 0xe5*/ PTI_MODRM_TRUE,
/*opcode 0xe6*/ PTI_MODRM_TRUE,
/*opcode 0xe7*/ PTI_MODRM_TRUE,
/*opcode 0xe8*/ PTI_MODRM_TRUE,
/*opcode 0xe9*/ PTI_MODRM_TRUE,
/*opcode 0xea*/ PTI_MODRM_TRUE,
/*opcode 0xeb*/ PTI_MODRM_TRUE,
/*opcode 0xec*/ PTI_MODRM_TRUE,
/*opcode 0xed*/ PTI_MODRM_TRUE,
/*opcode 0xee*/ PTI_MODRM_TRUE,
/*opcode 0xef*/ PTI_MODRM_TRUE,
/*opcode 0xf0*/ PTI_MODRM_TRUE,
/*opcode 0xf1*/ PTI_MODRM_TRUE,
/*opcode 0xf2*/ PTI_MODRM_TRUE,
/*opcode 0xf3*/ PTI_MODRM_TRUE,
/*opcode 0xf4*/ PTI_MODRM_TRUE,
/*opcode 0xf5*/ PTI_MODRM_TRUE,
/*opcode 0xf6*/ PTI_MODRM_TRUE,
/*opcode 0xf7*/ PTI_MODRM_TRUE,
/*opcode 0xf8*/ PTI_MODRM_TRUE,
/*opcode 0xf9*/ PTI_MODRM_TRUE,
/*opcode 0xfa*/ PTI_MODRM_TRUE,
/*opcode 0xfb*/ PTI_MODRM_TRUE,
/*opcode 0xfc*/ PTI_MODRM_TRUE,
/*opcode 0xfd*/ PTI_MODRM_TRUE,
/*opcode 0xfe*/ PTI_MODRM_TRUE,
/*opcode 0xff*/ PTI_MODRM_UNDEF,
};

#endif /* PTI_MODRM_H */
