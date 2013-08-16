.. _basic-code-life-cycle-lesson-label:

=====================
Basic Code Life Cycle
=====================

This Lesson is estimated to be completed in 15 minutes.

You should have first completed the Lesson: :ref:`basic-coding-style-lesson-label`.

Description
###########

This lesson suggest a practice for the `life cycle`_ of writing code in the M
language.

This is particularly fitted to the GT.M compiler, and might not be applicable
to other M systems.

.. _life cycle: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch03.html

Editing a File
##############

From the GT.M interpreter you can start editing a file by invoking the :ref:`zedit-command-label`.

The argument should be a valid filename for the Linux file system, without any
extension.

For example

::

   ZEDIT "myprogram"

This will open the default text editor and will allow you to start typing the
code of your program.  Note that since the program will be written in M,
you have use the ".m" suffix when referring to it with the ZEDIT command.

This means to edit the routine you will invoke as DO ^test you will use
the ZEDIT "test.m"  command.

The default editor is `Vim`_. You can change this default by setting in your
Linux shell the environment variable `EDITOR`_ to point to your favorite text
editor.

.. _Vim: http://www.vim.org/
.. _EDITOR: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch03s02s05.html

Once you have the editor open, you can type, for example:

::

   test ; my first program
    write "hello",!
    quit

Then save the file and quite the editor.

This will return you to the GT.M prompt.

::

    GTM>

The file will be saved in the directory defined in your `gtmroutines`_
environment variable. Check the content of this variable in your Linux shell by
using the command

.. _gtmroutines: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch03s02s04.html

::

    echo $gtmroutines

The file will be saved with extension ".m"

In the example above, we will have the file:

::

    myprogram.m

The content that we just wrote, is usually refered as a `Routine`_ in M.

Note that the first line of the program has the word "test" in the first column
of text. This indicates that "test" is a `label`_ that makes possible to refer
to this line of code from multiple places in M. The label is followed by a space
and then a ";" which marks the beginning of a `comment`_. 
The scope of the comment goes from the semicolon up to the end of the line.

.. _Routine: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s11.html
.. _label: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s11.html
.. _comment: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s11.html

The second line of the routine starts after the initial space, in the second column. 
This indicates that the word is a command and not a label. This is an example of the
WRITE command. We have already covered what the
:ref:`write-command-label` does.

The third and final line of the routine contains the :ref:`quit-command-label`
starting after the initial space. The QUIT command indicates the end of the
routine execution and returns to the section of code that called this routine.

Compiling a File
################

The :ref:`zlink-command-label` is used to compile the file from inside the GT.M
environment.

For example

::

   ZLINK "myprogram"

A program must be compiled every time that it is modified with an editor, unless
you HALT.  This ZLINK command forces GT.M to erase the copy of the program in
memory and check the ".m" file on disk, before re-compiling.  When a copy is
not in memory, GT.M silently recompiles any compiled code that is less 
up-to-date than its source code.


Running the Code
################

The :ref:`do-command-label` is used to trigger the execution of a given routine
starting from the label that serves as its entry point.

In our example above, we can execute this routine from the GT.M prompt by using the
command:

::

   GTM> DO test^myprogram

this calls the subroutine identified with label "test" in the routine named "myprogram"
and will produce

::

   hello
   GTM>


Editing Externally
##################

It is also possible to perform the life cycle from the Linux shell command
line, without having to enter the GT.M interpreter environment.

First go into the directory that is defined in your `gtmroutines`_ environment variable.

Then do

::

   vim  myprogram2.m

write the code

::

   test ; comment
    write "hello2",!
    quit

save the program and quit the editor. (note the space on the beginning of the 2nd and 3rd lines)


Compiling Externally
####################

Once back in the Linux shell command line, type:

::

   $ mumps myprogram2.m

This will trigger the `compilation`_ of the routine and will result in an additional file

.. _compilation: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch03s05s02.html

::

   myprogram2.o

being created in the same directory.

You can verify this with the "ls" command in the Linux shell, that should return:

::

    myprogram2.m
    myprogram2.o


Running Externally
##################

Finally, to `execute`_ the M code from the Linux shell command line, you can use the following command:

.. _execute: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch03s07.html

::

    mumps -r test^myprogram2

which should print out the text

::

    hello

and then return to the Linux shell prompt.


Summary
#######

The development life cycle looks like

::

    vim             myprogram.m
    mumps           myprogram.m
    mumps -r   test^myprogram

Ok,
you may choose to use an editor different from `Vim`_.
but... would you be as happy ?

Next Lesson:  :ref:`operator-precedence-lesson-label`
