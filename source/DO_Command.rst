.. _do-command-label:

=================
DO Command
=================

Material prepared from `M Programming Book`_ (Page 103) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Description
###########

  **DO** *[[LABEL|LABEL^ROUTINENAME], ...]*

Calls a subroutine.

DO can be called with or without arguments.

Without arguments, DO will execute the code on the following line
as long as the code is at the beginning of a block with an indent
greater than that of itself. DO will continue to execute code until
it reaches a line with an insufficient indentation. It is possible
to prematurely terminate the command by executing QUIT or BREAK.

With arguments, DO will jump to the specified label or routine
and execute from there until a QUIT is found. When encountered,
the program will continue executing commands after the DO.

Parameters
###########

LABEL
*****
(string) The label to jump to

LABEL^ROUTINENAME
*****************
(string) The label and routine name to jump to

Examples
########

| DO TEST
| *jumps to label test*
|

| SET A=4
| DO FACTORIAL(A)
|
| *calls a function called factorial and passes in the current value of the variable, A. In this case, 4*
|

| DO REPORT^FACTORIAL
|
| *Start execution a the REPORT label in the routine FACTORIAL*
|

| IF age>20 DO
| . WRITE "You are able to drink!",!
| ELSE DO
| . WRITE "I'm sorry, you are underage",!
|

*outputs "You are able to drink!" if the age variable is greater than 20. Otherwise, outputs "I'm sorry, you are underage",!* 


Related
#######

*  :ref:`quit-command-label`


References 
##########

`DO page at GT.M Programmer's Guide`_

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _DO page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s03.html
