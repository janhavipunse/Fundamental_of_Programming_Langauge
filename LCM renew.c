#include <stdio.h>

int main()
{ int c,d,a,b,i,LCM=1;
 printf("enter any 2 nos=\n");
 scanf("%d%d",&a,&b);
 c=a;
 d=b;
 for(i=1;i<=c && i<=d;i++)
if(a%i==0 && b%i==0)
 {    LCM*=i;
     a=a/i;
     b=b/i;
     i=2;
}
  LCM= LCM*a*b;
  printf("LCM=%d",LCM);
  
  return 0;
}
