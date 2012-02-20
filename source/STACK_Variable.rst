==============
STACK Variable
==============

The $STACK variable (abbreviated $ST) allows one to check the current state of the call stack.

Command
#######

::

	$STACK(LEVEL [, MODE])
	$ST(LEVEL [, MODE])


Usage
#####

If called with LEVEL set to 0, $STACK will return information about the way GTM was invoked.
If called with LEVEL set to -1, $STACK will return the number of levels for which $STACK is defined.
If called with LEVEL greater than 0, but not greater than $STACK(-1), $STACK will return a string describing the command that created that level of the call stack -- either "DO", "XECUTE" or "$$" for an extrinsic function.

The MODE parameter is optional. It can change the value given by the variable to other, perhaps more useful, information. You can set it to either:

	* "MCODE" -- This will return the line of code with which the given level of the stack was called.
	* "PLACE" -- The address of the line of code with which the given level of the stack was called, or, if it was called by a string, the @ symbol.
	* "ECODE" -- This will return the error code that was added at the associated level of the call stack, or, if no such code exists, an empty string.

Examples
########

I don't have any examples yet. The $STACK variable seems to do the most when your code is long and convoluted, so I can't just include terminal commands and output -- I need to construct a file that makes it all work.