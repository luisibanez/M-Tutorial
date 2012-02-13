=================
RANDOM Function
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 49.

Command
-------
::

    $RANDOM(limit)

Description
-----------
``$RANDOM(limit)`` takes an interger >= 1 as an argument and returns a psuedorandom integer [0, limit).

* If ``limit`` < 1 then the error ``RANDARGNEG`` is thrown.

Example
-------
::

    ; Writes a random number [0, 10)
    S X=$RANDOM(10) W X

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


