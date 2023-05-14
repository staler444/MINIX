#include "pm.h"
#include <errno.h>

struct mproc *get_dest_proc() {
	pid_t dest_pid = m_in.m_pm.transfermoney.recipient;
	struct mproc* dest_ptr = find_proc(dest_pid);
	if (dest_ptr == NULL)
		return NULL;
}

int do_transfermoney(void) {
	return PM_TM_DIRTY_MONEY;
}
