#include <lib.h>
#include <minix/rs.h>
#include <stdio.h>
#include <minix/callnr.h>
#include <unistd.h>
#include <errno.h>

int main()
{
        printf("%d\n", transfermoney(10, 10));
        if (errno == ESRCH) 
                printf("jooo");
}
