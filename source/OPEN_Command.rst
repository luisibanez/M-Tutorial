============
OPEN Command
============
The ``O[PEN]`` command allows the M process to open a connection with an I/O device. The ``OPEN`` command contains an optional truth value, the device name, some parameters to control device behavior, an optional amount of time for the process to try to connect for, and an optional expression that binds the device to a SOCKET or PIPE mnemonicspace. 
Its formatting is:
``O[PEN][:tvexpr] expr[:[(keyword[=expr][:...])][:numexpr][:expr]][,...]``

The ``OPEN`` command will attempt to open the connection once every second, until it reaches the optional timeout variable, where it will halt the process. 
If a connection already exists, and a new OPEN command is called on the connected device by the same process, then the process will essentially close the existing connection and reopen it with the new arguements.

If a process closes a connection and repopens it, the connection will contain all the characteristics of the process as established by the first ``OPEN`` command, if new characteristics were not explicitly established in the second OPEN command.

For example,

    open /dev/thermometer::60

attempts to open a connection to a thermometer device for 60 seconds. 


