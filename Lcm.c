#include <stdio.h>

int main()
{ int a,b,i,LCM=1;
 printf("enter any 2 nos=\n");
 scanf("%d%d",&a,&b);
 for(i=1;i<=a && i<=b;i++)
 {   if(a%i==0 && b%i==0)
     LCM*=i;
     a=a/i;
     b=b/i;
}
  LCM= LCM*a*b;
  printf("LCM=%d",LCM);
  return 0;
}
