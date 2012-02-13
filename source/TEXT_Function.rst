=================
TEXT Function
=================

Description
###########
*$TEXT(entryref)*

The $TEST() function returns the text of the source for the line specified in its argument, allowing this text to be assigned to a variable.  The complete line will be returned, including label, commands, and comments.

If $TEST() cannot access the source for the current object or the source that is found doesn't match the object in use, $TEXT() will return the empty string.

Parameters
##########
*entryref* specifies the label, offest, and routine name of the line that $TEXT() returns.

If the label and offset are not in the routine, $TEST() returns the null string.

If *entryref* specifies an offset of zero or no offset from the beginning of the routine, the routine name is returned.

If *entryref* does not specify a routine, it is assumed that the routine is the current routine.

An extension to $TEST() allows negative offsets, however these offsets must be preceded by a + sign (ie LABEL+-1), but if this causes the line to be before the zero line, a run-time error occurs.

Examples
########
*FOR I=1:1 SET J=$TEXT(+I) QUIT:K="" WRITE !,J*

This command uses the $TEXT() function to write all of the source for whatever the current routine is.

*$TEXT(+0)*

This command returns the name of the current routine.

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


