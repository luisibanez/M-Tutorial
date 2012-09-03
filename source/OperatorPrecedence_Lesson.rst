.. _operator-precedence-lesson-label:

===================
Operator Precedence
===================

This Lesson is estimated to be completed in 5 minutes.

You should have first completed the Lesson: :ref:`basic-coding-style-lesson-label`.

Description
###########

This lesson introduces the particularities of operator precedence in the M
language. This precedence is different from most programming languages and
therefore requires some attention from developers who are new to M.

Precedence
##########

In M operator precedence goes from **Left to Right**.

This is particularly important when using together the aritmetic operators

* \+
* \-
* \*
* \/

Since the results might be surprising to new M developers.

More explicitly:

All unary and binary operators in M have `left to right precedence`_.

This includes all

* Arithmetic
* String
* Logical operators.

.. _left to right precedence: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s06.html#Precedence


Examples
########

The following operation

::

   GTM> WRITE 1+2*3

returns **9** and not the **7** that one would have expected from the typical
rule that many other programming languages have about multiplication and
division taking precedence over addition and subtraction.

In M one would have to use parenthesis in order to force the desired precedence.

Try

::

   GTM> WRITE 1+(2*3)
   7

then

::

   GTM> WRITE (1+2)*3
   9


Evaluation
##########

What should be the return of the following operation ?

::

   GTM> WRITE 1+2*4+6*5



Next Lesson: :ref:`basic-flow-control-lesson-label`
