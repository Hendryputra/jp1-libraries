Source Code for Version 0.19 of jp12serial.dll

* support for the new communications protocol used by JP1.4 and JP2 remotes added by Dave Reed (3FG)

* modified from beta version 0.18f_JP2 to handle an issue for these remotes when using transistor-based interfaces.

Graham Dixon (mathdon)
21 August 2012


Source Code for Version 0.18 of jp12serial.dll

* added Mac OS X support for FTDI based cable

* dynamically searches for plugged-in cables because there are no builtin serial / parallel devices and the name of the USB 
  devices contain the serial number of the FTDI chip

* cleaned up error handling for hSerial: always use INVALID_HANDLE_VALUE instead of NULL

Michael Dreher (MikeT)
30 October 2010


Source Code for Version 0.17 of jp12serial.dll

The C++ source code of version 0.17 contains four files that were not needed in versions 0.14 and earlier.  These are

* ftdi.cpp and ftdi.h which contain the functions used to locate USB ports with connected FTDI RS232 chips and to determine the virtual COM port to which they correspond;

* ftd2xx.h which is supplied by FTDI as part of its driver package and which provides the interface to the ftd2xx.dll file of that driver;

* StdAfx.h which only contains a few minimal settings.

The files ftdi.cpp and ftdi.h are used also in Version 2.01 of IRScope.exe and the first of these requires StdAfx.h.  This is why the minimal settings in that file are not simply incorporated into the other files.  A different StdAfx.h is used for IRScope.exe.

These additional files are not needed for compilation under Linux or Solaris.  Those operating systems do not support the FTDI Combined Driver Model that is needed to enable jp12serial.dll to give search priority to USB ports with connected FTDI RS232 chips.  The files needed to support that feature are therefore not required and the feature will be missing from those versions.

The source code of version 0.17 also includes one file that was not present in that for version 0.16.  This is Makefile.Linux.  As its name implies, this file is not needed for compilation under Windows.

The compiled version for Windows that has been issued was compiled with the g++ compiler of MinGW.

This JP1.x serial library was originally written by Greg Bush but has been modified recently by many others.  See the comments in the file jp12serial.cpp for more details of these recent developments.

Graham Dixon (mathdon)
7 July 2010

