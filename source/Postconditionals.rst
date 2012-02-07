================
Postconditionals
================

Material prepared from `M Programming Book`_ [WALTERS1997]_ (page 107)

When a GOTO or DO depends on a condition (the value of a variable), a postconditional can be used as an argument for these commands.::

    MENU
     WRITE "What would you like to know about MUMPS?"
     WRITE !?3,"1. What does it stands for?"
     WRITE !?3,"2. When was it created?"
     WRITE !?3,"3. Who created MUMPS?"
     WRITE !?3,"4. I know everything I need already, please quit."
    retry READ !,"Answer with a number between 1 and 4: ",ans
     IF ans<1!(ans>4) GOTO retry
     QUIT:ans=4
     DO meaning:ans=1,date:ans=2,creator:ans=3
     GOTO MENU
    meaning;
     WRITE !!?3,"MUMPS stands for Massachusetts General Hospital Utility Multi-Programming System.",!!
     QUIT
    date;
     WRITE !!?3,"MUMPS was was created between 1966 and 1967.",!!
     QUIT
    creator;
     WRITE !!?3,"Neil Pappalardo is MUMPS creator.",!!
     QUIT


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
