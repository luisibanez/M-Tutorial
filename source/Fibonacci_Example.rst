========================
Fibonacci Series Example
========================

Description
###########

  In this example we compute the Fibonacci series up to the value 100.


Examples
########


| FIBONACCI ; compute the Fibonacci series
|  SET (A,B)=1
|  FOR I=1:1 SET S=A+B WRITE !,S SET A=B SET B=S QUIT:S>100
|  WRITE !,"Result= ",S

The first line containes the label FIBONACCI, followed by a comment. The
semicolon is the symbol that marks the beginning of a comment.

The second line sets two variables A and B to the value 1. By using
parenthesis, we indicate that both variables are going to be assigned the same
value in this initialization.

The third line has a for loop that uses the variable I as counter. It
initializes the variable in 1, and picks to increment it by 1 as well.  The
body of the for loop is in that single line. Start by computing the sum of A
and B in S, as it is expected in the computation of the Fibonacci series. Then
the variables A and B slide in the series in preparation for computing the next
term.

The QUIT command at the end of the for loop line checks whether the Fibonacci
term has surpassed 100, and if so, it will quit the execution of the for loop.

The fourth line prints out the final value of the Fibonacci term.


The Vertical Form
#################

Just like with many other languages, there are multiple styles for writing M
code. We can rewrite the example above using the "Vertical" style of M as
follows:

| FIBONACCI ; compute the Fibonacci series
|  SET A=1
|  SET B=1
|  FOR I=1:1 DO  QUIT:S>100
|  . SET S=A+B
|  . WRITE !,S
|  . SET A=B
|  . SET B=S
|  WRITE !,"Result= ",S

The vertical notation is easier to read, particulary for developers accostumed
to other languages, and it is also more convenient for maintaining it in
revision control systems, where changes are tracked based on line-by-line
comparisons.
