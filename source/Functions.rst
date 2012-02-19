Functions
=========

Contents:

.. toctree::
	:maxdepth: 2

	ASCII_Function
	
		ASCII is a function that will return the ASCII integer equivalent (in decimal) of any character.

		$ASCII	( CHARACTER )
		$A		( CHARACTER )
		
		($A is just another alias for $ASCII).
		
		For example:
			WRITE $ASCII("A")
			
		Will write:
			65
	
	CHAR_Function
	
		CHAR is a function that will return the Character associated any decimal character code in the current character set. You can find the current character set with the $ZCHSET function, which will return either M or UTF-8.

		$CHAR	( NUMBER [, N2, N3...] )
		$C		( NUMBER [, N2, N3...] )
		
		Either of the above calls will return a string of characters corresponding to the arguments passed to it.
		
		For example:
			WRITE $CHAR(65)
			
		Will write:
			A
	
	DATA_Function
	
		DATA is a function that will tell you whether or not a variable has a value, and whether or not it has descendants.
		
		$DATA	( VARIABLE )
		$D		( VARIABLE )
		
		If VARIABLE has neither a value nor descendants, it will return a 0. 
		If it has a value but not a descendant, it will return 1.
		If it has a descendant but not a value, it will return 10.
		If it has both a value and descendant, it will return 11.
		
		For example:
			S V1=4
			S V2(0)=4
			S V3=4
			S V3(0)=4
			
			W $DATA(V0),!
			W $DATA(V1),!
			W $DATA(V2),!
			W $DATA(V3)
			
		Will write:
			0
			1
			10
			11
		
	EXTRACT_Function
	FIND_Function
	FNUMBER_Function
	GET_Function
	HOROLOG_Function
	JUSTIFY_Function
	LENGTH_Function
	ORDER_Function
	PIECE_Function
	QUERY_Function
	RANDOM_Function
	SELECT_Function
	TRANSLATE_Function
	TEXT_Function

