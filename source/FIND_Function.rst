=================
FIND Function
=================

Material prepared from `M Programming Book`_ (Page 64) [WALTERS1997]_ [#f1]_ and `GT.M Programmer's Guide`_

$FIND
#####

The $FIND function is a special function built into M to allow you to search strings for certain substrings. You call call $FIND in one of three ways::

	$FIND
	$F

And it accepts any sort of capitalization: $Find, $find, $f, $FInd, $FiNd, are all syntactically correct, though they may not abide by the style guidelines of your project. 

The $FIND function takes two or three arguments as input::

	$FIND("Hello", "el")
	$FIND("Hello", "el", 2)
	
	$FIND(STRING1, STRING2)
	$FIND(STRING1, STRING2, INT)

* The first argument is the string which is searched through.
* The second argument is the substring to find inside of the first argument.
* The third argument is an integer which specifies a starting position for the search.

It should be noted that as a special function, you cannot use $FIND as a command, for instance::

	$FIND("PIE", "cake")

is not a valid line of M code, you can only use it in conjunction with a line command, like in the following examples::
	
	GTM>WRITE $FIND("I am a pidgeon","p")
	9
	GTM>SET X=$FIND("I am a cat","a c")

	GTM>WRITE X
	9
	GTM>WRITE $FIND("I can plant a tree on the moon","e", 20)
	26

The $FIND function will return one of three things:
* If it finds a substring, it returns the index after the last character in the substring, index+1.
* If it does not find the substring, it returns zero.
Examples::
	
	GTM>WRITE $FIND("I","I")
    	2
	GTM>WRITE $FIND("I","A")
	0

It is important to note that M, unlike C, includes whitespace in it's syntax, so that you cannot have a space after the comma seperating your arguments::

	GTM>WRITE $FIND("I", "A")

Will break on you.

.. [#f1] Book was unavailable at specified page at the time of writing.
.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/dock/books/pg/UNIX_manual/index.html

