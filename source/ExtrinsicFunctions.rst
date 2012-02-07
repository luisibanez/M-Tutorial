===================
Extrinsic Functions
===================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 197-198

    SET DEF=$$MYFUNC(X)

    MYFUNC(X)
    NEW F
    SET F=X*(X+1)
    QUIT F

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false

Entrinsic Functions:


Definition: They are a subroutine that another M routine can invoke to return a value.

These functions are not included in the standard. They have been supplied by the user, system, M subroutines, or external to the current M environment. 





The Format is

    $$[label][^routinename]([expr|.lname[,...]])


The extrinsic function must terminate with an explicit QUIT command which has an argument. M returns the falue of the QUIT command argument.