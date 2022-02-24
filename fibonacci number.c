#include <stdio.h>

int main() {
 int first=0,second=1,series,n;
 printf("enter no. of terms=");
 scanf("%d",&n);
 printf("0  ");
 printf("1  ");
 for(int i=3;i<=n;i++)
 {series=first+second;
 first=second;
 second=series;
 printf("%d  ",series);
 }
 return 0;
}