#include <stdio.h>

int main() 
{
 int array[100],search,i,n,flag=0;
 printf("enter no. of elements in array=");
 scanf("%d",&n);
 printf("enter %d different no.s:\n",n);
 for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("enter number which has to be search=");
scanf("%d",&search);
for(i=0;i<n;i++)
{
    if (array[i]==search)
{
    printf("%d is at %d position\n",search,i+1);
    flag=1;
    break;
}
}
if (flag==0)
printf("%d is not present\n",search);

return 0;
}