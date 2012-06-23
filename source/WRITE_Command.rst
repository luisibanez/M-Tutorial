.. _write-command-label:

=================
WRITE Command
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_ (Pages 39-42) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Description
###########

W[RITE]

**W[RITE]**: (variable|*variable|formatting)

Arguments:

Must be one of the following:

- variable
- string litteral
- format command
- \*variable

When the arguments are variables or string litterals,
they get to be written to the current output device,
as defined by the variable $IO, or set by the
:doc:`USE_Command`.

Formatting commands control how the cursor is going to
be manipulated before and after writing the text.

When the argument is a numerical expression preceeded
by the \* symbol, then the expression is used as an
ASCII value and the WRITE command prints the character
corresponding to that ASCII value.



Examples
########

::

    WRITE "Hello ",YOURNAME,!

::

    WRITE \*65

*This prints the letter A which is the character corresponding to the ASCII value 65*.


Related
#######

*  :ref:`read-command-label`
*  :ref:`open-command-label`
*  :ref:`close-command-label`
*  :ref:`use-command-label`


References
##########

`WRITE page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _WRITE page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s28.html
