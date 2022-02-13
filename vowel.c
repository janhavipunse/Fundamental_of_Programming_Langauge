#include <stdio.h>

int main()
{
    char ch;
    printf("enter alphabet:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("its vowel");
    else
    printf("consonent");

    return 0;
}
