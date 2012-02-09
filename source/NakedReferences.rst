================
Naked References
================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 154-155

A naked reference is a shortcut to lazily access the last used global variable.  By specifying a carat (^) immediately before an open parenthesis (() a naked reference is declared to the last used global variable without the last subscript specified.  For example,::

    ^X(42)
    ^(43)

would be equilvalent to::

    ^X(42)
    ^X(43)

In the case where there is no last used global variable, an error will be thrown.

The last used global variable can be modified on the same line or by functions executed earlier in the line.  As such, using naked references can be a dangerous proposition as well as a non-clear syntax.  Avoiding their use is heavily advised.

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
