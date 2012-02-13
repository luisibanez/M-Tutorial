=================
SELECT Function
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 92-94.


$SELECT
=======

The $SELECT or $S function receives as input a list of paired expression arguments. It returns the first (and only the first) truth expression it encounters. For example::

	GTM>WRITE $SELECT(0:"False",1:"True",1:"Also True")
	
	True

If there is no true value within the input list, the function generates a run-time error. For example::

	GTM>WRITE $SELECT(0:"False")
	%GTM-E-SELECTFALSE, No argument to $SELECT was true

To avoid this behavior, it is a common practice to include a literal '1' as the truth value of the last pair of the input list. Doing so is like defining a "default" value for the function.

Below there is an example of use of the function::

	GTM>S X=5
	GTM>W $S(X>10:"X is bigger than 10",X<10:"X is smaller than 10",1:"X is 10")

	X is smaller than 10

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


