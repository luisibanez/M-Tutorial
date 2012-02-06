=======
Devices
=======

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 157-159


M uses device numbers to access resources and to interface with devices when using the OPEN, USE or CLOSE commands. Implementations vary and device types are not standardized across implementations.

Device types: (not exhaustive, GT.M implementation)

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

Example of possible implementation: (UCD MicroMUMPS)

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





.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
