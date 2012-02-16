==================
TRANSLATE Function
==================

Material prepared from `M Programming Book`_ [WALTERS1997]_

Page 69.


    $TR[ANSLATE]
$TRanslate() is a function that performs find-and-replace actions. It reviews each character in the first expression and compares it character-by-character to characters in the second expression, looking for a match. When a match is found, $TRANSLATE() uses the position of the match in the second expression to identify the appropriate replacement. 

Formatting for the $TRANSLATE function is:
| $TR(expression1, experession2, and expression3)

The first expression specifies the string on which the function operates. If other expressions are unavailable, $TRANSLATE() will return the first expression.

The second expression is optional as it specifies which characters you want $TRANSLATE() to replace. If a character appears more than once in the second expression, the first occurrence controls the translation and $TRANSLATE() will ignore consecutive occurrences. If a second expression is omitted, $TRANSLATE() returns the first expression without any changes.

The third expression is also optional. This expression specifies the replacement characters for “positionally corresponding characters” in the second expression. If this expression is omitted, or is shorter than the second expression, $TRANSLATE() replaces the original character with a null.


Example:

|   W $TR("hello")
|   hello
|   W $TR("hello","h","H") 
|   Hello


.. _M Programming book: http://books.google.com/books?id=jo8_Mtmp30kC&printsec=frontcover&dq=M+Programming&hl=en&sa=X&ei=2mktT--GHajw0gHnkKWUCw&ved=0CDIQ6AEwAA#v=onepage&q=M%20Programming&f=false


