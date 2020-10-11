#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sys.h>
#include <asm/syscall.h>

long long sys_count;

SYSCALL_DEFINE0(nsyscall)
{
	return sys_count;
}
