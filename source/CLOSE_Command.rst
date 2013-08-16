.. _close-command-label:

=============
CLOSE Command
=============

Material prepared from `M Programming Book`_ (Page 162) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Description
###########

The CLOSE command closes a connection between the M process and I/O device.
If the connection does not exist, the close command is ignored. Parameters can be specified for the process to manipulate the device with as the connection is closed.

Examples
########
::

  CLOSE "/dev/thermometer"  
*closes a thermometer device*

::

  CLOSE "/dev/thermometer":(READY) 
*closes a thermometer device and sets it as ready*

::

  CLOSE 1
*closes the printer*

::

  CLOSE 5
*closes the external communications port*

See :ref:`devices-label` for a list of device identifiers.

Related
#######

*  :ref:`open-command-label`
*  :ref:`use-command-label`
*  :ref:`devices-label`

References
##########

`CLOSE page at GT.M Programmer's Guide`_

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _CLOSE page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s02.html
