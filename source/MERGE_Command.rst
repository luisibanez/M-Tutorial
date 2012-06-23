=================
MERGE Command
=================

Material prepared from `GT.M Programmer's Guide`_

$MERGE
######

The $MERGE command copies a variable and all its descendants into another variable.


Command
-------
    ``M[ERGE] variable1=variable2``

Copies variable2 and all its descendants into variable1

Example
-------

Populate one variable with a couple of descendants

    ``SET A="Yankees"``

    ``SET A(1)="Monday"``

    ``SET A(2)="Thursday"``

Populate another variable with a couple of descendants

    ``SET B="Red Sox"``

    ``SET B(3)="Saturday"``

    ``SET B(4)="Sunday"``


Review their content

    ``ZWRITE A``

Will print out

    ``A="Yankees"``
    ``A(1)="Monday"``
    ``A(2)="Thursday"``

while

    ``ZWRITE B``

Will print out

    ``B="Red Sox"``
    ``B(3)="Saturday"``
    ``B(4)="Sunday"``

Then, invoking the MERGE command will merge the two variables.

    ``MERGE A=B``

and a call to ZWRITE

    ``ZWRITE A``

Will print out

     ``A="Red Sox"``
     ``A(1)="Monday"``
     ``A(2)="Thursday"``
     ``A(3)="Saturday"``
     ``A(4)="Sunday"``

Notes
-----

`$MERGE page at GT.M Programmer's Guide`_

.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _$MERGE page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s15.html

