rm /usr/src/minix/servers/pm/*.c
rm /usr/src/minix/servers/pm/*.h
rm /usr/src/minix/servers/pm/Makefile

rm /usr/src/minix/include/minix/*.h

stow --dir=/root/MINIX/fake_mount --target=/ .
