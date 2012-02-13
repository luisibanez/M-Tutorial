=============
ZLINK Command
=============
ZLINK adds an exectuable GTM routine if the current process does not have a copy of a routine. If the current process has a routine but the routine is not active, ZLINK updates the routine to a newer version. ZLINK will also compile the process if necessary.

ZLINK Command:
::
    ZL[INK][:tvexpr] [expr1[:expr2][,...]]


*tvexpr* is an optional truth-valued expression that controls if GTM executes a command or not.

*expr1* is an optional expression that designates the pathname of a routine. 

If there are no arguments or expressions, ZLINK uses the value of $ZSOURCE
 -Note that if there are no arguments then two spaces must follow ZLINK before        another command.

*expr2* is an optional string which controls compiler options.  If no expression is indicated, then ZLINK will use the $ZCOMPILE variable for compiler options.



Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 208

Additional detail can be found `here <http://www.netfort.cz/gtm/userdocs/books/pg/UNIX_manual/zlink_cmmd.html>`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
