=================
DATA Function
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 138-140.

The data function is used to find the value and descendent status of a local or global variable.
It returns an integer code to give this information.  The four return values are as follows:

    -If the variable is undefined, $DATA() returns 0.
    -If the variable has a value but no descendants, $DATA() returns 1.
    -If the variable has descendants but no value, $DATA() returns 10.
    -If the variable has a value and descendants, $DATA() returns 11.

Example:

GTM>Kill  Write $Data(a)
0
GTM>Set a(1)=1 Write $Data(a(1))
1
GTM>Write $Data(a)
10
GTM>Set a=0 Write $Data(a)
11
GTM>

This uses $DATA to display all possible $DATA() results.

Example:

lock ^ACCT(0)
if '$data(^ACCT(0)) set ^ACCT(0)=0
set (ACCT,^ACCT(0))=^ACCT(0)+1
lock

This uses $DATA() to determine whether a global node requires initialization.

Example:

for  set cus=$O(^cus(cus)) quit:cus=""  if $data(^(cus))>1 do WORK

This uses $DATA() to determine whether a global node has descendants and requires additional processing.


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


