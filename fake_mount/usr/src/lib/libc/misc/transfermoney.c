#include <lib.h>
#include <minix/rs.h>

int get_pm_endpt(endpoint_t *pt)
{
        return minix_rs_lookup("pm", pt);
}

int transfermoney(pid_t recipient, int amount)
{
        if (amount < 0) {
                errno = EINVAL;
                return -1;
        }

	endpoint_t pm_pt;
        message m;
        if (get_pm_endpt(&pm_pt) != 0) {
                errno = ENOSYS;
                return -1;
        }

	m.m_pm_transfermoney.recipient = recipient;
	m.m_pm_transfermoney.amount = amount;

        return (_syscall(pm_pt, PM_TRANSFER_MONEY, &m));
}
