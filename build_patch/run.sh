rm -r /usr/usr_old /usr/usr_new

cp -r /usr /usr/usr_old
cp -r /usr/usr_old /usr/usr_new

cd /usr/usr_new/usr/src/minix/servers/pm
rm Makefile do_transfermoney.c forkexit.c main.c mproc.h pm.h proto.h table.c

cd usr/usr_new/usr/src/minix/include
rm callnr.h config.h ipc.h

cd /usr/usr_new/usr/src/lib/libc/misc
rm Makefile.inc transfermoney.c

cd /usr/user_new/usr/src/include
rm unistd.h

stow --dir=/root/MINIX/fake_mount --target=/user/user_new .

diff -rupNEZbB /usr/usr_old /usr/usr_new > bk439964.patch
