#if defined LINUX_MIPSN64
	/* For an N64 strace decode the N64 64-bit syscalls.  */
	{ 3,	TD,	sys_read,		"read"		}, /* 5000 */ /* start of Linux N64 */
	{ 3,	TD,	sys_write,		"write"		}, /* 5001 */
	{ 3,	TD|TF,	sys_open,		"open"		}, /* 5002 */
	{ 1,	TD,	sys_close,		"close"		}, /* 5003 */
	{ 2,	TF,	sys_stat,		"stat"		}, /* 5004 */
	{ 2,	TD,	sys_fstat,		"fstat"		}, /* 5005 */
	{ 2,	TF,	sys_lstat,		"lstat"		}, /* 5006 */
	{ 3,	TD,	sys_poll,		"poll"		}, /* 5007 */
	{ 3,	TD,	sys_lseek,		"lseek"		}, /* 5008 */
	{ 6,	TD|TM,	sys_mmap,		"mmap"		}, /* 5009 */
	{ 3,	TM,	sys_mprotect,		"mprotect"	}, /* 5010 */
	{ 2,	TM,	sys_munmap,		"munmap"	}, /* 5011 */
	{ 1,	TM,	sys_brk,		"brk"		}, /* 5012 */
	{ 4,	TS,	sys_rt_sigaction,	"rt_sigaction"	}, /* 5013 */
	{ 4,	TS,	sys_rt_sigprocmask,	"rt_sigprocmask"}, /* 5014 */
	{ 3,	TD,	sys_ioctl,		"ioctl"		}, /* 5015 */
	{ 4,	TD,	sys_pread,		"pread64"	}, /* 5016 */
	{ 4,	TD,	sys_pwrite,		"pwrite64"	}, /* 5017 */
	{ 3,	TD,	sys_readv,		"readv"		}, /* 5018 */
	{ 3,	TD,	sys_writev,		"writev"	}, /* 5019 */
	{ 2,	TF,	sys_access,		"access"	}, /* 5020 */
	{ 1,	TD,	sys_pipe,		"pipe"		}, /* 5021 */
	{ 5,	TD,	sys_select,		"_newselect"	}, /* 5022 */
	{ 0,	0,	sys_sched_yield,	"sched_yield"	}, /* 5023 */
	{ 5,	TM,	sys_mremap,		"mremap"	}, /* 5024 */
	{ 3,	TM,	sys_msync,		"msync"		}, /* 5025 */
	{ 3,	TM,	sys_mincore,		"mincore"	}, /* 5026 */
	{ 3,	TM,	sys_madvise,		"madvise"	}, /* 5027 */
	{ 3,	TI,	sys_shmget,		"shmget"	}, /* 5028 */
	{ 3,	TI|TM,	sys_shmat,		"shmat"		}, /* 5029 */
	{ 3,	TI,	sys_shmctl,		"shmctl"	}, /* 5030 */
	{ 1,	TD,	sys_dup,		"dup"		}, /* 5031 */
	{ 2,	TD,	sys_dup2,		"dup2"		}, /* 5032 */
	{ 0,	TS,	sys_pause,		"pause"		}, /* 5033 */
	{ 2,	0,	sys_nanosleep,		"nanosleep"	}, /* 5034 */
	{ 2,	0,	sys_getitimer,		"getitimer"	}, /* 5035 */
	{ 3,	0,	sys_setitimer,		"setitimer"	}, /* 5036 */
	{ 1,	0,	sys_alarm,		"alarm"		}, /* 5037 */
	{ 0,	0,	sys_getpid,		"getpid"	}, /* 5038 */
	{ 4,	TD|TN,	sys_sendfile,		"sendfile"	}, /* 5039 */
	{ 3,	TN,	sys_socket,		"socket"	}, /* 5040 */
	{ 3,	TN,	sys_connect,		"connect"	}, /* 5041 */
	{ 3,	TN,	sys_accept,		"accept"	}, /* 5042 */
	{ 6,	TN,	sys_sendto,		"sendto"	}, /* 5043 */
	{ 6,	TN,	sys_recvfrom,		"recvfrom"	}, /* 5044 */
	{ 3,	TN,	sys_sendmsg,		"sendmsg"	}, /* 5045 */
	{ 3,	TN,	sys_recvmsg,		"recvmsg"	}, /* 5046 */
	{ 2,	TN,	sys_shutdown,		"shutdown"	}, /* 5047 */
	{ 3,	TN,	sys_bind,		"bind"		}, /* 5048 */
	{ 2,	TN,	sys_listen,		"listen"	}, /* 5049 */
	{ 3,	TN,	sys_getsockname,	"getsockname"	}, /* 5050 */
	{ 3,	TN,	sys_getpeername,	"getpeername"	}, /* 5051 */
	{ 4,	TN,	sys_socketpair,		"socketpair"	}, /* 5052 */
	{ 5,	TN,	sys_setsockopt,		"setsockopt"	}, /* 5053 */
	{ 5,	TN,	sys_getsockopt,		"getsockopt"	}, /* 5054 */
	{ 5,	TP,	sys_clone,		"clone"		}, /* 5055 */
	{ 0,	TP,	sys_fork,		"fork"		}, /* 5056 */
	{ 3,	TF|TP,	sys_execve,		"execve"	}, /* 5057 */
	{ 1,	TP,	sys_exit,		"exit"		}, /* 5058 */
	{ 4,	TP,	sys_wait4,		"wait4"		}, /* 5059 */
	{ 2,	TS,	sys_kill,		"kill"		}, /* 5060 */
	{ 1,	0,	sys_uname,		"uname"		}, /* 5061 */
	{ 3,	TI,	sys_semget,		"semget"	}, /* 5062 */
	{ 3,	TI,	printargs,		"semop"		}, /* 5063 */
	{ 4,	TI,	sys_semctl,		"semctl"	}, /* 5064 */
	{ 1,	TI|TM,	sys_shmdt,		"shmdt"		}, /* 5065 */
	{ 2,	TI,	sys_msgget,		"msgget"	}, /* 5066 */
	{ 4,	TI,	sys_msgsnd,		"msgsnd"	}, /* 5067 */
	{ 5,	TI,	sys_msgrcv,		"msgrcv"	}, /* 5068 */
	{ 3,	TI,	sys_msgctl,		"msgctl"	}, /* 5069 */
	{ 3,	TD,	sys_fcntl,		"fcntl"		}, /* 5070 */
	{ 2,	TD,	sys_flock,		"flock"		}, /* 5071 */
	{ 1,	TD,	sys_fsync,		"fsync"		}, /* 5072 */
	{ 1,	TD,	sys_fdatasync,		"fdatasync"	}, /* 5073 */
	{ 2,	TF,	sys_truncate,		"truncate"	}, /* 5074 */
	{ 2,	TD,	sys_ftruncate,		"ftruncate"	}, /* 5075 */
	{ 3,	TD,	sys_getdents,		"getdents"	}, /* 5076 */
	{ 2,	TF,	sys_getcwd,		"getcwd"	}, /* 5077 */
	{ 1,	TF,	sys_chdir,		"chdir"		}, /* 5078 */
	{ 1,	TD,	sys_fchdir,		"fchdir"	}, /* 5079 */
	{ 2,	TF,	sys_rename,		"rename"	}, /* 5080 */
	{ 2,	TF,	sys_mkdir,		"mkdir"		}, /* 5081 */
	{ 1,	TF,	sys_rmdir,		"rmdir"		}, /* 5082 */
	{ 2,	TD|TF,	sys_creat,		"creat"		}, /* 5083 */
	{ 2,	TF,	sys_link,		"link"		}, /* 5084 */
	{ 1,	TF,	sys_unlink,		"unlink"	}, /* 5085 */
	{ 2,	TF,	sys_symlink,		"symlink"	}, /* 5086 */
	{ 3,	TF,	sys_readlink,		"readlink"	}, /* 5087 */
	{ 2,	TF,	sys_chmod,		"chmod"		}, /* 5088 */
	{ 2,	TD,	sys_fchmod,		"fchmod"	}, /* 5089 */
	{ 3,	TF,	sys_chown,		"chown"		}, /* 5090 */
	{ 3,	TD,	sys_fchown,		"fchown"	}, /* 5091 */
	{ 3,	TF,	sys_chown,		"lchown"	}, /* 5092 */
	{ 1,	0,	sys_umask,		"umask"		}, /* 5093 */
	{ 2,	0,	sys_gettimeofday,	"gettimeofday"	}, /* 5094 */
	{ 2,	0,	sys_getrlimit,		"getrlimit"	}, /* 5095 */
	{ 2,	0,	sys_getrusage,		"getrusage"	}, /* 5096 */
	{ 1,	0,	sys_sysinfo,		"sysinfo"	}, /* 5097 */
	{ 1,	0,	sys_times,		"times"		}, /* 5098 */
	{ 4,	0,	sys_ptrace,		"ptrace"	}, /* 5099 */
	{ 0,	NF,	sys_getuid,		"getuid"	}, /* 5100 */
	{ 3,	0,	sys_syslog,		"syslog"	}, /* 5101 */
	{ 0,	NF,	sys_getgid,		"getgid"	}, /* 5102 */
	{ 1,	0,	sys_setuid,		"setuid"	}, /* 5103 */
	{ 1,	0,	sys_setgid,		"setgid"	}, /* 5104 */
	{ 0,	NF,	sys_geteuid,		"geteuid"	}, /* 5105 */
	{ 0,	NF,	sys_getegid,		"getegid"	}, /* 5106 */
	{ 2,	0,	sys_setpgid,		"setpgid"	}, /* 5107 */
	{ 0,	0,	sys_getppid,		"getppid"	}, /* 5108 */
	{ 0,	0,	sys_getpgrp,		"getpgrp"	}, /* 5109 */
	{ 0,	0,	sys_setsid,		"setsid"	}, /* 5110 */
	{ 2,	0,	sys_setreuid,		"setreuid"	}, /* 5111 */
	{ 2,	0,	sys_setregid,		"setregid"	}, /* 5112 */
	{ 2,	0,	sys_getgroups,		"getgroups"	}, /* 5113 */
	{ 2,	0,	sys_setgroups,		"setgroups"	}, /* 5114 */
	{ 3,	0,	sys_setresuid,		"setresuid"	}, /* 5115 */
	{ 3,	0,	sys_getresuid,		"getresuid"	}, /* 5116 */
	{ 3,	0,	sys_setresgid,		"setresgid"	}, /* 5117 */
	{ 3,	0,	sys_getresgid,		"getresgid"	}, /* 5118 */
	{ 0,	0,	sys_getpgid,		"getpgid"	}, /* 5119 */
	{ 1,	NF,	sys_setfsuid,		"setfsuid"	}, /* 5120 */
	{ 1,	NF,	sys_setfsgid,		"setfsgid"	}, /* 5121 */
	{ 1,	0,	sys_getsid,		"getsid"	}, /* 5122 */
	{ 2,	0,	sys_capget,		"capget"	}, /* 5123 */
	{ 2,	0,	sys_capset,		"capset"	}, /* 5124 */
	{ 2,	TS,	sys_rt_sigpending,	"rt_sigpending"	}, /* 5125 */
	{ 4,	TS,	sys_rt_sigtimedwait,	"rt_sigtimedwait"},/* 5126 */
	{ 3,	TS,	sys_rt_sigqueueinfo,	"rt_sigqueueinfo"},/* 5127 */
	{ 2,	TS,	sys_rt_sigsuspend,	"rt_sigsuspend"	}, /* 5128 */
	{ 2,	TS,	sys_sigaltstack,	"sigaltstack"	}, /* 5129 */
	{ 2,	TF,	sys_utime,		"utime"		}, /* 5130 */
	{ 3,	TF,	sys_mknod,		"mknod"		}, /* 5131 */
	{ 1,	0,	sys_personality,	"personality"	}, /* 5132 */
	{ 2,	0,	sys_ustat,		"ustat"		}, /* 5133 */
	{ 3,	TF,	sys_statfs,		"statfs"	}, /* 5134 */
	{ 3,	TD,	sys_fstatfs,		"fstatfs"	}, /* 5135 */
	{ 5,	0,	sys_sysfs,		"sysfs"		}, /* 5136 */
	{ 2,	0,	sys_getpriority,	"getpriority"	}, /* 5137 */
	{ 3,	0,	sys_setpriority,	"setpriority"	}, /* 5138 */
	{ 2,	0,	sys_sched_setparam,	"sched_setparam"}, /* 5139 */
	{ 2,	0,	sys_sched_getparam,	"sched_getparam"}, /* 5140 */
	{ 3,	0,	sys_sched_setscheduler,	"sched_setscheduler"}, /* 5141 */
	{ 1,	0,	sys_sched_getscheduler,	"sched_getscheduler"}, /* 5142 */
	{ 1,	0,	sys_sched_get_priority_max,"sched_get_priority_max"}, /* 5143 */
	{ 1,	0,	sys_sched_get_priority_min,"sched_get_priority_min"}, /* 5144 */
	{ 2,	0,	sys_sched_rr_get_interval,"sched_rr_get_interval"}, /* 5145 */
	{ 2,	TM,	sys_mlock,		"mlock"		}, /* 5146 */
	{ 2,	TM,	sys_munlock,		"munlock"	}, /* 5147 */
	{ 1,	TM,	sys_mlockall,		"mlockall"	}, /* 5148 */
	{ 0,	TM,	sys_munlockall,		"munlockall"	}, /* 5149 */
	{ 0,	0,	sys_vhangup,		"vhangup"	}, /* 5150 */
	{ 2,	TF,	sys_pivotroot,		"pivot_root"	}, /* 5151 */
	{ 1,	0,	sys_sysctl,		"_sysctl"	}, /* 5152 */
	{ 5,	0,	sys_prctl,		"prctl"		}, /* 5153 */
	{ 1,	0,	sys_adjtimex,		"adjtimex"	}, /* 5154 */
	{ 2,	0,	sys_setrlimit,		"setrlimit"	}, /* 5155 */
	{ 1,	TF,	sys_chroot,		"chroot"	}, /* 5156 */
	{ 0,	0,	sys_sync,		"sync"		}, /* 5157 */
	{ 1,	TF,	sys_acct,		"acct"		}, /* 5158 */
	{ 2,	0,	sys_settimeofday,	"settimeofday"	}, /* 5159 */
	{ 5,	TF,	sys_mount,		"mount"		}, /* 5160 */
	{ 2,	TF,	sys_umount2,		"umount2"	}, /* 5161 */
	{ 2,	TF,	sys_swapon,		"swapon"	}, /* 5162 */
	{ 1,	TF,	sys_swapoff,		"swapoff"	}, /* 5163 */
	{ 4,	0,	sys_reboot,		"reboot"	}, /* 5164 */
	{ 2,	0,	sys_sethostname,	"sethostname"	}, /* 5165 */
	{ 2,	0,	sys_setdomainname,	"setdomainname"	}, /* 5166 */
	{ 2,	0,	sys_create_module,	"create_module"	}, /* 5167 */
	{ 4,	0,	sys_init_module,	"init_module"	}, /* 5168 */
	{ 1,	0,	sys_delete_module,	"delete_module"	}, /* 5169 */
	{ 1,	0,	sys_get_kernel_syms,	"get_kernel_syms"}, /* 5170 */
	{ 5,	0,	sys_query_module,	"query_module"	}, /* 5171 */
	{ 4,	TF,	sys_quotactl,		"quotactl"	}, /* 5172 */
	{ 3,	0,	sys_nfsservctl,		"nfsservctl"	}, /* 5173 */
	{ 5,	TN,	printargs,		"getpmsg"	}, /* 5174 */
	{ 5,	TN,	printargs,		"putpmsg"	}, /* 5175 */
	{ 0,	0,	sys_afs_syscall,	"afs_syscall"	}, /* 5176 */
	{ 0,	0,	printargs,		"reserved177"	}, /* 5177 */
	{ 0,	0,	sys_gettid,		"gettid"	}, /* 5178 */
	{ 3,	TD,	sys_readahead,		"readahead"	}, /* 5179 */
	{ 5,	TF,	sys_setxattr,		"setxattr"	}, /* 5180 */
	{ 5,	TF,	sys_setxattr,		"lsetxattr"	}, /* 5181 */
	{ 5,	TD,	sys_fsetxattr,		"fsetxattr"	}, /* 5182 */
	{ 4,	TF,	sys_getxattr,		"getxattr"	}, /* 5183 */
	{ 4,	TF,	sys_getxattr,		"lgetxattr"	}, /* 5184 */
	{ 4,	TD,	sys_fgetxattr,		"fgetxattr"	}, /* 5185 */
	{ 3,	TF,	sys_listxattr,		"listxattr"	}, /* 5186 */
	{ 3,	TF,	sys_listxattr,		"llistxattr"	}, /* 5187 */
	{ 3,	TD,	sys_flistxattr,		"flistxattr"	}, /* 5188 */
	{ 2,	TF,	sys_removexattr,	"removexattr"	}, /* 5189 */
	{ 2,	TF,	sys_removexattr,	"lremovexattr"	}, /* 5190 */
	{ 2,	TD,	sys_fremovexattr,	"fremovexattr"	}, /* 5191 */
	{ 2,	TS,	sys_kill,		"tkill"		}, /* 5192 */
	{ 1,	0,	sys_time,		"time"		}, /* 5193 */
	{ 6,	0,	sys_futex,		"futex"		}, /* 5194 */
	{ 3,	0,	sys_sched_setaffinity,	"sched_setaffinity"}, /* 5195 */
	{ 3,	0,	sys_sched_getaffinity,	"sched_getaffinity"}, /* 5196 */
	{ 3,	0,	printargs,		"cacheflush"	}, /* 5197 */
	{ 3,	0,	printargs,		"cachectl"	}, /* 5198 */
	{ 4,	0,	sys_sysmips,		"sysmips"	}, /* 5199 */
	{ 2,	0,	sys_io_setup,		"io_setup"	}, /* 5200 */
	{ 1,	0,	sys_io_destroy,		"io_destroy"	}, /* 5201 */
	{ 5,	0,	sys_io_getevents,	"io_getevents"	}, /* 5202 */
	{ 3,	0,	sys_io_submit,		"io_submit"	}, /* 5203 */
	{ 3,	0,	sys_io_cancel,		"io_cancel"	}, /* 5204 */
	{ 1,	TP,	sys_exit,		"exit_group"	}, /* 5205 */
	{ 3,	0,	sys_lookup_dcookie,	"lookup_dcookie" }, /* 5206 */
	{ 1,	TD,	sys_epoll_create,	"epoll_create"	}, /* 5207 */
	{ 4,	TD,	sys_epoll_ctl,		"epoll_ctl"	}, /* 5208 */
	{ 4,	TD,	sys_epoll_wait,		"epoll_wait"	}, /* 5209 */
	{ 5,	TM,	sys_remap_file_pages,	"remap_file_pages" }, /* 5210 */
	{ 0,	TS,	sys_rt_sigreturn,	"rt_sigreturn"	}, /* 5211 */
	{ 1,	0,	sys_set_tid_address,	"set_tid_address" }, /* 5212 */
	{ 0,	0,	sys_restart_syscall,	"restart_syscall" }, /* 5213 */
	{ 5,	TI,	sys_semtimedop,		"semtimedop"	}, /* 5214 */
	{ 4,	TD,	sys_fadvise64_64,	"fadvise64_64"	}, /* 5215 */
	{ 3,	0,	sys_timer_create,	"timer_create"	}, /* 5216 */
	{ 4,	0,	sys_timer_settime,	"timer_settime"	}, /* 5217 */
	{ 2,	0,	sys_timer_gettime,	"timer_gettime"	}, /* 5218 */
	{ 1,	0,	sys_timer_getoverrun,	"timer_getoverrun"}, /* 5219 */
	{ 1,	0,	sys_timer_delete,	"timer_delete"	}, /* 5220 */
	{ 2,	0,	sys_clock_settime,	"clock_settime"	}, /* 5221 */
	{ 2,	0,	sys_clock_gettime,	"clock_gettime"	}, /* 5222 */
	{ 2,	0,	sys_clock_getres,	"clock_getres"	}, /* 5223 */
	{ 4,	0,	sys_clock_nanosleep,	"clock_nanosleep"}, /* 5224 */
	{ 3,	TS,	sys_tgkill,		"tgkill"	}, /* 5225 */
	{ 2,	TF,	sys_utimes,		"utimes"	}, /* 5226 */
	{ 6,	TM,	sys_mbind,		"mbind"		}, /* 5227 */
	{ 5,	TM,	sys_get_mempolicy,	"get_mempolicy"	}, /* 5228 */
	{ 3,	TM,	sys_set_mempolicy,	"set_mempolicy"	}, /* 5229 */
	{ 4,	0,	sys_mq_open,		"mq_open"	}, /* 5230 */
	{ 1,	0,	sys_mq_unlink,		"mq_unlink"	}, /* 5231 */
	{ 5,	0,	sys_mq_timedsend,	"mq_timedsend"	}, /* 5232 */
	{ 5,	0,	sys_mq_timedreceive,	"mq_timedreceive" }, /* 5233 */
	{ 2,	0,	sys_mq_notify,		"mq_notify"	}, /* 5234 */
	{ 3,	0,	sys_mq_getsetattr,	"mq_getsetattr"	}, /* 5235 */
	{ 5,	0,	sys_vserver,		"vserver"	}, /* 5236 */
	{ 5,	TP,	sys_waitid,		"waitid"	}, /* 5237 */
	[5238] = { },
	{ 5,	0,	sys_add_key,		"add_key"	}, /* 5239 */
	{ 4,	0,	sys_request_key,	"request_key"	}, /* 5230 */
	{ 5,	0,	sys_keyctl,		"keyctl"	}, /* 5241 */
	{ 1,	0,	sys_set_thread_area,	"set_thread_area" }, /* 5242 */
	{ 0,	TD,	sys_inotify_init,	"inotify_init"	}, /* 5243 */
	{ 3,	TD,	sys_inotify_add_watch,	"inotify_add_watch" }, /* 5244 */
	{ 2,	TD,	sys_inotify_rm_watch,	"inotify_rm_watch" }, /* 5245 */
	{ 4,	TM,	sys_migrate_pages,	"migrate_pages"	}, /* 5246 */
	{ 4,	TD|TF,	sys_openat,		"openat"	}, /* 5247 */
	{ 3,	TD|TF,	sys_mkdirat,		"mkdirat"	}, /* 5248 */
	{ 4,	TD|TF,	sys_mknodat,		"mknodat"	}, /* 5249 */
	{ 5,	TD|TF,	sys_fchownat,		"fchownat"	}, /* 5250 */
	{ 3,	TD|TF,	sys_futimesat,		"futimesat"	}, /* 5251 */
	{ 4,	TD|TF,	sys_newfstatat,		"newfstatat"	}, /* 5252 */
	{ 3,	TD|TF,	sys_unlinkat,		"unlinkat"	}, /* 5253 */
	{ 4,	TD|TF,	sys_renameat,		"renameat"	}, /* 5254 */
	{ 5,	TD|TF,	sys_linkat,		"linkat"	}, /* 5255 */
	{ 3,	TD|TF,	sys_symlinkat,		"symlinkat"	}, /* 5256 */
	{ 4,	TD|TF,	sys_readlinkat,		"readlinkat"	}, /* 5257 */
	{ 3,	TD|TF,	sys_fchmodat,		"fchmodat"	}, /* 5258 */
	{ 3,	TD|TF,	sys_faccessat,		"faccessat"	}, /* 5259 */
	{ 6,	TD,	sys_pselect6,		"pselect6"	}, /* 5260 */
	{ 5,	TD,	sys_ppoll,		"ppoll"		}, /* 5261 */
	{ 1,	TP,	sys_unshare,		"unshare"	}, /* 5262 */
	{ 6,	TD,	sys_splice,		"splice"	}, /* 5263 */
	{ 4,	TD,	sys_sync_file_range,	"sync_file_range" }, /* 5264 */
	{ 4,	TD,	sys_tee,		"tee"		}, /* 5265 */
	{ 4,	TD,	sys_vmsplice,		"vmsplice"	}, /* 5266 */
	{ 6,	TM,	printargs,		"move_pages"	}, /* 5267 */
	{ 2,	0,	sys_set_robust_list,	"set_robust_list" }, /* 5268 */
	{ 3,	0,	sys_get_robust_list,	"get_robust_list" }, /* 5269 */
	{ 4,	0,	sys_kexec_load,		"kexec_load"	}, /* 5270 */
	{ 3,	0,	sys_getcpu,		"getcpu"	}, /* 5271 */
	{ 6,	TD,	sys_epoll_pwait,	"epoll_pwait"	}, /* 5272 */
	{ 3,	0,	sys_ioprio_set,		"ioprio_set"	}, /* 5273 */
	{ 2,	0,	sys_ioprio_get,		"ioprio_get"	}, /* 5274 */
	{ 4,	TD|TF,	sys_utimensat,		"utimensat"	}, /* 5275 */
	{ 3,	TD|TS,	sys_signalfd,		"signalfd"	}, /* 5276 */
	{ 4,	TD,	sys_timerfd,		"timerfd"	}, /* 5277 */
	{ 1,	TD,	sys_eventfd,		"eventfd"	}, /* 5278 */
	{ 4,	TD,	sys_fallocate,		"fallocate"	}, /* 5279 */
	{ 2,	TD,	sys_timerfd_create,	"timerfd_create" }, /* 5280 */
	{ 2,	TD,	sys_timerfd_gettime,	"timerfd_gettime" }, /* 5281 */
	{ 4,	TD,	sys_timerfd_settime,	"timerfd_settime" }, /* 5282 */
	{ 4,	TD|TS,	sys_signalfd4,		"signalfd4"	}, /* 5283 */
	{ 2,	TD,	sys_eventfd2,		"eventfd2"	}, /* 5284 */
	{ 1,	TD,	sys_epoll_create1,	"epoll_create1"	}, /* 5285 */
	{ 3,	TD,	sys_dup3,		"dup3"		}, /* 5286 */
	{ 2,	TD,	sys_pipe2,		"pipe2"		}, /* 5287 */
	{ 1,	TD,	sys_inotify_init1,	"inotify_init1"	}, /* 5288 */
	{ 4,	TD,	sys_preadv,		"preadv"	}, /* 5289 */
	{ 4,	TD,	sys_pwritev,		"pwritev"	}, /* 5290 */
	{ 4,	TP|TS,	sys_rt_tgsigqueueinfo,	"rt_tgsigqueueinfo" }, /* 5291 */
	{ 5,	TD,	sys_perf_event_open,	"perf_event_open" }, /* 5292 */
	{ 4,	TN,	sys_accept4,		"accept4"	}, /* 5293 */
	{ 5,	TN,	sys_recvmmsg,		"recvmmsg"	}, /* 5294 */
	{ 2,	TD,	sys_fanotify_init,	"fanotify_init"	}, /* 5295 */
	{ 5,	TD|TF,	sys_fanotify_mark,	"fanotify_mark"	}, /* 5296 */
	{ 4,	0,	sys_prlimit64,		"prlimit64"	}, /* 5297 */
	{ 5,	TD|TF,	sys_name_to_handle_at,	"name_to_handle_at"}, /* 5298 */
	{ 3,	TD,	sys_open_by_handle_at,	"open_by_handle_at"}, /* 5299 */
	{ 2,	0,	sys_clock_adjtime,	"clock_adjtime"	}, /* 5300 */
	{ 1,	TD,	sys_syncfs,		"syncfs"	}, /* 5301 */
	{ 4,	TN,	sys_sendmmsg,		"sendmmsg"	}, /* 5302 */
	{ 2,	TD,	sys_setns,		"setns"		}, /* 5303 */
	{ 6,	0,	sys_process_vm_readv,	"process_vm_readv"	}, /* 5304 */
	{ 6,	0,	sys_process_vm_writev,	"process_vm_writev"	}, /* 5305 */
	{ 5,	0,	sys_kcmp,		"kcmp"			}, /* 5306 */
	{ 3,	TD,	sys_finit_module,	"finit_module"		}, /* 5307 */
#else
	{ 0,	0,	printargs,		"n64_read"		}, /* 5000 */
	{ 0,	0,	printargs,		"n64_write"		}, /* 5001 */
	{ 0,	0,	printargs,		"n64_open"		}, /* 5002 */
	{ 0,	0,	printargs,		"n64_close"		}, /* 5003 */
	{ 0,	0,	printargs,		"n64_stat"		}, /* 5004 */
	{ 0,	0,	printargs,		"n64_fstat"		}, /* 5005 */
	{ 0,	0,	printargs,		"n64_lstat"		}, /* 5006 */
	{ 0,	0,	printargs,		"n64_poll"		}, /* 5007 */
	{ 0,	0,	printargs,		"n64_lseek"		}, /* 5008 */
	{ 0,	TD|TM,	printargs,		"n64_mmap"		}, /* 5009 */
	{ 0,	TM,	printargs,		"n64_mprotect"		}, /* 5010 */
	{ 0,	TM,	printargs,		"n64_munmap"		}, /* 5011 */
	{ 0,	TM,	printargs,		"n64_brk"		}, /* 5012 */
	{ 0,	0,	printargs,		"n64_rt_sigaction"	}, /* 5013 */
	{ 0,	0,	printargs,		"n64_rt_sigprocmask"	}, /* 5014 */
	{ 0,	0,	printargs,		"n64_ioctl"		}, /* 5015 */
	{ 0,	0,	printargs,		"n64_pread"		}, /* 5016 */
	{ 0,	0,	printargs,		"n64_pwrite"		}, /* 5017 */
	{ 0,	0,	printargs,		"n64_readv"		}, /* 5018 */
	{ 0,	0,	printargs,		"n64_writev"		}, /* 5019 */
	{ 0,	0,	printargs,		"n64_access"		}, /* 5020 */
	{ 0,	0,	printargs,		"n64_pipe"		}, /* 5021 */
	{ 0,	0,	printargs,		"n64__newselect"	}, /* 5022 */
	{ 0,	0,	printargs,		"n64_sched_yield"	}, /* 5023 */
	{ 0,	TM,	printargs,		"n64_mremap"		}, /* 5024 */
	{ 0,	TM,	printargs,		"n64_msync"		}, /* 5025 */
	{ 0,	TM,	printargs,		"n64_mincore"		}, /* 5026 */
	{ 0,	TM,	printargs,		"n64_madvise"		}, /* 5027 */
	{ 0,	0,	printargs,		"n64_shmget"		}, /* 5028 */
	{ 0,	TI|TM,	printargs,		"n64_shmat"		}, /* 5029 */
	{ 0,	0,	printargs,		"n64_shmctl"		}, /* 5030 */
	{ 0,	0,	printargs,		"n64_dup"		}, /* 5031 */
	{ 0,	0,	printargs,		"n64_dup2"		}, /* 5032 */
	{ 0,	0,	printargs,		"n64_pause"		}, /* 5033 */
	{ 0,	0,	printargs,		"n64_nanosleep"		}, /* 5034 */
	{ 0,	0,	printargs,		"n64_getitimer"		}, /* 5035 */
	{ 0,	0,	printargs,		"n64_setitimer"		}, /* 5036 */
	{ 0,	0,	printargs,		"n64_alarm"		}, /* 5037 */
	{ 0,	0,	printargs,		"n64_getpid"		}, /* 5038 */
	{ 0,	0,	printargs,		"n64_sendfile"		}, /* 5039 */
	{ 0,	0,	printargs,		"n64_socketcall"	}, /* 5040 */
	{ 0,	0,	printargs,		"n64_connect"		}, /* 5041 */
	{ 0,	0,	printargs,		"n64_accept"		}, /* 5042 */
	{ 0,	0,	printargs,		"n64_sendto"		}, /* 5043 */
	{ 0,	0,	printargs,		"n64_recvfrom"		}, /* 5044 */
	{ 0,	0,	printargs,		"n64_sendmsg"		}, /* 5045 */
	{ 0,	0,	printargs,		"n64_recvmsg"		}, /* 5046 */
	{ 0,	0,	printargs,		"n64_shutdown"		}, /* 5047 */
	{ 0,	0,	printargs,		"n64_bind"		}, /* 5048 */
	{ 0,	0,	printargs,		"n64_listen"		}, /* 5049 */
	{ 0,	0,	printargs,		"n64_getsockname"	}, /* 5050 */
	{ 0,	0,	printargs,		"n64_getpeername"	}, /* 5051 */
	{ 0,	0,	printargs,		"n64_socketpair"	}, /* 5052 */
	{ 0,	0,	printargs,		"n64_setsockopt"	}, /* 5053 */
	{ 0,	0,	printargs,		"n64_getsockopt"	}, /* 5054 */
	{ 5,	TP,	printargs,		"n64_clone"		}, /* 5055 */
	{ 0,	TP,	printargs,		"n64_fork"		}, /* 5056 */
	{ 3,	TF|TP,	printargs,		"n64_execve"		}, /* 5057 */
	{ 1,	TP,	printargs,		"n64_exit"		}, /* 5058 */
	{ 4,	TP,	printargs,		"n64_wait4"		}, /* 5059 */
	{ 0,	0,	printargs,		"n64_kill"		}, /* 5060 */
	{ 0,	0,	printargs,		"n64_uname"		}, /* 5061 */
	{ 0,	0,	printargs,		"n64_semget"		}, /* 5062 */
	{ 0,	0,	printargs,		"n64_semop"		}, /* 5063 */
	{ 0,	0,	printargs,		"n64_semctl"		}, /* 5064 */
	{ 0,	TI|TM,	printargs,		"n64_shmdt"		}, /* 5065 */
	{ 0,	0,	printargs,		"n64_msgget"		}, /* 5066 */
	{ 0,	0,	printargs,		"n64_msgsnd"		}, /* 5067 */
	{ 0,	0,	printargs,		"n64_msgrcv"		}, /* 5068 */
	{ 0,	0,	printargs,		"n64_msgctl"		}, /* 5069 */
	{ 0,	0,	printargs,		"n64_fcntl"		}, /* 5070 */
	{ 0,	0,	printargs,		"n64_flock"		}, /* 5071 */
	{ 0,	0,	printargs,		"n64_fsync"		}, /* 5072 */
	{ 0,	0,	printargs,		"n64_fdatasync"		}, /* 5073 */
	{ 0,	0,	printargs,		"n64_truncate"		}, /* 5074 */
	{ 0,	0,	printargs,		"n64_ftruncate"		}, /* 5075 */
	{ 0,	0,	printargs,		"n64_getdents"		}, /* 5076 */
	{ 0,	0,	printargs,		"n64_getcwd"		}, /* 5077 */
	{ 0,	0,	printargs,		"n64_chdir"		}, /* 5078 */
	{ 0,	0,	printargs,		"n64_fchdir"		}, /* 5079 */
	{ 0,	0,	printargs,		"n64_rename"		}, /* 5080 */
	{ 0,	0,	printargs,		"n64_mkdir"		}, /* 5081 */
	{ 0,	0,	printargs,		"n64_rmdir"		}, /* 5082 */
	{ 0,	0,	printargs,		"n64_creat"		}, /* 5083 */
	{ 0,	0,	printargs,		"n64_link"		}, /* 5084 */
	{ 0,	0,	printargs,		"n64_unlink"		}, /* 5085 */
	{ 0,	0,	printargs,		"n64_symlink"		}, /* 5086 */
	{ 0,	0,	printargs,		"n64_readlink"		}, /* 5087 */
	{ 0,	0,	printargs,		"n64_chmod"		}, /* 5088 */
	{ 0,	0,	printargs,		"n64_fchmod"		}, /* 5089 */
	{ 0,	0,	printargs,		"n64_chown"		}, /* 5090 */
	{ 0,	0,	printargs,		"n64_fchown"		}, /* 5091 */
	{ 0,	0,	printargs,		"n64_lchown"		}, /* 5092 */
	{ 0,	0,	printargs,		"n64_umask"		}, /* 5093 */
	{ 0,	0,	printargs,		"n64_gettimeofday"	}, /* 5094 */
	{ 0,	0,	printargs,		"n64_getrlimit"		}, /* 5095 */
	{ 0,	0,	printargs,		"n64_getrusage"		}, /* 5096 */
	{ 0,	0,	printargs,		"n64_sysinfo"		}, /* 5097 */
	{ 0,	0,	printargs,		"n64_times"		}, /* 5098 */
	{ 0,	0,	printargs,		"n64_ptrace"		}, /* 5099 */
	{ 0,	0,	printargs,		"n64_getuid"		}, /* 5100 */
	{ 0,	0,	printargs,		"n64_syslog"		}, /* 5101 */
	{ 0,	0,	printargs,		"n64_getgid"		}, /* 5102 */
	{ 0,	0,	printargs,		"n64_setuid"		}, /* 5103 */
	{ 0,	0,	printargs,		"n64_setgid"		}, /* 5104 */
	{ 0,	0,	printargs,		"n64_geteuid"		}, /* 5105 */
	{ 0,	0,	printargs,		"n64_getegid"		}, /* 5106 */
	{ 0,	0,	printargs,		"n64_setpgid"		}, /* 5107 */
	{ 0,	0,	printargs,		"n64_getppid"		}, /* 5108 */
	{ 0,	0,	printargs,		"n64_getpgrp"		}, /* 5109 */
	{ 0,	0,	printargs,		"n64_setsid"		}, /* 5110 */
	{ 0,	0,	printargs,		"n64_setreuid"		}, /* 5111 */
	{ 0,	0,	printargs,		"n64_setregid"		}, /* 5112 */
	{ 0,	0,	printargs,		"n64_getgroups"		}, /* 5113 */
	{ 0,	0,	printargs,		"n64_setgroups"		}, /* 5114 */
	{ 0,	0,	printargs,		"n64_setresuid"		}, /* 5115 */
	{ 0,	0,	printargs,		"n64_getresuid"		}, /* 5116 */
	{ 0,	0,	printargs,		"n64_setresgid"		}, /* 5117 */
	{ 0,	0,	printargs,		"n64_getresgid"		}, /* 5118 */
	{ 0,	0,	printargs,		"n64_getpgid"		}, /* 5119 */
	{ 0,	0,	printargs,		"n64_setfsuid"		}, /* 5120 */
	{ 0,	0,	printargs,		"n64_setfsgid"		}, /* 5121 */
	{ 0,	0,	printargs,		"n64_getsid"		}, /* 5122 */
	{ 0,	0,	printargs,		"n64_capget"		}, /* 5123 */
	{ 0,	0,	printargs,		"n64_capset"		}, /* 5124 */
	{ 0,	0,	printargs,		"n64_rt_sigpending"	}, /* 5125 */
	{ 0,	0,	printargs,		"n64_rt_sigtimedwait"	}, /* 5126 */
	{ 0,	0,	printargs,		"n64_rt_sigqueueinfo"	}, /* 5127 */
	{ 0,	0,	printargs,		"n64_rt_sigsuspend"	}, /* 5128 */
	{ 0,	0,	printargs,		"n64_sigaltstack"	}, /* 5129 */
	{ 0,	0,	printargs,		"n64_utime"		}, /* 5130 */
	{ 0,	0,	printargs,		"n64_mknod"		}, /* 5131 */
	{ 0,	0,	printargs,		"n64_personality"	}, /* 5132 */
	{ 0,	0,	printargs,		"n64_ustat"		}, /* 5133 */
	{ 0,	0,	printargs,		"n64_statfs"		}, /* 5134 */
	{ 0,	0,	printargs,		"n64_fstatfs"		}, /* 5135 */
	{ 0,	0,	printargs,		"n64_sysfs"		}, /* 5136 */
	{ 0,	0,	printargs,		"n64_getpriority"	}, /* 5137 */
	{ 0,	0,	printargs,		"n64_setpriority"	}, /* 5138 */
	{ 0,	0,	printargs,		"n64_sched_setparam"	}, /* 5139 */
	{ 0,	0,	printargs,		"n64_sched_getparam"	}, /* 5140 */
	{ 0,	0,	printargs,		"n64_sched_setscheduler"}, /* 5141 */
	{ 0,	0,	printargs,		"n64_sched_getscheduler"}, /* 5142 */
	{ 0,	0,	printargs,		"n64_sched_get_priority_max"}, /* 5143 */
	{ 0,	0,	printargs,		"n64_sched_get_priority_min"}, /* 5144 */
	{ 0,	0,	printargs,		"n64_sched_rr_get_interval"}, /* 5145 */
	{ 0,	TM,	printargs,		"n64_mlock"		}, /* 5146 */
	{ 0,	TM,	printargs,		"n64_munlock"		}, /* 5147 */
	{ 0,	TM,	printargs,		"n64_mlockall"		}, /* 5148 */
	{ 0,	TM,	printargs,		"n64_munlockall"	}, /* 5149 */
	{ 0,	0,	printargs,		"n64_vhangup"		}, /* 5150 */
	{ 0,	0,	printargs,		"n64_pivot_root"	}, /* 5151 */
	{ 0,	0,	printargs,		"n64__sysctl"		}, /* 5152 */
	{ 0,	0,	printargs,		"n64_prctl"		}, /* 5153 */
	{ 0,	0,	printargs,		"n64_adjtimex"		}, /* 5154 */
	{ 0,	0,	printargs,		"n64_setrlimit"		}, /* 5155 */
	{ 0,	0,	printargs,		"n64_chroot"		}, /* 5156 */
	{ 0,	0,	printargs,		"n64_sync"		}, /* 5157 */
	{ 0,	0,	printargs,		"n64_acct"		}, /* 5158 */
	{ 0,	0,	printargs,		"n64_settimeofday"	}, /* 5159 */
	{ 0,	0,	printargs,		"n64_mount"		}, /* 5160 */
	{ 0,	0,	printargs,		"n64_umount"		}, /* 5161 */
	{ 0,	0,	printargs,		"n64_swapon"		}, /* 5162 */
	{ 0,	0,	printargs,		"n64_swapoff"		}, /* 5163 */
	{ 0,	0,	printargs,		"n64_reboot"		}, /* 5164 */
	{ 0,	0,	printargs,		"n64_sethostname"	}, /* 5165 */
	{ 0,	0,	printargs,		"n64_setdomainname"	}, /* 5166 */
	{ 0,	0,	printargs,		"n64_create_module"	}, /* 5167 */
	{ 0,	0,	printargs,		"n64_init_module"	}, /* 5168 */
	{ 0,	0,	printargs,		"n64_delete_module"	}, /* 5169 */
	{ 0,	0,	printargs,		"n64_get_kernel_syms"	}, /* 5170 */
	{ 0,	0,	printargs,		"n64_query_module"	}, /* 5171 */
	{ 0,	TF,	printargs,		"n64_quotactl"		}, /* 5172 */
	{ 0,	0,	printargs,		"n64_nfsservctl"	}, /* 5173 */
	{ 0,	0,	printargs,		"n64_getpmsg"		}, /* 5174 */
	{ 0,	0,	printargs,		"n64_putpmsg"		}, /* 5175 */
	{ 0,	0,	printargs,		"n64_afs_syscall"	}, /* 5176 */
	{ 0,	0,	printargs,		"n64_reserved177"	}, /* 5177 */
	{ 0,	0,	printargs,		"n64_gettid"		}, /* 5178 */
	{ 0,	0,	printargs,		"n64_readahead"		}, /* 5179 */
	{ 0,	0,	printargs,		"n64_setxattr"		}, /* 5180 */
	{ 0,	0,	printargs,		"n64_lsetxattr"		}, /* 5181 */
	{ 0,	0,	printargs,		"n64_fsetxattr"		}, /* 5182 */
	{ 0,	0,	printargs,		"n64_getxattr"		}, /* 5183 */
	{ 0,	0,	printargs,		"n64_lgetxattr"		}, /* 5184 */
	{ 0,	0,	printargs,		"n64_fgetxattr"		}, /* 5185 */
	{ 0,	0,	printargs,		"n64_listxattr"		}, /* 5186 */
	{ 0,	0,	printargs,		"n64_llistxattr"	}, /* 5187 */
	{ 0,	0,	printargs,		"n64_flistxattr"	}, /* 5188 */
	{ 0,	0,	printargs,		"n64_removexattr"	}, /* 5189 */
	{ 0,	0,	printargs,		"n64_lremovexattr"	}, /* 5190 */
	{ 0,	0,	printargs,		"n64_fremovexattr"	}, /* 5191 */
	{ 0,	0,	printargs,		"n64_tkill"		}, /* 5192 */
	{ 0,	0,	printargs,		"n64_time"		}, /* 5193 */
	{ 0,	0,	printargs,		"n64_futex"		}, /* 5194 */
	{ 0,	0,	printargs,		"n64_sched_setaffinity"	}, /* 5195 */
	{ 0,	0,	printargs,		"n64_sched_getaffinity"	}, /* 5196 */
	{ 0,	0,	printargs,		"n64_cacheflush"	}, /* 5197 */
	{ 0,	0,	printargs,		"n64_cachectl"		}, /* 5198 */
	{ 0,	0,	printargs,		"n64_sysmips"		}, /* 5199 */
	{ 0,	0,	printargs,		"n64_io_setup"		}, /* 5200 */
	{ 0,	0,	printargs,		"n64_io_destroy"	}, /* 5201 */
	{ 0,	0,	printargs,		"n64_io_getevents"	}, /* 5202 */
	{ 0,	0,	printargs,		"n64_io_submit"		}, /* 5203 */
	{ 0,	0,	printargs,		"n64_io_cancel"		}, /* 5204 */
	{ 1,	TP,	printargs,		"n64_exit_group"	}, /* 5205 */
	{ 0,	0,	printargs,		"n64_lookup_dcookie"	}, /* 5206 */
	{ 0,	0,	printargs,		"n64_epoll_create"	}, /* 5207 */
	{ 0,	0,	printargs,		"n64_epoll_ctl"		}, /* 5208 */
	{ 0,	0,	printargs,		"n64_epoll_wait"	}, /* 5209 */
	{ 0,	TM,	printargs,		"n64_remap_file_pages"	}, /* 5210 */
	{ 0,	0,	printargs,		"n64_rt_sigreturn"	}, /* 5211 */
	{ 1,	0,	printargs,		"n64_set_tid_address"	}, /* 5212 */
	{ 0,	0,	printargs,		"n64_restart_syscall"	}, /* 5213 */
	{ 5,	TI,	printargs,		"n64_semtimedop"	}, /* 5214 */
	{ 0,	0,	printargs,		"n64_fadvise64_64"	}, /* 5215 */
	{ 0,	0,	printargs,		"n64_timer_create"	}, /* 5216 */
	{ 0,	0,	printargs,		"n64_timer_settime"	}, /* 5217 */
	{ 0,	0,	printargs,		"n64_timer_gettime"	}, /* 5218 */
	{ 0,	0,	printargs,		"n64_timer_getoverrun"	}, /* 5219 */
	{ 0,	0,	printargs,		"n64_timer_delete"	}, /* 5220 */
	{ 0,	0,	printargs,		"n64_clock_settime"	}, /* 5221 */
	{ 0,	0,	printargs,		"n64_clock_gettime"	}, /* 5222 */
	{ 0,	0,	printargs,		"n64_clock_getres"	}, /* 5223 */
	{ 0,	0,	printargs,		"n64_clock_nanosleep"	}, /* 5224 */
	{ 0,	0,	printargs,		"n64_tgkill"		}, /* 5225 */
	{ 0,	0,	printargs,		"n64_utimes"		}, /* 5226 */
	{ 6,	TM,	printargs,		"n64_mbind"		}, /* 5227 */
	{ 5,	TM,	printargs,		"n64_get_mempolicy"	}, /* 5228 */
	{ 3,	TM,	printargs,		"n64_set_mempolicy"	}, /* 5229 */
	{ 0,	0,	printargs,		"n64_mq_open"		}, /* 5230 */
	{ 0,	0,	printargs,		"n64_mq_unlink"		}, /* 5231 */
	{ 0,	0,	printargs,		"n64_mq_timedsend"	}, /* 5232 */
	{ 0,	0,	printargs,		"n64_mq_timedreceive"	}, /* 5233 */
	{ 0,	0,	printargs,		"n64_mq_notify"		}, /* 5234 */
	{ 0,	0,	printargs,		"n64_mq_getsetattr"	}, /* 5235 */
	{ 5,	0,	printargs,		"n64_vserver"		}, /* 5236 */
	{ 5,	TP,	printargs,		"n64_waitid"		}, /* 5237 */
	{ 0,	0,	printargs,		"n64_SYS_5238"		}, /* 5238 */
	{ 0,	0,	printargs,		"n64_add_key"		}, /* 5239 */
	{ 0,	0,	printargs,		"n64_request_key"	}, /* 5230 */
	{ 0,	0,	printargs,		"n64_keyctl"		}, /* 5241 */
	{ 0,	0,	printargs,		"n64_set_thread_area"	}, /* 5242 */
	{ 0,	0,	printargs,		"n64_inotify_init"	}, /* 5243 */
	{ 0,	0,	printargs,		"n64_inotify_add_watch" }, /* 5244 */
	{ 0,	0,	printargs,		"n64_inotify_rm_watch"	}, /* 5245 */
	{ 0,	TM,	printargs,		"n64_migrate_pages"	}, /* 5246 */
	{ 0,	0,	printargs,		"n64_openat"		}, /* 5247 */
	{ 0,	0,	printargs,		"n64_mkdirat"		}, /* 5248 */
	{ 0,	0,	printargs,		"n64_mknodat"		}, /* 5249 */
	{ 0,	0,	printargs,		"n64_fchownat"		}, /* 5250 */
	{ 0,	0,	printargs,		"n64_futimesat"		}, /* 5251 */
	{ 0,	0,	printargs,		"n64_newfstatat"	}, /* 5252 */
	{ 0,	0,	printargs,		"n64_unlinkat"		}, /* 5253 */
	{ 0,	0,	printargs,		"n64_renameat"		}, /* 5254 */
	{ 0,	0,	printargs,		"n64_linkat"		}, /* 5255 */
	{ 0,	0,	printargs,		"n64_symlinkat"		}, /* 5256 */
	{ 0,	0,	printargs,		"n64_readlinkat"	}, /* 5257 */
	{ 0,	0,	printargs,		"n64_fchmodat"		}, /* 5258 */
	{ 0,	0,	printargs,		"n64_faccessat"		}, /* 5259 */
	{ 0,	0,	printargs,		"n64_pselect6"		}, /* 5260 */
	{ 0,	0,	printargs,		"n64_ppoll"		}, /* 5261 */
	{ 1,	TP,	printargs,		"n64_unshare"		}, /* 5262 */
	{ 0,	0,	printargs,		"n64_splice"		}, /* 5263 */
	{ 0,	0,	printargs,		"n64_sync_file_range"	}, /* 5264 */
	{ 0,	0,	printargs,		"n64_tee"		}, /* 5265 */
	{ 0,	0,	printargs,		"n64_vmsplice"		}, /* 5266 */
	{ 0,	TM,	printargs,		"n64_move_pages"	}, /* 5267 */
	{ 0,	0,	printargs,		"n64_set_robust_list"	}, /* 5268 */
	{ 0,	0,	printargs,		"n64_get_robust_list"	}, /* 5269 */
	{ 0,	0,	printargs,		"n64_kexec_load"	}, /* 5270 */
	{ 0,	0,	printargs,		"n64_getcpu"		}, /* 5271 */
	{ 0,	0,	printargs,		"n64_epoll_pwait"	}, /* 5272 */
	{ 0,	0,	printargs,		"n64_ioprio_set"	}, /* 5273 */
	{ 0,	0,	printargs,		"n64_ioprio_get"	}, /* 5274 */
	{ 0,	0,	printargs,		"n64_utimensat"		}, /* 5275 */
	{ 0,	0,	printargs,		"n64_signalfd"		}, /* 5276 */
	{ 4,	TD,	printargs,		"n64_timerfd"		}, /* 5277 */
	{ 0,	0,	printargs,		"n64_eventfd"		}, /* 5278 */
	{ 0,	0,	printargs,		"n64_fallocate"		}, /* 5279 */
	{ 0,	0,	printargs,		"n64_timerfd_create"	}, /* 5280 */
	{ 0,	0,	printargs,		"n64_timerfd_gettime"	}, /* 5281 */
	{ 0,	0,	printargs,		"n64_timerfd_settime"	}, /* 5282 */
	{ 0,	0,	printargs,		"n64_signalfd4"		}, /* 5283 */
	{ 0,	0,	printargs,		"n64_eventfd2"		}, /* 5284 */
	{ 0,	0,	printargs,		"n64_epoll_create1"	}, /* 5285 */
	{ 0,	0,	printargs,		"n64_dup3"		}, /* 5286 */
	{ 0,	0,	printargs,		"n64_pipe2"		}, /* 5287 */
	{ 0,	0,	printargs,		"n64_inotify_init1"	}, /* 5288 */
	{ 0,	0,	printargs,		"n64_preadv"		}, /* 5289 */
	{ 0,	0,	printargs,		"n64_pwritev"		}, /* 5290 */
	{ 4,	TP|TS,	printargs,		"n64_rt_tgsigqueueinfo" }, /* 5291 */
	{ 0,	0,	printargs,		"n64_perf_event_open"	}, /* 5292 */
	{ 0,	0,	printargs,		"n64_accept4"		}, /* 5293 */
	{ 0,	0,	printargs,		"n64_recvmmsg"		}, /* 5294 */
	{ 2,	0,	printargs,		"n64_fanotify_init"	}, /* 5295 */
	{ 5,	0,	printargs,		"n64_fanotify_mark"	}, /* 5296 */
	{ 4,	0,	printargs,		"n64_prlimit64"		}, /* 5297 */
	{ 5,	TD|TF,	printargs,		"n64_name_to_handle_at"	}, /* 5298 */
	{ 3,	TD,	printargs,		"n64_open_by_handle_at"	}, /* 5299 */
	{ 2,	0,	printargs,		"n64_clock_adjtime"	}, /* 5300 */
	{ 1,	TD,	printargs,		"n64_syncfs"		}, /* 5301 */
	{ 4,	TN,	printargs,		"n64_sendmmsg"		}, /* 5302 */
	{ 2,	TD,	printargs,		"n64_setns"		}, /* 5303 */
	{ 6,	0,	printargs,		"n64_process_vm_readv"	}, /* 5304 */
	{ 6,	0,	printargs,		"n64_process_vm_writev"	}, /* 5305 */
	{ 5,	0,	printargs,		"kcmp"			}, /* 5306 */
	{ 3,	TD,	printargs,		"finit_module"		}, /* 5307 */
#endif
	[5308 ... 5999] = { }, /* 5999 */ /* end of Linux N64 */
