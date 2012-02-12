=================
CHAR Function
=================

Description
###########
  **$C[HAR](** *int1* [, *int2* [, ...]] **)**

Converts base ten integers into a single string of ASCII characters.

Parameters
###########

(integer) One or more base ten integers.

Examples
########

::

  GTM> WRITE $CHAR(65,66,67)
  ABC
  GTM>W $C(65,66,67)
  ABC
  GTM>W $C(33)
  !
  GTM>W $C(40,-1,41) 
  ()

