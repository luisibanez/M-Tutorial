=================
QUERY Function
=================

Material prepared from `GT.M Programmer’s Guide`_ [BHASKAR2010]_


Command
-------
::

    $QUERY(glvn)


Description
-----------
``$QUERY`` takes a global variable array ("global") ``glvn`` to scan for
data values. A global is a persistent and dynamic tree containing text values. 

Example
-------
::

    ; Configure a simple global, a tree with depth of 1 and only 2 branches
    S ^X(0,1)="A"
    S ^X(0,2)="B"
    ;
    ;  The global looks like this: 
    ;
    ;       0
    ;     /   \
    ;    /     \
    ;  1="A"   2="B"
    ;
    ; To retrieve the values at each node in the global, use the QUERY function
    ;
    ; Call query on the global
    SET Y=$QUERY(^X)
    ; 
    ; Y is now ^X(0,1), and the value at this location can be retrieved
    ; with the Indirection Operator
    WRITE !,@Y
    ; Output: A
    ;
    ; To get the next node, call query again with the value of the node at Y
    SET Y=$QUERY(@Y)
    WRITE !,@Y
    ; Output: B


Because the ``$QUERY`` function can be called not only with the original
global but with the value of the global at a position, it can be repeatedly
called using the Indirection Operator to traverse through the nodes of the
tree.


::

    ; Configure a simple global, a tree with depth of 1 and only 2 branches
    S ^X(0,1)="A"
    S ^X(0,2)="B"
    ;
    ; Initialize Y for use with the Indirection Operator
    SET Y="^X"
    ;
    ; Repeatedly use the QUERY function
    ; 
    FOR  SET Y=$QUERY(@Y) QUIT:Y=""  WRITE !,@Y
    ; Output: A
    ;         B

.. _GT.M Programmer’s Guide: http://tinco.pair.com/bhaskar/gtm/doc/books/pg/UNIX_manual/index.html


