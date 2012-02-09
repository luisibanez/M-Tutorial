=============
CLOSE Command
=============
The CLOSE command closes a connection between the M process and I/O device. 
If the connection does not exist, the close command is ignored. Parameters can be specified for the process to manipulate the device with as the connection is closed.
For example, 
CLOSE "/dev/thermometer"  closes a thermometer device
CLOSE "/dev/thermometer":(READY) closes a thermometer device and sets it as ready

Material prepared from http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/ch09s09.html
