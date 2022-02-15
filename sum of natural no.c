#include <stdio.h>

int main() {
    int i,sum=0,n;
    printf("enter any no.=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   sum+=i;
    printf("Sum of first 10 natural no.s=%d",sum);

    return 0;
}