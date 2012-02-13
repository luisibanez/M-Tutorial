=================
ORDER Function
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 134-148.


    $ORDER

The order function allows you to traverse some or all of a global.
The $order function operates on a single subscript level within a global, and returns the
next subscript value in collating sequence that exists at that level in the global.  You can specify some starting value, and the $order function will find the next value that exists in collating sequence.  To find the first subscript at the specified level, use a starting value of null (“”).  To find the first subscript at the specified level that starts with “C”, use a starting value that collates just before “C”, for example “B~”

Example:

>zwrite
lcl(1)=3
lcl("x")=4
GTM>write $order(lcl(""))
1
This example returns the first node, that is 1, because the specified last subscript of the argument is null and lcl has no null subscript.

Example:

>write $order(lcl(1))
x
This example returns the first node after lcl(1) that is x because lcl has no null subscript.

Example:

>write $order(lcl(""),-1)
x
This example returns the last node that is, x, because the last subscript of the first argument is null and second argument is -1.

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


