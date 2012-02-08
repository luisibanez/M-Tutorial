=================
PIECE Function
=================

Description
###########
  **$PIECE(** *string*, *delimiter* *[ , first = 1 [, last ] ]* **)**

Splits a delimited string into pieces.

Parameters
###########

String
******
(string) The string to partition

Delimiter
*********
(string) The delimiter to use to split the string

First (optional)
****************
(integer) The first piece of the string to return. The default value is 1.

Last (optional)
***************
(integer) The last piece of the string to return. The default is *first*, meaning it will only return one piece.

Examples
########

|   GTM> SET FISH="Catfish,Cod,Salmon,Tuna"
|
|   GTM> $PIECE(FISH,",")
|   Catfish
|
|   GTM> $PIECE(FISH,",",4)
|   Tuna
|
|   GTM> $PIECE(FISH,",",1,3)
|   Catfish,Cod,Salmon
|
|   GTM> SET $PIECE(FISH,",",1)="Trout"  
|   GTM> WRITE B3
|   Trout,Cod,Salmon,Tuna

