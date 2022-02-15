-#include <stdio.h>

int main() {
int i,j;
printf("input no. of rows:");
scanf("%d",&i);
j=0;
while(j<i){
printf("*");
j++;
printf("\n");
}
    return 0;
}