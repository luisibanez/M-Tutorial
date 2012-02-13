=================
FNUMBER Function
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 81.


$FNUMBER
========

The $FNUMBER or $FN function returns a formatted string containing a number that was passed as argument. For example::

	GTM> W $FNUMBER(-100,"-");
	100

The formatting is specified using the second argument the function takes. It takes a string with zero or more special character, which are interpreted as follows:

* "+": puts a "+" in front of positive values.
* "-": removes the "-" from negative values.
* ",": puts commas in every third position left of the decimal point.
* "T": represents the number with a trailing sign.
* "P": puts negative numbers between parenthesis.

This way, the function can be used as below::

	GTM> S A=-100 S B=30000
	GTM> W $FN(B,"+")
	+30000
	GTM> W $FN(A,"-")
	100
	GTM> W $FN(B,",')
	30,000
	GTM> W $FN(A,"T")
	100-
	GTM> W $FN(A,"P")
	(100)

Also, characters can be combined together in order to get specific formatting. For example::

	GTM> S A=-100 S B=30000
	GTM> W $FN(A,"+T")
	100-
	GTM> W $FN(B,"+T")
	30000+

Finally, a third argument can also be specified in order to define the number of digits after the decimal poing. For example::

	GTM> W $FN(1/3,"",3)
        0.333

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


