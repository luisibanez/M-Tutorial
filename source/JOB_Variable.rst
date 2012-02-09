============
JOB Variable
============

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 208

$JOB contains the process ID of the current running program.  This is a unique, posotive integer, assigned by the operating system, and will change each time the program is run.  However, if a program spawns multiple processes, this stays the same across them.

Example::

    GTM> WRITE $JOB
    1025



.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
