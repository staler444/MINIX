#include "pm.h"
#include "mproc.h"
#include "proto.h"
#include <minix/callnr.h>

int CBS(struct mproc* a, struct mproc* b) 
{
	do {
		if (a->mp_pid == 1)
			return 0;
		a = &mproc[a->mp_parent];
	} while (a != b);

	return -1;
}

int do_transfermoney(void) 
{
	pid_t dest_pid = m_in.m_pm_transfermoney.recipient;
	int amount = m_in.m_pm_transfermoney.amount;

	if (amount < 0)
		return EINVAL;

	struct mproc* dest_ptr = find_proc(dest_pid);
	if (dest_ptr == NULL)
		return ESRCH;;

	if (CBS(mp, dest_ptr) == -1 || CBS(dest_ptr, mp) == -1)
		return EPERM;

	if (MAX_BALANCE - amount < dest_ptr->mp_money 
		|| amount > mp->mp_money)
	{
		return EINVAL;
	}

	mp->mp_money -= amount;
	dest_ptr->mp_money += amount;

	return mp->mp_money;
}
