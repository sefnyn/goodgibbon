# Gibbon, a GTK+ client for FIBS

Written by Guido Flohr:  http://www.guido-flohr.net/en/projects/
Packaged for Linux Debian by Nicholas Syrotiuk

# Install
sh autogen.sh  
./configure  
sudo make CC="gcc -fcommon"  #Needed after changes to GCC 10
sudo make install

##
Note: Remove references to "help" in Makefile
