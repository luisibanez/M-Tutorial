================
Global Variables
================

Description
###########

Global variables are variables that can be read and modified by all routines within
all processes from the time it is SET until it is KILLed.

They can be used by multiple users and stay in the system until they are explicitly
killed. Global variables are written to the disk and remain even after the
program is terminated.

Global variables can be used interchangeably with local variables except for these
cases:

-As control variables in a FOR command

-As subarguments of the Kill command

-As arguments in the NEW command, parameter passing, and extrinsic functions

Note: Make sure to use the HALT command at the end of a user session or the global
variable may not be saved and written to disk.

Example
###########

| SET ^A="Luis"

| SET B="Ibanez"

| KILL

| WRITE A

| WRITE B

| KILL

This code will write out "Luis" for A but garbage for B because B is a local variable
and will be erased when the program was killed.



Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 145-148

    ^MYLIST("Today",13.5,3)="Jogging"

.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
