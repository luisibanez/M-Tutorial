Variables
=========

Contents:

In times when multiple processes are in motion, multiple Job variables are given, allowing for seperate identification of computational action.

   	HOROLOG_Variable:
Containing such needed information as current date and time, important information for other functions can be computed from the $Horolog variable. The output form is in two numbers D and S, seperated by a comma. D represents the number of days since January 1st, 1841. S represents the seconds elapsed in the current day.


	ECODE_Variable:
This variable will hopefully not contain anything. However, if the computer encounters any error in the code's execution, a set of variables, each denoting a different error, will be assigned to ECODE. For instance, if a variable was called without containing anything, ECODE would contain: ",M6,"


	ETRAP_Variable:
This contains information telling the computer what actions to execute given a time in which an error is found in the code. It would contain a error message to be printed, for example, or a function to be called in the case of an error.


	TEST_Variable:
In the IF statement, this variable stores either a 1 or 0 depending on the boolean return of the conditional. IF the statement is true, TEST stores 1, if false, TEST stores 0. This results in the cmputer executing the command or jumping to the next line of code respectively.


	IO_Variable:
This variable tells the computer to write to a given file or device. It comes in handy when there are multiple applications open that could be written to, read from, or acted within. Each open device, or file, gets a unique IO value.


	STACK_Variable:
Given a specific error in the compilation of a code set, the STACK variable provides information to allow further analysis of the problem. This variable points to where the information, function, or other variable is stored in the stack memory.


A variable is, in general, a placeholder for such content as a number, string, or action. Information stored in certain places in a computers memory is tagged to allow easy retrieval, this 'tag' is a variable.
