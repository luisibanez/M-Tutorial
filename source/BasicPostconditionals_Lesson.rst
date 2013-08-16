.. _basic-postconditionals-lesson-label:

======================
Basic Postconditionals
======================

This Lesson is estimated to be completed in 20 minutes.

You should have first completed the Lessons:

* :ref:`basic-coding-style-lesson-label`
* :ref:`basic-code-life-cycle-lesson-label`

Description
###########

`Postconditionals`_ are one of the rather unique features of the M
language.

They are logical conditions that are appended to M Commands using the ":"
symbol, and that determine whether the command will be executed or not.

They follow the basic structure

::

      command:condition

as in

::

    quit:(i>10)

where the quit command will be executed if **i** is larger than 10


`Postconditionals`_ are place between the command and its arguments.

For example

::

   write:(i>10) "More than 10 iterations",!

will write the message only if **i** is larger than 10.

and

::

  set:(a<b) s=a

will set **s** to the value of **a** only if **a** is less than **b**.


.. _Postconditionals: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch05s07.html#Postconditionals




Next Lesson: :ref:`basic-scope--lesson-label`
