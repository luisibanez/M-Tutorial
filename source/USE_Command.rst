============
USE Command
============

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 161.

Command
-------
::
	USE[:tvexpr] expr[:(keyword[=expr][:...])][,...]

Description
-----------

After opening a device or file, a user must specify which device they wish to act upon with ``READ`` or ``WRITE`` statements. Due to the terminal based interaction system used by M, opening more than one file or device can creat an ambiguous situation in terms of specifying which to act upon. The ``USE`` command fixes this through a special variable, ``$IO``, which designates the current device and sole device that is to be acted upon. 

At login, the current device begins initialized as the terminal with ``$IO`` set to 0. To change to a different current device, the ``USE`` command must be executed.

Each time ``USE`` is invoked, ``$IO`` is set to the specified device. 

``USE`` can also be invoked with ``U``.

Example
-------
::
	USE 1 WRITE RECORD ;write RECORD to device 1 (specified when opened, could be a document, printer, etc..)

	USE 0 WRITE RECORD ; write output to device 0, the terminal

	U 1 READ RECORD ; read record from device one (eg: a document, or other input file/device)



.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
