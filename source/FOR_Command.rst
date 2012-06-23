.. _for-command-label:

===========
FOR Command
===========

Material prepared from `M Programming Book`_ (Page 108) [WALTERS1997]_ and `GT.M Programmer's Guide`_


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

    FOR I=1:1 DO  QUIT:I>7
    . WRITE " I= ",I 
    . WRITE " I Square= ",I*I,!

*Notice that there are two spaces between DO and QUIT.*

Related
#######

*  :ref:`do-command-label`
*  :ref:`quit-command-label`


References
##########

`FOR page at GT.M Programmer's Guide`_

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _FOR page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s05.html
