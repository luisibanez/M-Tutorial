.. _basic-flow-control-lesson-label:

==================
Basic Flow Control
==================

This Lesson is estimated to be completed in 20 minutes.

You should have first completed the Lessons:

* :ref:`operator-precedence-lesson-label`
* :ref:`basic-coding-style-lesson-label`
* :ref:`basic-code-life-cycle-lesson-label`

Description
###########

Flow control is an essential aspect of most programming languages.

Here we cover in M the familar elements:

* FOR
* IF / ELSE

and also dive into the more M-specific `postconditionals`_.

The FOR Loop
############

The for loop in M can take multiple forms.

Simplest Form
=============

It simplest form has the familiar structure of

::

   variable = initial value : increment : final value

as in

::

  for i=a:b:c do
  . set sum=sum+i
  . set sqr=sqr+(i*i)

This indicates that the variable **i**:

* Will start at the value **a**
* Will increment at values **b**
* Until it is larger than the value **c**.

For each iteration, this example above will:

* Accumulate in the variable **sum** the values of **i**.
* Accumulate in the variable **sqr** the values of **i** square.

Notice the use of parenthesis to ensure the operator precedence of
multiplication of **i** before addition to the variable **sqr**.

The body of the for-loop starts with the **do** statement. The lines of code in
the body are indicated by the "." symbol and the indentation to the right.


The following for loop will print the even numbers from zero to 10. Including zero and 10.

::

   for i=0:2:10 do
   . write i,!

Exercise
********

Write this code into a file called triangle.m

::

   start ; compute the triangle of the number 10
    set number=10
    set triangle=0
    for i=1:1:number do
    . set triangle=triangle+i
    write "Triangle of ",number," is ",triangle,!
    quit

Then from the command line compile and execute the program

::

   mumps     triangle.m
   mumps -r  start^triangle

and should get the output `55`_.

.. _55: http://en.wikipedia.org/wiki/55_%28number%29


Logical Form
============

The for-loop in M can also be driven by a logical condition instead of the
numerical limits of the control variable. This is done by combining the
**quit** command with `postconditionals`_.


Exercise
********

For example, to print again the even numbers up to 10

::

    for i=0:2 do  quit:(i=10)
    . write i,!

Note that there are two spaces between the **do** command and the **quit**
command. The expression

::

  quit:(i=10)

is an example of a postconditional.

It can be read as

::

    execute quit if (i=10)

This expression is tested after every cycle of the execution of the body.
Therefore in this case, the value of (i=10) has already been processed by the
time that the logical postconditional becomes true.

.. _postconditionals: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s07.html#Postconditionals


Variations
==========

The elements of the for-loop are options and therefore the following variations
are easy to compose.

Example
*******

Here we compute the powers of two by using a structure similar to a while loop

::

  set s=0
  set i=1
  for  do  quit:(i>100)
  . write s,!
  . s=s+i
  . i=s

Notice that here we are skipping the assignment and increment in the
:ref:`for-command-label`, and therefore there must be two spaces between the
**for** and **do**. The loop is terminated when the **i** variable is larger
than 100.


Walking a List
==============

The for-loop can also walk a list of items.

For example

::

   for x="John","Paul","Ringo","George" do
   . write x,!

will print

::

    John
    Paul
    Ringo
    George

Next Lesson:
