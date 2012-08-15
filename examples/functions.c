#include <stdio.h>

int factorial(int n) {
 int f=n;
 for(;n>1;) {
   n=n-1;
   f=f*n;
   printf("%d : %d\n",n,f);
   }
 return f;
 }

int main() {
 int x=factorial(5);
 printf("%d",x);
 return 0;
 }
