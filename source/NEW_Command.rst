===========
NEW Command
===========

Command
-------

**N[EW][:tvexpr]** [ [(] *lvn* [, ...] [)] [, ...] ]

Description
-----------

``NEW`` will push copies of local variables onto a stack, and reinitialize them to their original values on a ``QUIT`` (implicit or explicit) from a ``DO``, ``XECUTE``, or extrinsic function.

The command can be optionally followed by a truth-valued expression (``tvexpr``), which controls whether or not the command will actually be executed.

The arguments should be local variable names (``lvn``); all descended variables will be included.

Examples
--------

::

    LABEL
    NEW A
    SET A="B"
    QUIT
