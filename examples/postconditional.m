post1 ; postconditional in set command
 set a=5
 set b=10
 set c=25
 set:(a<b) c=b
 write c,!
 quit

post2 ; postconditional in write command
 set a=5
 set b=10
 write:(a<b) "variable a=",a," is smaller than b=",b,!
 write:(a>b) "variable a=",a," is larger  than b=",b,!
 quit

