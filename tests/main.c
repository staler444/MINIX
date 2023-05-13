#include <lib.h>
#include <minix/rs.h>
#include <stdio.h>

int main()
{
        message m;
        endpoint_t pm_ep;
        minix_rs_lookup("pm", &pm_ep);
        printf("%d", _syscall(pm_ep, PM_TRANSFER_MONEY, &m));
}
