#include <lib.h>
#include <minix/rs.h>
#include <stdio.h>
#include <minix/callnr.h>
#include <unistd.h>
#include <errno.h>

int main()
{
        int x = transfermoney(getpid(), 0);
        printf("%d\n", x);
}
