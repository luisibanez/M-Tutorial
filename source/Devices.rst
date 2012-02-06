=======
Devices
=======

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 157-159



In order to utilize a resource in MUMPS, first gain access to the resource (ex: make OS call to set up printer), then use the resource, then release the resource for further use by others.

Device types: (not exhaustive, GT.M implementation)

.. Still missing columns with various properties of various devices. Also need to mention $IO

+----------+--------------+
| Device   | Device Type  | 
+==========+==============+
|  TRM     | Terminal or  |
|          | Printer      |
+----------+--------------+
|  SD      |Sequencial    |
|          |disk          | 
|          |file          |
+----------+--------------+
|  FIFO    |FIFO          |
|          |		  | 
|          |	          |
+----------+--------------+
|  NULL    |Null          |
|          |devices	  | 
|          |              |
+----------+--------------+
|  PIPE    |PIPE          |
|          |		  | 
|          |	          |
+----------+--------------+
|  SOC     |Socket        |
|          |devices	  | 
|          |	          |
+----------+--------------+

MUMPS uses device numbers to access resources and to interface with devices when using the `OPEN <./OPEN_Command.html>`_, `USE <./USE_Command.html>`_ or `CLOSE <./CLOSE_Command.html>`_ commands. Implementations vary and device types are not standardized across implementations.

Example of possible device numbers: (UCD MicroMUMPS implementation, example out of date)

+----------+--------------+
| Device   | Device Type  |
+==========+==============+
|  0       | User Console |
+----------+--------------+
|  1       | Printer      |
+----------+--------------+
|  2       | Disk File    |
+----------+--------------+
|  3       | Disk File    |
+----------+--------------+
|  4       | Disk File    |
+----------+--------------+
|  5       |External      |
|          |Communications| 
|          |port          |
+----------+--------------+

Device numbers can be used to access the resource after it has been opened.



.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false

.. _GT.M reference: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html
