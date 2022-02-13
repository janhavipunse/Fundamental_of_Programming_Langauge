#include <stdio.h>

int main() {
 int a,b,q,r;
 printf("enter value of divident:");
 scanf("%d",&a);
 printf("enter value of divisor:");
 scanf("%d",&b);
 q=a/b;
 r=a%b;
 printf("quotient:%d\nremainder:%d",q,r);
  
    return 0;
}