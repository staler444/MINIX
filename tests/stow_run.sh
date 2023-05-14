cd /usr/src/minix/servers/pm
rm Makefile do_transfermoney.c forkexit.c main.c mproc.h pm.h proto.h table.c

cd /usr/src/minix/include
rm callnr.h config.h ipc.h

cd /usr/src/lib/libc/misc
rm Makefile.inc transfermoney.c

cd /usr/src/include
rm unistd.h

stow --dir=/root/MINIX/fake_mount --target=/ .
