.. _open-command-label:

============
OPEN Command
============

Material prepared from `M Programming Book`_ (Page 159) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Description
###########

The ``O[PEN]`` command allows the M process to open a connection with an I/O device. The ``OPEN`` command contains an optional truth value, the device name, some parameters to control device behavior, an optional amount of time for the process to try to connect for, and an optional expression that binds the device to a SOCKET or PIPE mnemonicspace. 

Its formatting is:
::

   O[PEN][:tvexpr] expr[:[(keyword[=expr][:...])][:numexpr][:expr]][,...]

The ``OPEN`` command will attempt to open the connection once every second, until it reaches the optional timeout variable, where it will halt the process. 
If a connection already exists, and a new OPEN command is called on the connected device by the same process, then the process will essentially close the existing connection and reopen it with the new arguements.

If a process closes a connection and repopens it, the connection will contain all the characteristics of the process as established by the first ``OPEN`` command, if new characteristics were not explicitly established in the second OPEN command.


Examples
########

::

   OPEN /dev/thermometer::60

Attempts to open a connection to a thermometer device for 60 seconds.

See :ref:`devices-label` for a list of device identifiers.



Related
#######

*  :ref:`close-command-label`
*  :ref:`use-command-label`
*  :ref:`devices-label`

References
##########

`OPEN page at GT.M Programmer's Guide`_

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _OPEN page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s17.html
