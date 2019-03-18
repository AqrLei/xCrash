// Copyright (c) 2019-present, iQIYI, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

// Created by caikelun on 2019-03-07.

#ifndef XC_CORE_H
#define XC_CORE_H 1

#include <stdint.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

int xc_core_init(int restore_signal_handler,
                 const char *app_id,
                 const char *app_version,
                 const char *app_lib_dir,
                 const char *log_dir,
                 const char *log_prefix,
                 const char *log_suffix,
                 unsigned int log_count_max,
                 unsigned int logcat_system_lines,
                 unsigned int logcat_events_lines,
                 unsigned int logcat_main_lines,
                 int dump_map,
                 int dump_fds,
                 int dump_all_threads,
                 int dump_all_threads_count_max,
                 const char **dump_all_threads_whitelist,
                 size_t dump_all_threads_whitelist_len);

#ifdef __cplusplus
}
#endif

#endif
