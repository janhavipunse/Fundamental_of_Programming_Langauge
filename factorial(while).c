#include <stdio.h>

int main() {
 int n,factorial=1,i=1;
 printf("Enter Number:");
 scanf("%d",&n);
 if (n<0)
 printf("ERROR!\nFactorial of a negative number doesn't exist.");
 else
{while (i<=n)
{ factorial=factorial*i;
 ++i;
 }printf("factorial:%d",factorial);
  }  return 0;
}