=================
IF Command
=================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 95-97


    IF Count<100 WRITE "Done"

	The IF command tells the computer to execute an action if the statement returns true, if false, do nothing and jump to the next line. In the above example, "Done" would be written only in the case where count equals a number less than 100.

It is important to note that the command must be written on the same line as the IF conditional; here the command WRITE is on the same line as IF. Failing to type in this formate, would result in "Done" as output, regardless of a undesired Count variable.

IF X=3 IF Y=7 WRITE "Hi"

'Hi' would only be written with X=3 and Y=7. If either is false, nothing would be output. In cases were only one variable need be true, the 'or' statement can be implemented.

IF X=3!(Y=7) WRITE "Hi"

Even if Y is 8, but X is 3, "Hi" is still written.

and the ELSE command

    IF H>5 WRITE "more than 5",!
    ELSE  WRITE "no more than 5",!

	In cases where the IF statement returns false, and the command following is not executed, an ELSE statement can be added. In the above case, where H is 3, "no more than 5" is output.

Note that there must be two spaces in front of the "ELSE" command, because ELSE is a command without arguments.

Note the addition of ',!' at the end of each line, this denotes a new line in the output.

Also, explain the $TEST special variable

	Mumps actually stores the boolean result from the IF statement in a variable entitled: $TEST. For example,

IF X=3 WRITE "hello"

When X does equal 3, the $TEST variable contains a 1 for 'true' and Mumps continues on the line to the command WRITE, thus "hello" is output. When X is not 3, the $TEST variable contains 0, for 'false' and Mumps jumps to the next line of code, nothing is ouput.



.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
