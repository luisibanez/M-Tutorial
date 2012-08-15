#include <stdio.h>

int main() {

 int ax=1;
 int bx=20;
 int cx=2;
 int ay=1;
 int by=20;
 int cy=2;
 int sumx=0;
 int sqrx=0;
 int sumxy=0;

for(int x=ax; x<bx; x+=cx) {
 sumx=sumx+x;
 sqrx=sqrx+x*x;
 for(int y=ay; y<by; y+=cy) {
   sumxy=sumxy+x*y;
   if(sumxy<100) {
     printf("%d\n",sumxy);
     }
   }
 }
 return 0;
}
