#include <lib.h>
#include <minix/rs.h>
#include <stdio.h>
#include <minix/callnr.h>

int main()
{
        message m;
        endpoint_t pm_ep;
        minix_rs_lookup("pm", &pm_ep);
        printf("%d", IS_PM_CALL(PM_TRANSFER_MONEY));

}
