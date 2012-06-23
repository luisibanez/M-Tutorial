.. _xecute-command-label:

==============
XECUTE Command
==============

Material prepared from `M Programming Book`_ (Page 179) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Description
###########

The X[ECUTE] command executes its arguments as M code. It uses the M stack to execute the code given to it as arguments. For example,

Examples
########

::

   XECUTE "WRITE ""HELLO WORLD"""

The above XECUTE command will print "HELLO WORLD". The first argument to XECUTE
is the M command "Write" and the second argument is the message which the
"write" command should print.

Another variation of this example is
::

	 SET X="HELLO WORLD"
   XECUTE "WRITE X"

The above example will also print "HELLO WORLD". The XECUTE command takes as argument the M code "WRITE X" and executes this code.

And a more interesting variation is
::

	 SET PROG="WRITE ""HELLO WORLD"""
   XECUTE PROG

This example illustrates that it is easy in M to put the code of a routine in a variable, and then execute the code contained in the variable.


Another varition of this example is the use of numeric operators in the XECUTE command. For example,::

	XECUTE "WRITE 2+2"

This will print the value 4.

One can also specify an optional "truth value" which controls if the M will execute the command or not. The syntax of the XECUTE command is similar to::

	XECUTE:truth_value_expression expression[:truth_value_expression][,....]


Related
#######

*  :ref:`do-command-label`
*  :ref:`quit-command-label`


References
##########

`XECUTE page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _XECUTE page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s29.html
