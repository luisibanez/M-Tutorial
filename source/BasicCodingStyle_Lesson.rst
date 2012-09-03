.. _basic-coding-style-lesson-label:

==================
Basic Coding Style
==================

This Lesson is estimated to be completed in 5 minutes.

You should have first completed the Lesson: :ref:`basic-commands-lesson-label`.

Description
###########

As in any other programming language, there are certain coding style rules that
are part of the culture of programming in M. These rules, or rather Guidelines
sometimes become part of the culture of a given project. Programmers would
typically develop preferences to one style or another. It is important however
to respect the style adopted by the project that you are working on.


Uppercase versus Lowercase
##########################

It has been traditional to write M using uppercase letters as in

::

    SET SUM=0
    SET NAME="Linus Torvalds"
    SET YEAR=1984
    WRITE NAME
    WRITE YEAR
    WRITE SUM

but the same can be written using lowercase letters as in

::

    set sum=0
    set name="Linus Torvalds"
    set year=1984
    write name
    write year
    write sum

Note however that lowercase variable names are differentiated from uppercase
variable name. That is, they become two different variables.

In other words, in M language, commands are not case sensitive, while variable
names are case sensitive.

::

    set sum=0
    set SUM=7
    write sum," : ",SUM

produces the output

::

    0 : 7

The Short Form
##############

Commands in M can be shortened to the first unambiguouos letters of the command name.

For example:

::

    SET NAME="Elvis"
    WRITE NAME

can be shortened to

::

    S NAME="Elvis"
    W NAME

As a good practice of writing readable and `maintainable`_ code you should strive
for writing the long form of the commands. However, it will be common for you
to run into code that uses the short form, and therefore, this section is only
intended to help you read such code, not as a recommendation of writing using
the short form.

Historically, there used to be memory-saving reasons for using the short form.
This is no longer the case with modern hardware.

The Horizontal Form
###################

Several M commands can be placed in the same line, separating them by spaces

For example

::

    S NAME="Elvis" W NAME

This is called the horizontal form, in contrast to the Vertical form

::

    S NAME="Elvis"
    W NAME

As a good practice of writing readable and `maintainable`_ code you should strive
for writing the vertical form of the commands. However, it will be common for
you to run into code that uses the horizontal form, and therefore, this section
is only intended to help you read such code, not as a recommendation of writing
using the horizontal form.

.. _maintainable: http://thc.org/root/phun/unmaintain.html

Next Lesson: :ref:`basic-code-life-cycle-lesson-label`.
