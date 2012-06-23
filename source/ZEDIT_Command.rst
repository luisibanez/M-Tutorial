=============
ZEDIT Command
=============

Command
-------

ZEDIT opens the specified file for editing. ZEDIT opens files in vi by default, unless a different editor is specified by the EDITOR environment variable for GTM. ::

    ZEDIT "file"

The command can also be abbreviated as follows::

    ZED "file"

Examples
--------
::

    GTM>zedit "helloworld"

    GTM>zed "fibonacci"

Alternatively, a variable containing a string literal may be used as the file argument::

    GTM>Set name="myFirstRoutine"

    GTM>zedit name



Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 208


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
