# Gibbon, a GTK+ client for FIBS

Written by Guido Flohr:  http://www.guido-flohr.net/en/projects/  
Packaged for Linux Debian by Nicholas Syrotiuk

# Install
sh autogen.sh  
./configure  
sudo make CC="gcc -fcommon"  # see below  
sudo make install

##
Note 1: Remove references to "help" in Makefile because these cause a missing separator error.  
Note 2: "gcc -fcommon" is needed since GCC 10.  If the header is included by several files it results in multiple definitions of the same variable. In versions previous to GCC 10, this error is ignored. GCC 10 defaults to -fno-common, which means a linker error will now be reported. ... As a workaround, legacy C code where all tentative definitions should be placed into a common block can be compiled with -fcommon.
