=================
HOROLOG Function
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 49 and page 228.


    $HOROLOG

The $HOROLOG variable is being used to get the date and time of system. The output can be used for tasks like calculating age, or counting the number of hours between two specific times.
MUMPS does not use the ordinary date/time format, the output of $HOROLOG is of the form of 62493,61088. The day can be found using the first number, and the second number is the number of seconds elapsed on that day. The designers of MUMPS have set the january 1st of 1841 to be day number 1. Taking the leap years into account and considering the fact that every 4 years has 1461 days, We can find out that the number 62493 refers to the year 2012 (62493/1461=42.77, 42.77*4+1841=2012.09). To figure out the exact year an M routine can be used.
::

    YEARCALC
    ;This routine calculates the year from the $HOROLOG command.
     SET H=$HOROLOG>21608+$HOROLOG; adds one to the number of days if the date is after jan 1st 1900;
     SET LEAPYRS=H\1461; Number of leap years since 1841
     SET Y=H#1461; Number of years after the last leap year
     SET YEAR=LEAPYRS*4+1841+(Y\365)
     SET DAY=Y#365
     SET:DAY=0 DAY365, YEAR=YEAR-1
     SET MO=1 IF Y=0 SET DAY365,YEAR=Year-1
     FOR I=31,YEAR#4=0+28,31,30,31,30,31,31,30,31,30,31 QUIT:DAY'>I SET DAY=DAY-I, MO=MO+1
     WRITE MO\10,MO#10,DAY\10,DAY#10, "/",YEAR
    QUIT




.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


