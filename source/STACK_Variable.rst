==============
STACK Variable
==============

$STACK(LEVEL [, MODE])
$ST(LEVEL [, MODE])

TODO: Figure out what "THING" is.

Obviously, I'm still figuring this out. If you have any insights you'd like to share with me, that are more helpful than the documentation I'm using, email me: Dan.J.Hakimi@gmail.com.


The $STACK variable (abbreviated $ST) allows one to check the current state of the call stack, I think.

If called with LEVEL set to 0, $STACK will return information about the way GTM was invoked.
If called with LEVEL set to -1, $STACK will return the number of levels for which $STACK is defined.
If called with LEVEL greater than 0, but not greater than $STACK(-1), $STACK will return a string describing the command that created that level of the call stack -- either "DO", "XECUTE" or "$$" for an extrinsic function.

The MODE parameter is optional. It's complicated, and I'm still figuring out what it does. You can set it to either:
	"MCODE"
	"PLACE"
	"ECODE"
