#include <lib.h>
#include <minix/rs.h>
#include <minix/callnr.h>
#include <errno.h>

int get_pm_endpt(endpoint_t *pt)
{
        return minix_rs_lookup("pm", pt);
}

void set_errno(int error_code)
{
        switch (error_code) {
                case PM_TM_NON_EXISTING_PID :
                        errno = ESRCH;
                case PM_TM_DIRTY_MONEY :
                        errno = EPERM;
                case PM_TM_MONEY_OVERFLOW :
                        errno = EINVAL;
                default : 
                        errno = ENOSYS;
        }
}

int transfermoney(pid_t recipient, int amount)
{
        if (amount < 0) {
                errno = EINVAL;
                return -70;
        }

	endpoint_t pm_pt;
        message m;
        if (get_pm_endpt(&pm_pt) != 0) {
                errno = ENOSYS;
                return -69;
        }

	m.m_pm_transfermoney.recipient = recipient;
	m.m_pm_transfermoney.amount = amount;

        return 10;
        int res = _syscall(pm_pt, PM_TRANSFER_MONEY, &m);
        return res;
        if (res < 0) {
                set_errno(res);
                return -1;
        }

        return res;
}
