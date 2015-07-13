/*
Copyright (C) 2013-2014 Draios inc.

This file is part of sysdig.

sysdig is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2 as
published by the Free Software Foundation.

sysdig is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with sysdig.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ppm_events_public.h"

const struct ppm_name_value socket_families[] = {
	{"AF_NFC", PPM_AF_NFC},
	{"AF_ALG", PPM_AF_ALG},
	{"AF_CAIF", PPM_AF_CAIF},
	{"AF_IEEE802154", PPM_AF_IEEE802154},
	{"AF_PHONET", PPM_AF_PHONET},
	{"AF_ISDN", PPM_AF_ISDN},
	{"AF_RXRPC", PPM_AF_RXRPC},
	{"AF_IUCV", PPM_AF_IUCV},
	{"AF_BLUETOOTH", PPM_AF_BLUETOOTH},
	{"AF_TIPC", PPM_AF_TIPC},
	{"AF_CAN", PPM_AF_CAN},
	{"AF_LLC", PPM_AF_LLC},
	{"AF_WANPIPE", PPM_AF_WANPIPE},
	{"AF_PPPOX", PPM_AF_PPPOX},
	{"AF_IRDA", PPM_AF_IRDA},
	{"AF_SNA", PPM_AF_SNA},
	{"AF_RDS", PPM_AF_RDS},
	{"AF_ATMSVC", PPM_AF_ATMSVC},
	{"AF_ECONET", PPM_AF_ECONET},
	{"AF_ASH", PPM_AF_ASH},
	{"AF_PACKET", PPM_AF_PACKET},
	{"AF_ROUTE", PPM_AF_ROUTE},
	{"AF_NETLINK", PPM_AF_NETLINK},
	{"AF_KEY", PPM_AF_KEY},
	{"AF_SECURITY", PPM_AF_SECURITY},
	{"AF_NETBEUI", PPM_AF_NETBEUI},
	{"AF_DECnet", PPM_AF_DECnet},
	{"AF_ROSE", PPM_AF_ROSE},
	{"AF_INET6", PPM_AF_INET6},
	{"AF_X25", PPM_AF_X25},
	{"AF_ATMPVC", PPM_AF_ATMPVC},
	{"AF_BRIDGE", PPM_AF_BRIDGE},
	{"AF_NETROM", PPM_AF_NETROM},
	{"AF_APPLETALK", PPM_AF_APPLETALK},
	{"AF_IPX", PPM_AF_IPX},
	{"AF_AX25", PPM_AF_AX25},
	{"AF_INET", PPM_AF_INET},
	{"AF_LOCAL", PPM_AF_LOCAL},
	{"AF_UNIX", PPM_AF_UNIX},
	{"AF_UNSPEC", PPM_AF_UNSPEC},
	{ },
};

const struct ppm_name_value file_flags[] = {
	{"O_LARGEFILE", PPM_O_LARGEFILE},
	{"O_DIRECTORY", PPM_O_DIRECTORY},
	{"O_DIRECT", PPM_O_DIRECT},
	{"O_TRUNC", PPM_O_TRUNC},
	{"O_SYNC", PPM_O_SYNC},
	{"O_NONBLOCK", PPM_O_NONBLOCK},
	{"O_EXCL", PPM_O_EXCL},
	{"O_DSYNC", PPM_O_DSYNC},
	{"O_APPEND", PPM_O_APPEND},
	{"O_CREAT", PPM_O_CREAT},
	{"O_RDWR", PPM_O_RDWR},
	{"O_WRONLY", PPM_O_WRONLY},
	{"O_RDONLY", PPM_O_RDONLY},
	{"O_NONE", PPM_O_NONE},
	{ },
};

const struct ppm_name_value flock_flags[] = {
	{"LOCK_SH", PPM_LOCK_SH},
	{"LOCK_EX", PPM_LOCK_EX},
	{"LOCK_NB", PPM_LOCK_NB},
	{"LOCK_UN", PPM_LOCK_UN},
	{"LOCK_NONE", PPM_LOCK_NONE},
	{ },
};

const struct ppm_name_value clone_flags[] = {
	{"CLONE_FILES", PPM_CL_CLONE_FILES},
	{"CLONE_FS", PPM_CL_CLONE_FS},
	{"CLONE_IO", PPM_CL_CLONE_IO},
	{"CLONE_NEWIPC", PPM_CL_CLONE_NEWIPC},
	{"CLONE_NEWNET", PPM_CL_CLONE_NEWNET},
	{"CLONE_NEWNS", PPM_CL_CLONE_NEWNS},
	{"CLONE_NEWPID", PPM_CL_CLONE_NEWPID},
	{"CLONE_NEWUTS", PPM_CL_CLONE_NEWUTS},
	{"CLONE_PARENT", PPM_CL_CLONE_PARENT},
	{"CLONE_PARENT_SETTID", PPM_CL_CLONE_PARENT_SETTID},
	{"CLONE_PTRACE", PPM_CL_CLONE_PTRACE},
	{"CLONE_SIGHAND", PPM_CL_CLONE_SIGHAND},
	{"CLONE_SYSVSEM", PPM_CL_CLONE_SYSVSEM},
	{"CLONE_THREAD", PPM_CL_CLONE_THREAD},
	{"CLONE_UNTRACED", PPM_CL_CLONE_UNTRACED},
	{"CLONE_VM", PPM_CL_CLONE_VM},
	{"CLONE_INVERTED", PPM_CL_CLONE_INVERTED},
	{"NAME_CHANGED", PPM_CL_NAME_CHANGED},
	{"CLOSED", PPM_CL_CLOSED},
	{"CLONE_NEWUSER", PPM_CL_CLONE_NEWUSER},
	{ },
};

const struct ppm_name_value futex_operations[] = {
	{"FUTEX_CLOCK_REALTIME", PPM_FU_FUTEX_CLOCK_REALTIME},
	{"FUTEX_PRIVATE_FLAG", PPM_FU_FUTEX_PRIVATE_FLAG},
	{"FUTEX_CMP_REQUEUE_PI", PPM_FU_FUTEX_CMP_REQUEUE_PI},
	{"FUTEX_WAIT_REQUEUE_PI", PPM_FU_FUTEX_WAIT_REQUEUE_PI},
	{"FUTEX_WAKE_BITSET", PPM_FU_FUTEX_WAKE_BITSET},
	{"FUTEX_WAIT_BITSET", PPM_FU_FUTEX_WAIT_BITSET},
	{"FUTEX_TRYLOCK_PI", PPM_FU_FUTEX_TRYLOCK_PI},
	{"FUTEX_UNLOCK_PI", PPM_FU_FUTEX_UNLOCK_PI},
	{"FUTEX_LOCK_PI", PPM_FU_FUTEX_LOCK_PI},
	{"FUTEX_WAKE_OP", PPM_FU_FUTEX_WAKE_OP},
	{"FUTEX_CMP_REQUEUE", PPM_FU_FUTEX_CMP_REQUEUE},
	{"FUTEX_REQUEUE", PPM_FU_FUTEX_REQUEUE},
	{"FUTEX_FD", PPM_FU_FUTEX_FD},
	{"FUTEX_WAKE", PPM_FU_FUTEX_WAKE},
	{"FUTEX_WAIT", PPM_FU_FUTEX_WAIT},
	{ },
};

const struct ppm_name_value poll_flags[] = {
	{"POLLIN", PPM_POLLIN},
	{"POLLPRI", PPM_POLLPRI},
	{"POLLOUT", PPM_POLLOUT},
	{"POLLRDHUP", PPM_POLLRDHUP},
	{"POLLERR", PPM_POLLERR},
	{"POLLHUP", PPM_POLLHUP},
	{"POLLNVAL", PPM_POLLNVAL},
	{"POLLRDNORM", PPM_POLLRDNORM},
	{"POLLRDBAND", PPM_POLLRDBAND},
	{"POLLWRNORM", PPM_POLLWRNORM},
	{"POLLWRBAND", PPM_POLLWRBAND},
	{ },
};

const struct ppm_name_value lseek_whence[] = {
	{"SEEK_END", PPM_SEEK_END},
	{"SEEK_CUR", PPM_SEEK_CUR},
	{"SEEK_SET", PPM_SEEK_SET},
	{ },
};

const struct ppm_name_value shutdown_how[] = {
	{"SHUT_RDWR", PPM_SHUT_RDWR},
	{"SHUT_WR", PPM_SHUT_WR},
	{"SHUT_RD", PPM_SHUT_RD},
	{ },
};

const struct ppm_name_value rlimit_resources[] = {
	{"RLIMIT_UNKNOWN", PPM_RLIMIT_UNKNOWN},
	{"RLIMIT_RTTIME", PPM_RLIMIT_RTTIME},
	{"RLIMIT_RTPRIO", PPM_RLIMIT_RTPRIO},
	{"RLIMIT_NICE", PPM_RLIMIT_NICE},
	{"RLIMIT_MSGQUEUE", PPM_RLIMIT_MSGQUEUE},
	{"RLIMIT_SIGPENDING", PPM_RLIMIT_SIGPENDING},
	{"RLIMIT_LOCKS", PPM_RLIMIT_LOCKS},
	{"RLIMIT_AS", PPM_RLIMIT_AS},
	{"RLIMIT_MEMLOCK", PPM_RLIMIT_MEMLOCK},
	{"RLIMIT_NOFILE", PPM_RLIMIT_NOFILE},
	{"RLIMIT_NPROC", PPM_RLIMIT_NPROC},
	{"RLIMIT_RSS", PPM_RLIMIT_RSS},
	{"RLIMIT_CORE", PPM_RLIMIT_CORE},
	{"RLIMIT_STACK", PPM_RLIMIT_STACK},
	{"RLIMIT_DATA", PPM_RLIMIT_DATA},
	{"RLIMIT_FSIZE", PPM_RLIMIT_FSIZE},
	{"RLIMIT_CPU", PPM_RLIMIT_CPU},
	{ },
};

const struct ppm_name_value fcntl_commands[] = {
	{"F_GETPIPE_SZ", PPM_FCNTL_F_GETPIPE_SZ},
	{"F_SETPIPE_SZ", PPM_FCNTL_F_SETPIPE_SZ},
	{"F_NOTIFY", PPM_FCNTL_F_NOTIFY},
	{"F_DUPFD_CLOEXEC", PPM_FCNTL_F_DUPFD_CLOEXEC},
	{"F_CANCELLK", PPM_FCNTL_F_CANCELLK},
	{"F_GETLEASE", PPM_FCNTL_F_GETLEASE},
	{"F_SETLEASE", PPM_FCNTL_F_SETLEASE},
	{"F_GETOWN_EX", PPM_FCNTL_F_GETOWN_EX},
	{"F_SETOWN_EX", PPM_FCNTL_F_SETOWN_EX},
#ifndef CONFIG_64BIT
	{"F_SETLKW64", PPM_FCNTL_F_SETLKW64},
	{"F_SETLK64", PPM_FCNTL_F_SETLK64},
	{"F_GETLK64", PPM_FCNTL_F_GETLK64},
#endif
	{"F_GETSIG", PPM_FCNTL_F_GETSIG},
	{"F_SETSIG", PPM_FCNTL_F_SETSIG},
	{"F_GETOWN", PPM_FCNTL_F_GETOWN},
	{"F_SETOWN", PPM_FCNTL_F_SETOWN},
	{"F_SETLKW", PPM_FCNTL_F_SETLKW},
	{"F_SETLK", PPM_FCNTL_F_SETLK},
	{"F_GETLK", PPM_FCNTL_F_GETLK},
	{"F_SETFL", PPM_FCNTL_F_SETFL},
	{"F_GETFL", PPM_FCNTL_F_GETFL},
	{"F_SETFD", PPM_FCNTL_F_SETFD},
	{"F_GETFD", PPM_FCNTL_F_GETFD},
	{"F_DUPFD", PPM_FCNTL_F_DUPFD},
	{"UNKNOWN", PPM_FCNTL_UNKNOWN},
	{ },
};

const struct ppm_name_value ptrace_requests[] = {
	{"PTRACE_SINGLEBLOCK", PPM_PTRACE_SINGLEBLOCK},
	{"PTRACE_SYSEMU_SINGLESTEP", PPM_PTRACE_SYSEMU_SINGLESTEP},
	{"PTRACE_SYSEMU", PPM_PTRACE_SYSEMU},
	{"PTRACE_ARCH_PRCTL", PPM_PTRACE_ARCH_PRCTL},
	{"PTRACE_SET_THREAD_AREA", PPM_PTRACE_SET_THREAD_AREA},
	{"PTRACE_GET_THREAD_AREA", PPM_PTRACE_GET_THREAD_AREA},
	{"PTRACE_OLDSETOPTIONS", PPM_PTRACE_OLDSETOPTIONS},
	{"PTRACE_SETFPXREGS", PPM_PTRACE_SETFPXREGS},
	{"PTRACE_GETFPXREGS", PPM_PTRACE_GETFPXREGS},
	{"PTRACE_SETFPREGS", PPM_PTRACE_SETFPREGS},
	{"PTRACE_GETFPREGS", PPM_PTRACE_GETFPREGS},
	{"PTRACE_SETREGS", PPM_PTRACE_SETREGS},
	{"PTRACE_GETREGS", PPM_PTRACE_GETREGS},
	{"PTRACE_SETSIGMASK", PPM_PTRACE_SETSIGMASK},
	{"PTRACE_GETSIGMASK", PPM_PTRACE_GETSIGMASK},
	{"PTRACE_PEEKSIGINFO", PPM_PTRACE_PEEKSIGINFO},
	{"PTRACE_LISTEN", PPM_PTRACE_LISTEN},
	{"PTRACE_INTERRUPT", PPM_PTRACE_INTERRUPT},
	{"PTRACE_SEIZE", PPM_PTRACE_SEIZE},
	{"PTRACE_SETREGSET", PPM_PTRACE_SETREGSET},
	{"PTRACE_GETREGSET", PPM_PTRACE_GETREGSET},
	{"PTRACE_SETSIGINFO", PPM_PTRACE_SETSIGINFO},
	{"PTRACE_GETSIGINFO", PPM_PTRACE_GETSIGINFO},
	{"PTRACE_GETEVENTMSG", PPM_PTRACE_GETEVENTMSG},
	{"PTRACE_SETOPTIONS", PPM_PTRACE_SETOPTIONS},
	{"PTRACE_SYSCALL", PPM_PTRACE_SYSCALL},
	{"PTRACE_DETACH", PPM_PTRACE_DETACH},
	{"PTRACE_ATTACH", PPM_PTRACE_ATTACH},
	{"PTRACE_SINGLESTEP", PPM_PTRACE_SINGLESTEP},
	{"PTRACE_KILL", PPM_PTRACE_KILL},
	{"PTRACE_CONT", PPM_PTRACE_CONT},
	{"PTRACE_POKEUSR", PPM_PTRACE_POKEUSR},
	{"PTRACE_POKEDATA", PPM_PTRACE_POKEDATA},
	{"PTRACE_POKETEXT", PPM_PTRACE_POKETEXT},
	{"PTRACE_PEEKUSR", PPM_PTRACE_PEEKUSR},
	{"PTRACE_PEEKDATA", PPM_PTRACE_PEEKDATA},
	{"PTRACE_PEEKTEXT", PPM_PTRACE_PEEKTEXT},
	{"PTRACE_TRACEME", PPM_PTRACE_TRACEME},
	{"PTRACE_UNKNOWN", PPM_PTRACE_UNKNOWN},
	{ },
};

const struct ppm_name_value prot_flags[] = {
	{"PROT_READ", PPM_PROT_READ},
	{"PROT_WRITE", PPM_PROT_WRITE},
	{"PROT_EXEC", PPM_PROT_EXEC},
	{"PROT_SEM", PPM_PROT_SEM},
	{"PROT_GROWSDOWN", PPM_PROT_GROWSDOWN},
	{"PROT_GROWSUP", PPM_PROT_GROWSUP},
	{"PROT_SAO", PPM_PROT_SAO},
	{"PROT_NONE", PPM_PROT_NONE},
	{ },
};

const struct ppm_name_value mmap_flags[] = {
	{"MAP_SHARED", PPM_MAP_SHARED},
	{"MAP_PRIVATE", PPM_MAP_PRIVATE},
	{"MAP_FIXED", PPM_MAP_FIXED},
	{"MAP_ANONYMOUS", PPM_MAP_ANONYMOUS},
	{"MAP_32BIT", PPM_MAP_32BIT},
	{"MAP_RENAME", PPM_MAP_RENAME},
	{"MAP_NORESERVE", PPM_MAP_NORESERVE},
	{"MAP_POPULATE", PPM_MAP_POPULATE},
	{"MAP_NONBLOCK", PPM_MAP_NONBLOCK},
	{"MAP_GROWSDOWN", PPM_MAP_GROWSDOWN},
	{"MAP_DENYWRITE", PPM_MAP_DENYWRITE},
	{"MAP_EXECUTABLE", PPM_MAP_EXECUTABLE},
	{"MAP_INHERIT", PPM_MAP_INHERIT},
	{"MAP_FILE", PPM_MAP_FILE},
	{"MAP_LOCKED", PPM_MAP_LOCKED},
	{ },
};

const struct ppm_name_value splice_flags[] = {
	{"SPLICE_F_MOVE", PPM_SPLICE_F_MOVE},
	{"SPLICE_F_NONBLOCK", PPM_SPLICE_F_NONBLOCK},
	{"SPLICE_F_MORE", PPM_SPLICE_F_MORE},
	{"SPLICE_F_GIFT", PPM_SPLICE_F_GIFT},
	{ },
};

const struct ppm_name_value quotactl_dqi_flags[] = {
	{"DQF_NONE", PPM_DQF_NONE},
	{"V1_DQF_RSQUASH", PPM_V1_DQF_RSQUASH},
	{ }
};

const struct ppm_name_value quotactl_cmds[] = {
	{"Q_QUOTAON", PPM_Q_QUOTAON},
	{"Q_QUOTAOFF", PPM_Q_QUOTAOFF},
	{"Q_GETFMT", PPM_Q_GETFMT},
	{"Q_GETINFO", PPM_Q_GETINFO},
	{"Q_SETINFO", PPM_Q_SETINFO},
	{"Q_GETQUOTA", PPM_Q_GETQUOTA},
	{"Q_SETQUOTA", PPM_Q_SETQUOTA},
	{"Q_SYNC", PPM_Q_SYNC},
	{"Q_XQUOTAON", PPM_Q_XQUOTAON},
	{"Q_XQUOTAOFF", PPM_Q_XQUOTAOFF},
	{"Q_XGETQUOTA", PPM_Q_XGETQUOTA},
	{"Q_XSETQLIM", PPM_Q_XSETQLIM},
	{"Q_XGETQSTAT", PPM_Q_XGETQSTAT},
	{"Q_XQUOTARM", PPM_Q_XQUOTARM},
	{"Q_XQUOTASYNC", PPM_Q_XQUOTASYNC},
	{ },
};

const struct ppm_name_value quotactl_types[] = {
	{"USRQUOTA", PPM_USRQUOTA},
	{"GRPQUOTA", PPM_GRPQUOTA},
	{ },
};

const struct ppm_name_value quotactl_quota_fmts[] = {
	{"QFMT_NOT_USED", PPM_QFMT_NOT_USED},
	{"QFMT_VFS_OLD", PPM_QFMT_VFS_OLD},
	{"QFMT_VFS_V0", PPM_QFMT_VFS_V0},
	{"QFMT_VFS_V1", PPM_QFMT_VFS_V1},
	{ }
};
