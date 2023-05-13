cd /
cd /usr/src
make includes 
cd /usr/src/minix/servers/minix/pm
make && make install 
cd /usr/src/releasetools
make do-hdboot
