====================
Comparison Operators
====================

Hello, Welcome to the Tutorial on Comparison Operators in M.

********************

Equal to - The equals operator is a single (=).  It can be used to compare 2 objects, and will return '1' if both sides of the equation are equal to each other, and will return '0' otherwise.
::

   SET X=(5=5)
   WRITE X

This code will return the value of X, which will be '1', as 5 is equal to 5.
::

   SET X=(4=5)
   WRITE X

This code will return the value of X, which will be '0', as 4 is not equal to 5.

********************

Not Equal to - The not equal to operator is found by using a not symbol (') along with the equal to symbol (=) which results in a ('=).  This result will be the boolean opposite of the equal to operation.
::

   SET X=(2'=2)
   WRITE X

This code will return the value of X, which will be '0', as 2 is equal to 2.
::

   SET X=(2'=3)
   WRITE X

This code will return the value of X, which will be '1', as 2 is not equal to 3.

********************

Less Than - The less than operator is rather straightforward (<).  An evaluation will return true (1) if the object on the left side is considered to be less than the object on the right side.  It will return false (0) if the objects are equal or the object on the right hand side is less than the object on the left hand side.
::

   SET X=(2<5)
   WRITE X

This code will return the value of X, which will be '1', as 2 is less than 5.
::

   SET X=(5<5)
   WRITE X

This code will return the value of X, which will be '0', as 5 is not less than 5.
::

   SET X=(8<5)
   WRITE X

This code will return the value of X, which will be '0', as 8 is not less than 5.

********************

Greater Than - The greater than operator is rather straightforward (>).  An evaluation will return true (1) if the object on the left side is considered to be greater than the object on the right side.  It will return false (0) if the objects are equal or the object on the right hand side is greater than the object on the left hand side.
::

   SET X=(8>5)
   WRITE X

This code will return the value of X, which will be '1', as 8 is greater than 5.
::

   SET X=(5>5)
   WRITE X

This code will return the value of X, which will be '0', as 5 is not greater than 5.
::

   SET X=(2<5)
   WRITE X

This code will return the value of X, which will be '0', as 2 is not greater than 5.

********************

Less than or Equal to (not greater than) - This operation is the logical combination of the not symbol (') and the greater than symbol (>) to create ('>).  This will be the boolean opposite of the greater than operation, which is the equivalent of a less than or equal to operation in other languages.
::

   SET X=(8'>5)
   WRITE X

This code will return the value of X, which will be '0', as 8 is not less than or equal to 5.
::

   SET X=(5'>5)
   WRITE X

This code will return the value of X, which will be '1', as 5 is less than or equal to 5.
::

   SET X=(2'>5)
   WRITE X

This code will return the value of X, which will be '1', as 2 is less than or equal to 5.

********************

Greater than or Equal to (not less than) - This operation is the logical combination of the not symbol (') and the less than symbol (<) to create ('<).  This will be the boolean opposite of the less than operation, which is the equivalent of a greater than or equal to operation in other languages.
::

   SET X=(2'<5)
   WRITE X

This code will return the value of X, which will be '0', as 2 is not greater than or equal to 5.
::

   SET X=(5'<5)
   WRITE X

This code will return the value of X, which will be '1', as 5 is greater than or equal to 5.
::

   SET X=(8'<5)
   WRITE X

This code will return the value of X, which will be '1', as 8 is greater than or equal to 5.

********************

I hope this short tutorial has answered any questions you might have had on comparison operators in M!











Tutorial by Rory Thrasher


Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 54 - Note that pages 52-60 are not available online for free.


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false
