================
HOROLOG Variable
================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 208


    WRITE $HOROLOG

$HOROLOG ($H) returns a string value with the number of days since December 31st, 1840, followed by the number of seconds since midnight of the current day, with the the values separated by a comma. The seconds value begins at midnight with zero (seconds), and increments through the course of the day by 1 for each second past midnight. At midnight, the days value is incremented by one, and the seconds value is reset to 0. The $HOROLOG string cannot be changed with the SET command.

Example use:

GTM>WRITE $HOROLOG 

Produces 62493,61616 at 5:06:56 PM on February 6, 2012.

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
