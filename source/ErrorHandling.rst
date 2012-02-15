==============
Error Handling
==============

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 347

Introduction to error handling in M with $EC[ODE] and $ET[RAP]. 

Command
-------
::

    $ECODE


Description
-----------
``$ECODE`` is a special variable in M. In normal execution, the value of 
``$ECODE`` is empty which indicates that no error has occured. However, once 
an error occurs, $ECODE will be set appropriately to that error. The value is 
comma delimited so that multiple error codes may be set, and the first 
character will always be a comma. 

Command
-------
::

    $ETRAP

Description
-----------
``$ETRAP`` is another special variable in M. The ``$ECODE`` variable only 
allows a developer to determine that an error has occurred, but not to recover 
from it. The ``$ETRAP`` variable allows a developer to define code to be 
triggered upon the non-empty setting of ``$ECODE``; that is, when an error 
occurs, the value of ``$ETRAP`` is evaluated as code. 



.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
