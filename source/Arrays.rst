======
Arrays
======

Description
###########

Arrays in M are achieved through subscripting, without strict allocation. They can be thought of as variables having child nodes for each subscript. They are mainly for logical relationships, not mathematical vectors/matrices, although that kind of structure can be emulated. See below examples.

Examples
########

**Subscripting**::

	SET A=1
	SET A(1)=2

	WRITE A  *1*
	WRITE A(1)  *2*

Variables A and A(1) can be thought of as completely separate in this usage. It can be extended to any amount of subscripts, e.g. A(1,1) or A(2,1,3).

**Non-Integer Subscripts**::

	SET CAR="Mustang"
	SET CAR("Make")="Ford"
	
	WRITE CAR("Make")  *Ford*

Now we see why subscripts form a relation. Subscripts can be strings, to allow for relations like Person having Gender, Height, and Nationality (ex. Bob("Gender")="Male")

**Fixed Array Emulation**::

	FOR i=1:1:10 SET A(i)=10-i

	WRITE A(4)  *6*

The above code "allocates" a size-10 array called A. A's ten cells contain 10-(their index). This type of iteration is similar to a "normal" array structure. This can be done in higher dimensions.
