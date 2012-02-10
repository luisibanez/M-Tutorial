===================
Operator Precedence
===================
Contrary to other languages, MUMPS reads a mathematical sequence from left to right and disregards order of operations. 

For example: 
::
   SET x=2+6/2

   WRITE x
 
x=4 (not 5)

This may take a little getting used to for some, however; parentheses take precedence in a sequence. 

To use the previous example: 
::
   SET x=2+(6/2)

   WRITE x

x=5

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 45

Explain that is left to right

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
