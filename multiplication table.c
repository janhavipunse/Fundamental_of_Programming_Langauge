#include <stdio.h>

int main() {
    int n,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i;i<=10;i++)
    printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}