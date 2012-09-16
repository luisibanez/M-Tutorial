// This function computes a factorial
#include <stdio.h>

int factorial(int n) {
 int f;
 f=n;
 for(;n>1;) {
   n=n-1;
   f=f*n;
   printf("%d : %d\n",n,f);
   }
 return f;
 }

int main() {
 int x=5;
 int y=factorial(x);
 printf("Factorial of %d = %d\n",x,y);
 return 0;
 }
