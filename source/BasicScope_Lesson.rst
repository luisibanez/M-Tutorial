.. _basic-scope--lesson-label:

===========
Basic Scope
===========

This Lesson is estimated to be completed in 10 minutes

Description
###########

Just as in any other language, M has a very specific definition of
scope.

This emcompases two major aspects:

* Line Scope for Commands
* Dynamic Scope for Variables

Add here explanation about scope

Line Scope
##########

M is a purely imperate language.

The C-Language expression:

::

  if(condition) {
  command1
  command2
  command3
  }


when written in M looks like:

::

  if condition space command1 command2 command3 endofline

The scope in M starts with the space and ends with the endofline.

Therefore one think of the C-language opening bracket "{" as the
equivalent of the space in M language in front of the IF command, in the
sense that it marks the beginning of the body of that IF command.

One can then think of the C-Language closing bracket "}" as the
equivalent of the endofline in the M language. Therefore the end of the
line in M marks the end of the body of to be executed as part of the IF
command.

For readibility, however, the line in front of the IF can be folded into
the Vertical form by using the DO and "." notation

The "." indentation is similar to what is done in the Python language.

::

  if condition do
  . command1
  . command2
  . command3
  . command4

