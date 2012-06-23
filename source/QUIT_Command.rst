.. _quit-command-label:

=================
QUIT Command
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_ (Page 103) and `GT.M Programmer's Guide`_

Description
###########

  **QUIT** VALUE

QUIT terminates execution of current stack and returns control.

When used in a FOR loop it terminates the execution of the loop.


Examples
--------

::

  LABEL1
   WRITE "Patient Name",NAME,!
   WRITE "Address",ADDRESS,!
   QUIT

  WRITE "Send to execute",!
  DO LABEL1
  WRITE "Returned from action",!

The DO command will start the execution of the code
indicated by LABEL1. The lines of code following
LABEL1 will be executed in sequential order, and when
QUIT is encountered, the control will be returned to
the calling code.

::

    FOR I=1:1 DO  QUIT:I>7
    . WRITE " I= ",I
    . WRITE " I Square= ",I*I,!

*Notice that there are two spaces between DO and QUIT.*


Related
#######

*  :ref:`do-command-label`
*  :ref:`for-command-label`


References
##########

`QUIT page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _QUIT page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s18.html
