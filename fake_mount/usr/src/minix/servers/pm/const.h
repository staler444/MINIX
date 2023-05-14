/* Constants used by the Process Manager. */

#define NR_PIDS	       30000	/* process ids range from 0 to NR_PIDS-1.
				 * (magic constant: some old applications use
				 * a 'short' instead of pid_t.)
				 */

#define NO_PID	           0	/* pid value indicating no process */
#define INIT_PID	   1	/* INIT's process id number */

#define NO_TRACER	   0	/* process is not being traced */

#define MAX_CLOCK_T	((unsigned long) 1 << ((sizeof(clock_t) * 8) - 1))
#define MAX_SECS	( (clock_t) (MAX_CLOCK_T/system_hz) )
				/* max.secs for setitimer() ((2^31-1)/HZ) */
#define NR_ITIMERS	   3	/* number of supported interval timers */

#define SEND_PRIORITY      1	/* send current priority queue to scheduler */
#define SEND_TIME_SLICE    2    /* send current time slice to scheduler */

/* PM_TRANSFER_MONEY return error params */
#define PM_TM_PANIC		-1 /* unexpected error */
#define PM_TM_NON_EXISTING_PID	-2 /* recipient does'nt exists */
#define PM_TM_DIRTY_MONEY	-3 /* recipient and sender in ancestor - descendant relation */
#define PM_TM_MONEY_OVERFLOW	-4 /* transfer infringes account limits constraints */
