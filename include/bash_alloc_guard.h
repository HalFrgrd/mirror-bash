/* bash_alloc_guard.h - Single-thread concurrency detector & stacktrace generator for GNU Bash allocator */

#ifndef _BASH_ALLOC_GUARD_H_
#define _BASH_ALLOC_GUARD_H_

#include <stdatomic.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <execinfo.h>

extern _Atomic pid_t g_bash_allocator_owner_tid;
extern _Thread_local int g_bash_allocator_recursion_depth;

void bash_allocator_guard_enter(const char *func_name);
void bash_allocator_guard_exit(void);

#endif /* _BASH_ALLOC_GUARD_H_ */
