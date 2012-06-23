.. _new-command-label:

===========
NEW Command
===========

Material prepared from `M Programming Book`_ (Page 190) [WALTERS1997]_ and `GT.M Programmer's Guide`_

**N[EW][:tvexpr]** [ [(] *lvn* [, ...] [)] [, ...] ]

Description
#####################

``NEW`` will push copies of local variables onto a stack, and reinitialize them to their original values on a ``QUIT`` (implicit or explicit) from a ``DO``, ``XECUTE``, or extrinsic function.

The command can be optionally followed by a truth-valued expression (``tvexpr``), which controls whether or not the command will actually be executed.

The arguments should be local variable names (``lvn``); all descended variables will be included.

Examples
--------

::

    LABEL
    NEW A
    SET A="B"
    QUIT



Related
#######

*  :ref:`kill-command-label`


References
##########

`NEW page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _NEW page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s16.html
