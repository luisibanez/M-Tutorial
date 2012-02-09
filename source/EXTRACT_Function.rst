=================
EXTRACT Function
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 65.

Command
-------
::

    $EXTRACT(target[,start[,end]])

Description
-----------
``$EXTRACT(target[,start[,end]])`` takes a string and two optional integers as arguments and returns a substring.

* Returns the first character of the target string if the start argument is omitted.

* If ``start`` or ``end`` are out of bounds then it returns only valid characters from the target string.
* If ``end`` < ``start`` then it returns ``""``.

Example
-------
::

    ; Writes "T"
    S X=$EXTRACT("Thomas Rozanski") W X

    ; Writes "o"
    S X=$EXTRACT("Thomas Rozanski",3) W X

    ; Writes nothing
    S X=$EXTRACT("Thomas Rozanski",0) W X

    ; Writes nothing
    S X=$EXTRACT("Thomas Rozanski",999) W X

    ; Writes "Thomas Rozanski"
    S X=$EXTRACT("Thomas Rozanski",0,999) W X

    ; Writes "Tho"
    S X=$EXTRACT("Thomas Rozanski",1,3) W X

    ; Writes nothing
    S X=$EXTRACT("Thomas Rozanski",3,1) W X

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


