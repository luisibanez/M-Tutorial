=================
Parameter Passing
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 193-196

Parameter passing in MUMPS is similar to any modern language (since the 1990 specification)::

	


	<calling the function>
	SET NUM = 18
	DO ^%MYTASK(NUM)
	<this will jump to the function with NUM as the argument>


	
	<function>
	%MYTASK(NUM)
	WRITE NUM,!

If the name of the variable in the call matches the name of the variable in the function, the original variable will be modified if the subroutine changes it. If the name is different, it will retain the original value no matter what the function does.


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
