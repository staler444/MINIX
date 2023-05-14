#include "pm.h"
#include <minix/com.h>

int dirty_money_check(struct mproc* a, struct mproc* b) 
{
	do {
		if (a->mp_pid == 1)
			return 0;
		a = &mproc[a->mp_parent];
	} while (a != b);

	return -1;
}

int do_transfermoney(void) {
	if (m_in.m_type != PM_TM_TRANSFER)
		return PM_TM_PANIC;

	pid_t dest_pid = m_in.m_pm_transfermoney.recipient;
	struct mproc* dest_ptr = find_proc(dest_pid);
	if (dest_ptr == NULL)
		return PM_TM_NON_EXISTING_PID;
	if (dirty_money_check(mp, dest_ptr) == -1)
		return PM_DIRTY_MONEY;

	int amount = m_in.m_pm_transfermoney.amount;
	if (amount > 
}
