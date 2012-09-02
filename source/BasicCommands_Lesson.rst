==============
Basic Commands
==============

This Lesson is estimated to be completed in 10 minutes.

Description
###########

This page describes the first basic commands that you will need to use when programming in M.

Here we assume that:

* You already have the `GT.M`_ compiler installed in your system.
* You are running in a Linux system with a shell interpreter such a bash or zsh.

GT.M provides a mixture of compiler and interpreter. That is, you can either
write M code directly in an interpreter, or write M code in a source file that
is then compiled and executed.

Our first examples in this Lesson focus on working with the interpreter. This is called `direct`_ mode in GT.M.

.. _direct: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch04.html#Operate_in_Direct_Mode
.. _GT.M: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch01.html

Start the M Interpreter
#######################

From your shell, start the GT.M interpreter by typing

::

   $ gtm

Here we assume that $ is the prompt symbol of your Linux shell.

In response, you should see the GT.M prompt

::

   GTM>

At this point we can try the following simple command that writes to the
console the version of the GT.M compiler that we are using.

::

   GTM> WRITE $ZVERSION

In response, the system will print a message similar to


::

   GTM> WRITE $ZVERSION
   GT.M V5.5-000 Linux x86_64
   GTM>

and the GT.M prompt will appear again.



Managing Variables
##################

Variables `names`_ in M must start with a letter or the character %, and must continue with letters or numbers.

.. _names: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s02.html

For example

::

   %TIME
   NAME
   NAME123
   Name12first


The SET Command
###############

The :ref:`set-command-label` is used to set the value of a variable.

Examples

::

   GTM> SET SUM=0
   GTM> SET NAME="Linus Torvalds"
   GTM> SET YEAR=1984

* Variables do not have to be predefined.
* If the variable has not been defined before, the SET command will create the variable.
* There is only one variable type in M: the `string`_ type.
* Variables can be interpreted as numbers depending on the context.

.. _string: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05.html#Data_Types

Space Matters
#############

Commands must be separated from their arguments by one and only one `space`_.

.. _space: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s07.html

Note that between the SET command and the variable NAME there is only one space.

::

   GTM> SET NAME="Linus Torvalds"

Then,

* There is no space between the variable name and the "=" sign.
* There is no space between the "=" sign and the value.



The WRITE Command
#################

The :ref:`write-command-label` prints the value of a variable to the standard output.

The sames rules of spaces applies to the WRITE command. There should be one and
only one space between the WRITE command and its argument.

::

  GTM> WRITE NAME
  Linus Torvalds

or

::

  GTM> WRITE YEAR
  1984

or

::

  GTM> WRITE SUM
  0


Multiple elemements can be combined in the same WRITE command by separating them with commas

::

  GTM> WRITE "My Name is: ",NAME
  My Name is: Linus Torvalds


The exclamation point symbol can be used to insert new lines in the output to be printed.

::

  GTM> WRITE "My Name is: ",!,NAME
  My Name is:
  Linus Torvalds


The Short Form
##############

Commands in M can be shortened to the firt unambiguouos letters of the command name.

For example:

::

   GTM> SET NAME="Elvis"
   GTM> WRITE NAME

can be shortened to

::

   GTM> S NAME="Elvis"
   GTM> W NAME

As a good practice of writing readable and maintainable code you should strive
for writing the long form of the commands. However, it will be common for you
to run into code that uses the short form, and therefore, this section is only
intended to help you read such code, not as a recommendation of writing using
the short form.

The Horizontal Form
###################

Several M commands can be placed in the same line, separating them by spaces

For example

::

   GTM> S NAME="Elvis" W NAME

This is called the horizontal form, in contrast to the Vertical form

::

   GTM> S NAME="Elvis"
   GTM> W NAME

As a good practice of writing readable and maintainable code you should strive
for writing the vertical form of the commands. However, it will be common for
you to run into code that uses the horizontal form, and therefore, this section
is only intended to help you read such code, not as a recommendation of writing
using the horizontal form.

