=================
GET Function
=================

Description
###########
  **$GET** *(variable, arg2 )*

Returns the value within a variable or a constant. If the variable is not defined, $GET returns a default value.

$GET can be called with one or two arguments.

The first argument is the variable $GET will attempt to obtain information from.

The second argument, which is optional, sets the value to return if the variable in the first argument is not defined. If the second argument is not set, this argument defaults to "".

Examples
########

>K SURNAME ; $GET(SURNAME) -> ""
$GET(SURNAME,"unlisted") -> "unlisted"

>S SURNAME="Smith" ; $G(SURNAME) -> "Smith"
$G (SURNAME,"Jackson") -> "Jackson"
