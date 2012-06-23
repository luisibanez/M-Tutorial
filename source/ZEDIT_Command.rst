.. _zedit-command-label:

=============
ZEDIT Command
=============

Material prepared from `M Programming Book`_ (Page 208) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Command
#######

ZEDIT opens the specified file for editing. ZEDIT opens files in vi by default, unless a different editor is specified by the EDITOR environment variable for GTM. ::

    ZEDIT "file"

The command can also be abbreviated as follows::

    ZED "file"

Examples
########
::

    GTM>zedit "helloworld"

    GTM>zed "fibonacci"

Alternatively, a variable containing a string literal may be used as the file argument::

    GTM>Set name="myFirstRoutine"

    GTM>zedit name

Note that after every time that you edit the routine
with ZEDIT, you must relink it with ZLINK before you
execute the code again. Otherwise, the changes to the
code are done in the file system, but they are not
brought into memory until you invoke :doc:`ZLINK_Command`.


Related
#######

*  :ref:`zlink-command-label`


References
##########

`ZEDIT page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _ZEDIT page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s35.html
