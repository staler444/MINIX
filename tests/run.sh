cd /usr/src
# make includes 
cd /usr/src/minix/servers/pm
make && make install 
cd /usr/src/lib/libc
make && make install 
cd /usr/src/releasetools
make do-hdboot
