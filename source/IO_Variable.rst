.. _io-variable-label:

===========
IO Variable
===========

Material prepared from `M Programming Book`_ [WALTERS1997]_ (Pages 157,161) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Input/Output Variable:
::

    $I[O]

The I/O Variable is an intrinsic special variable, as seen by the '$' prefix.
The I/O Variable is a variable which designates the current I/O stream.  This
variable *can* be changed using the :doc:`NEW_Command` and :doc:`SET_Command`
commands.

You can see the value of the I/O variable with the following code:
::

    WRITE $IO

or the short form
::

    W $I


Related
#######

*  :ref:`use-command-label`
*  :ref:`open-command-label`
*  :ref:`close-command-label`
*  :ref:`devices-label`

References
##########

`IO page at GT.M Programmer's Guide`_

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _IO page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch08s06.html
