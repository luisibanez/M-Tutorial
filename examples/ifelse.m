if1 ; simple if statement
 set a=5
 set b=10
 set c=25
 if (a<b) set c=b
 write c,!
 quit

if2 ; if statemetn with else clause
 set a=5
 set b=10
 if (a<b) write "variable a=",a," is smaller than b=",b,!
 if (a>b) write "variable a=",a," is larger  than b=",b,!
 quit

if3 ; if statemetn with else clause
 set a=5
 set b=10
 if (a<b) write "variable a=",a," is smaller than b=",b,!
 else  write "variable a=",a," is larger  than b=",b,!
 quit

