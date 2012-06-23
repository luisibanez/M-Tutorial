.. _set-command-label:

=================
SET Command
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_ (Page 38-39, 75-78) and `GT.M Programmer's Guide`_

Description
###########

**S[ET]** variable=expression

Examples
########

::

    SET NAME="Thomas Jefferson"

Notes
#####

``SET`` assigns the value of the expression to the variable, creating it if it
does not exist.

``SET`` can also be used to set multiple variables to the same value.

    ``SET (X,Y,Z)=12``

Multiple ``SET`` commands can be combined into one using commas.

    ``SET X=5,Y=X+5,Z=Y-1``
    Notice that later parts of the ``SET`` command can reference variables
    created in the earlier parts.


Related
#######

*  :ref:`new-command-label`
*  :ref:`kill-command-label`


References
##########

`SET page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _SET page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s20.html
