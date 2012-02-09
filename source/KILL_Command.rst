=================
KILL Command
=================

**KILL** [:bool] *var1[,var2][,(ex1,ex2)]*

Description
###########

KILL, at its most basic level, deletes variables specified in its arguments.

KILL is optionally used with an exclusive list, or a conditional, or on multiple arguments. Additionally, it may be used with no arguments to delete all local variables.

KILLing an undefined variable has no effect.

Arguments
#########

**-var1,var2,...**

Specifies the local variable(s) to be deleted.

*Example*::

	SET A=1,B=2
	KILL A,B
	SET C=3
	KILL C
	*Local variables A and B (and then C) will be deleted, and will return undefined if referenced*

**-:bool**

An optional true/false expression. If true, the kill command will execute. If false, nothing happens.

*Example*::

	SET A=1,B=1
	KILL:A=1 B
	KILL:A=2 A
	*A=1 evaluates true, so B is deleted. Then, A=2 evaluates false, so A is not deleted*

**-ex1,ex2**

Optionally, an exclusive list (list of variables in parentheses) can be provided. Those variables in the exclusion list will be preserved, while every other variable is deleted. In the event of a variable appearing in the exclusive list and argument list (ex. KILL (A,B),A), its exclusive property is ignored, and it is KILLed.

*Example*::

	SET A=1,B=2,C=3
	KILL (A,B)
	*A and B are kept, and the remaining variable C is deleted*
