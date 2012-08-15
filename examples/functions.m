

factorial(n)
 set f=n
 for  do  quit:n<2
 . set n=n-1
 . set f=f*n
 . write n," : ",f,!
 quit f

start
 set x=$$factorial(5)
 write x,!
 quit
