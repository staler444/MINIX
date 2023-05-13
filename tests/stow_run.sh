rm usr/src/minix/servers/minix/pm/*.c
rm usr/src/minix/servers/minix/pm/*.h
rm usr/src/minix/servers/minix/pm/Makefile

rm usr/src/minix/include/minix/*.h

stow --dir=/root/MINIX/fake_mount --target=/ .
