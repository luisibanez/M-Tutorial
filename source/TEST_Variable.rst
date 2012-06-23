.. _test-variable-label:

================
TEST Variable
================

Description
###########

$TEST contains a truth value showing whether the last IF argument was true or false, or whether the last operation with timeout timed out or not. If the last timed operation timed out then $TEST is set to FALSE (0). If it did not time out, then $TEST is set to TRUE (1).

$TEST serves as an implicet argument for ELSE commands and IF commands without arguments.

$TEST is put on a stack when an extrinsic function is called or an argumententless DO function is called. After these functions complete, the $TEST variable is restored to whatever it was set to by the last IF argument or timed function, regardless of what it was set to in the extrinsic or DO.

M cannot modify $TEST with the SET command.

Example
###########

::

	IF x=3 SET y=3
	
	ELSE SET x=0

Mumps will look at the value of $TEST to see if it needs to execute the ELSE statement.

::

	IF x=3 DO^WORK
	
	ELSE SET x=0

Again, Mumps will look at the value of $TEST to see if it needs to execute the ELSE statement. However, the WORK routine may have used IFs and timeouts, so the value of $TEST may have been changed inside the routine and not be correct for the ELSE statement. It is not recommended to do this. 

Material prepared from FiS GT.M Programmer's Guide

Chapter 8
$Test Page

.. http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
