==============
Basic Commands
==============

Description
###########

This page describes the first basic commands that you will need to use when programming in M.

Here we assume that you already have the GT.M compiler installed in your
system, and that you are running in a Linux system with a shell interpreter
such a bash or zsh.

GT.M provides a mixture of compiler and interpreter. That is, you can either
write M code directly in an interpreter, or write M code in a source files that
is then compiled and executed. Our first examples in this Lesson focus on working
with the interpreter. This is called "immediate" mode in GT.M.

Start the M Interpreter
#######################

From your shell start the GT.M interpreter by typing

::

   $ gtm

Here we assume that $ is the prompt symbol of your Linux shell.

In response you should see the GT.M prompt

::

   GTM>

At this point we can try the following simple command that writes to the
console the version of the GT.M compiler that we are using.

::

   GTM>WRITE $ZVERSION

in response the system will print a message similar to


::

   GTM>WRITE $ZVERSION
   GT.M V5.5-000 Linux x86_64
   GTM>

and the GT.M prompt will appear again.



Managing Variables
##################

The SET Command


The WRITE Command

