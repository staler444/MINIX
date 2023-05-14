#include <lib.h>
#include <minix/rs.h>
#include <stdio.h>
#include <minix/callnr.h>
#include <unistd.h>

int main()
{
        printf("%d", transfermoney(10, 10));
}
