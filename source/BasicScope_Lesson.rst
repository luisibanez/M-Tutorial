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
* `Dynamic Scope`_ for Variables


Line Scope
##########

M is a purely `imperative language`_.

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


Variable Scope
##############

Variables in M have `Dynamic Scope`_.

In practical terms this means that functions have access to variables that have
been defined before entering the function.

For example, in the following code:

::

  triangle(x) ;;
   set sum=0
   for  do quit:x'>1
   . set sum=sum+x
   . set x=x-1
   quit sum

  main() ;;
   set sum=1500
   set x=6
   set y=$$triangle(x)
   write y,!
   write sum,!

The variable "sum" that is defined in the "main" function is available to the
internal commands of the "triangle" function. Therefore, the SET commands
inside the triangle function are indeed affecting the "sum" variable of the
"main" function.

Dynamic scoping is not a M only feature. It is common in other programming
languages. In praticular: Javascript, Matlab, Perl, Lisp, and Bash.

In order to create a more controlled environment, it is common in M programming
to use the NEW command in order to specify a local scope for a variable. In the
modified code below:

::

  triangle(x) ;;
   new sum
   set sum=0
   for  do quit:x'>1
   . set sum=sum+x
   . set x=x-1
   quit sum

  main() ;;
   set sum=1500
   set x=6
   set y=$$triangle(x)
   write y,!
   write sum,!

Now that we use "new sum" in the "triangle" function, we make clear that the
"sum" variable is going to have local scope, and therefore the "SET" commands
made to it in the "triangle" function are not going to affect the "sum"
variable that existed in the "main" function.

It is highly recommended therefore to develop the habit of declaring your local
variables using the "NEW" command, in order to avoid unintended side effects
due to dynamic scoping.


.. _imperative language: http://en.wikipedia.org/wiki/Imperative_programming
.. _Dynamic Scope: http://en.wikipedia.org/wiki/Scope_%28computer_science%29#Dynamic_scoping
.. _Bash: http://wiki.bash-hackers.org/commands/builtin/unset

