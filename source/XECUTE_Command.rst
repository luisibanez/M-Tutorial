==============
XECUTE Command
==============

The X[ECUTE] command executes its arguments as GTM code. It uses the GTM stack to execute the code given to it as arguments. For example,

	GTM> XECUTE "WRITE """HELLO WORLD""

The above XECUTE command will print "HELLO WORLD". The first argument to XECUTE is the GTM command "Write" and the second argument is the message which the "write" command should print.

Another variation of this example is::

	GTM> SET X="HELLO WORLD"

	GTM> XECUTE "WRITE X"

The above example will also print "HELLO WORLD". The XECUTE command takes as argument the GTM code "WRITE X" and executes this code. 

Another varition of this example is the use of numeric operators in the XECUTE command. For example,::

	GTM> XECUTE "WRITE 2+2"

This will print the value 4. 

One can also specify an optional "truth value" which controls if the GTM will execute the command or not. The syntax of the XECUTE command is similar to::

	XECUTE:truth_value_expression expression[:truth_value_expression][,....]



