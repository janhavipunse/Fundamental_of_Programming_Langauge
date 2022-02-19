#include <stdio.h>

int main() {
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if( a>='a'&& a<='z'|| a>='a'&& a<='z')
    printf("%c is a alphabet.",a);
    else
    printf("%c is not an alphabet.",a);
    return 0;
}