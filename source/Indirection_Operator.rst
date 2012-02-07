====================
Indirection Operator
====================
Mumps indirection operator (the at symbol "@") defers the definition of an element of the code (local or global variable, arguments etc.) till the execution time. Using the indirection operator, one can specify a variable that points to a certain element of the code. 

For example, the following simple code demonstrates usage of the indirection operator::

	GTM> SET X="WORLD",B="X"

	GTM> WRITE A="HELLO"__@B

The above commands will print "HELLO WORLD" message. In the first command, the variable B is set to point to the variable X. In the second command, the value of B is referred using the indirection operator "@". This example shows the atomic form of indirection in which a global or local variable is replaced by indirection.

Another form of indirection is "Argument indirection" in which many commands accept indirection of the entire argument given to them. A simple example is::

	GTM> SET A="^INDER"

	GTM> DO @A

In the above example, the second command will execute DO ^INDER as indirection operator is being applied on the variable A. 

There are also other forms of indirection like EntryRef indirection, Pattern code indirection and Name indirection (Although these three forms sound a bit complicated for mumps beginners). The advantage of indirection operator is that it allows abstraction by deferring the element definition to run-time. Mumps also allows recursive indirection although this form of indirection can be very slow and obscure. One of the concerns is that the code written using the indirection operator is difficult to read and thus hard for maintenance. Therefore the recommendation is to use the indirection operator carefully and to document the code properly if using indirection.

 
