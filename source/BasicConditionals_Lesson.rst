.. _basic-conditionals-lesson-label:

==================
Basic Conditionals
==================

This Lesson is estimated to be completed in 20 minutes.

You should have first completed the Lessons:

* :ref:`basic-coding-style-lesson-label`
* :ref:`basic-code-life-cycle-lesson-label`

Description
###########

Flow control is an essential aspect of most programming languages.

Here we cover in M the IF / ELSE commands


The IF Command
##############

The :ref:`if-command-label` in M has the familiar form

::

   if  condition  command

in its simplest form the command can be placed in front of the condition

::

   if a<5 write "a is smaller than 5",!

however when the if body has long commands or has multiple commands, the
vertical form below if better suited for clarity

::

  if a<5 do
  . write "a is smaller than 5",!

note again the use of the "." to indicate indentation in the commands that are
part of the `IF`_ body.


The ELSE Command
################

As you may expect, the `ELSE`_ command indicates the alternative outcome of the
logical condition.


::

   if a<5 write "a is smaller than 5",!
   else  write "a is not smaller than 5",!

note the double space in front of the ELSE command.

one can also place both the positive and the negative logical outcomes into indented bodies, as in

::

   if a<5 do
   . write "a is smaller than 5",!
   else  do
   . write "a is not smaller than 5",!

or for with larger bodies

::

   if a<5 do
   . write "a is smaller than 5",!
   . set b=a*2
   else  do
   . write "a is not smaller than 5",!
   . set b=a/2


Note again that there are two spaces after the `ELSE`_ command.



.. _ELSE: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s04.html
.. _IF: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s09.html

Next Lesson: :ref:`basic-postconditionals-lesson-label`
