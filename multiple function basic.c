#include <stdio.h>
void add();
void sub();
void mul();
void divi();
int main()
{
   add();
   sub();
   mul();
   divi();
    return 0;
}
void add()
{
    int n1,n2,sum;
    printf("enter any 2 no.s=");
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    printf("sum=%d\n",sum);
}
void sub()
{
    int n1,n2;
    printf("enter 2 no.s=");
    scanf("%d %d",&n1,&n2);
    printf("sub=%d\n",n1-n2);
}
void mul()
{
    int n1,n2;
    printf("enter 2 no.s=");
    scanf("%d %d",&n1,&n2);
    printf("%d\n",n1*n2);
}
void divi()
{
    int n1,n2;
    printf("enter 2 no.s=");
    scanf("%d %d",&n1,&n2);
    printf("%d\n",n1/n2);
}
