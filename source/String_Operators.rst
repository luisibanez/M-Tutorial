================
String Operators
================

Concatenation
#############

The _ (underscore) symbol is used concatenate two strings, or to attach one string to the end of another.

Example::

	Assume A="JACK" and B="JILL"

	===========  =============
	Expression   Result
	===========  =============
	A\_"s DOG"    JACKs DOG
	B_A          JILLJACK
	A\_" and "_B  JACK and JILL
	===========  =============

Equality
########

The = (equal sign) symbol is used to compare two strings to see if they are equal. This will return a boolean based on the result.

Examples::
	==============  ======
	Expression      Result
	==============  ======
	2000+11=2011    1
	2000="2000: B"  0
	2011=02011      1
        2011="02011"    0
        "Hex"="Tech"+5  5
        "ABC"=" ABC"+3  3
	==============  ======

Contains
########

The [ (left square bracket) symbol is used to check if a string contains another string. This will return a boolean based on the result.

Examples::
	==================  ======
	Expression          Result
	==================  ======
	"RENSSELAER"["AER"  1
	"RENSSELAER"["NOT"  0
	==================  ======

Follows
#######

The ] (right square bracket) symbol is used to determine if a string follows another string in collating sequence.
.. _a link: http://en.wikipedia.org/wiki/Collating_sequence

Example::
	=====================  ======
	Expression             Result
	=====================  ======
	"COPERNICUS"]"KEPLER"  0
	"OBAMA"]"BUSH"	       1
	=====================  ======

