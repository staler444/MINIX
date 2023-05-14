#include "pm.h"
#include <errno.h>

int do_transfermoney(void) {
	errno = 4;
	return m_in.m_pm_transfermoney.amount;
}
