==============
ECODE Variable
==============

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 350

$ECODE is a variable used to store all "active" erros, that is, errors that have not yet been dealt with. Errors are stored in a string, always between commas. For this reason, whenever there are active errors $ECODE$ will always start and end with a comma. If there are no active errors, $ECODE will be the empty string.

An error code starts with a letter and is followed by a number. "M" indicates an error assigned by the MUMPS Development Committee (MDC). "U" means an error set by the programmer and "Z" indicates an error assigned by the MUMPS implementors. Errors are always appended to $ECODE, with the use of the SET command::

    SET $ECODE=",M10," ; an error defined by M standards
    SET $ECODE=",U17," ; user defined error
    SET $ECODE="" ; clears all errors


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
