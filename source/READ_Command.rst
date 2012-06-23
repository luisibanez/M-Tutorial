.. _read-command-label:

=================
READ Command
=================

Material prepared from `M Programming Book`_ (Page 84) [WALTERS1997]_ and `GT.M Programmer's Guide`_

Description
###########

R[EAD]

**R[EAD]**: (variable|*variable|variable#size)[:timeout] [string literal]

Arguments:

Must be one of the following:

- string literal
- format command
- variable[#count][:timeout]
- \*variable[:timeout]

If the argument is a string literal or format command, the READ command cancels
any pending read-ahead then functions as a WRITE command.

If #count is present, #count is the maximum number of characters that will be read into the variable.
However it does not restrict the number of characters that may be read into the $KEY variable.

The timeout is specified in seconds. If :timeout is specified; $TEST is set to
0 and $KEY is set to null if the read terminated because of expiration fo
specified time. If time did not run out it is set to 1 otherwise. The variable
will contain all the characters received prior to the timeout.


Examples
########

::

   READ "What is your name ?",!,YOURNAME

::

   READ !,"Answer: ",ANS:10 ;Give them 10 seconds to answer


Related
#######

*  :ref:`write-command-label`
*  :ref:`open-command-label`
*  :ref:`close-command-label`
*  :ref:`use-command-label`


References
##########

`READ page at GT.M Programmer's Guide`_


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
.. _GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
.. _READ page at GT.M Programmer's Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch06s19.html
