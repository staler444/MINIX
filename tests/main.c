#include <lib.h>
#include <minix/rs.h>
#include <stdio.h>
#include <minix/callnr.h>
#include <unistd.h>
#include <errno.h>

int main()
{
        printf("%d\n", getpid());
        printf("%d\n", transfermoney(getpid(), 0));
}
