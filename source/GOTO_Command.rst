.. _goto-command-label:

=================
GOTO Command
=================

Material prepared from `M Programming Book`_ (Page 104) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Description
###########

**GOTO** entryref[:tvexpr]

The GOTO command transfers execution to the location specified by its argument, a label.

GOTO commands executed inside of a FOR loop terminate that FOR loop.

Parameters
##########
*entryref* is a required argument that specifies the label to which execution will be transferred.

*tvexpr* is an optional argument that follows *entryref* which specifies one or more boolean expressions, at least one of which must be true.  These expressions can control whether the GOTO is performed or which label the GOTO command transfers execution to.

Other commands on a line with a GOTO have no use unless there is a postconditional for the GOTO.

Examples
########

| GOTO LABEL
|
| *This command causes execution to continue starting at the line labeled LABEL*.

| GOTO FACTORIZE+1
|
| *This command causes execution to continue starting one line after the line labeled FACTORIZE*.

| GOTO LENOVO:i<5,IBM^CENTER
|
| *This command causes execution to continue at label LENOVO if i is less than 5, or to label IBM in routine ^CENTER otherwise.*


Related
#######

*  :ref:`do-command-label`
*  :ref:`for-command-label`


References
##########

`GOTO page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _GOTO page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s06.html
