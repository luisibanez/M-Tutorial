===========
FOR Command
===========

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 108-110

Command
-------

::

    F[OR] [variable=start[:increment[:limit]]][,...]

Description
-----------
``FOR`` will repeat the remaining commands on the line, incrementing
``variable`` by ``increment`` until 

* ``variable`` would be greater than ``limit`` if ``increment`` is non-negative.
* ``variable`` would be less than ``limit`` if ``increment`` is negative.

This means that ``FOR I=10:-1:1 WRITE I,!`` will print the numbers from 
10 to 1 in descending order as expected. ``variable`` will not be beyond ``limit`` after the loop exits.

Omitting ``limit`` will cause the loop to continue endlessly unless a command
inside the loop causes it to end (e.g. ``QUIT``).


Block Structuring
-----------------

``FOR`` can loop over more than the remainder of the line by using ``DO`` or 
``XECUTE``. Additional lines are indented with a period and a space.



Examples
--------

::

    FOR I=1:1:10 WRITE I,!

::

    FOR I=1:0 DO QUIT:Count>200
    . WRITE "value",Count




.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
