#include "pm.h"
#include <stdio.h>

int do_transfermoney(message *m) {
	printf("%d", IS_PM_CALL(PM_TRANSFER_MONEY));
	printf("Hello\n");
	return 42;
}
