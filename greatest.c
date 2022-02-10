#include <stdio.h>

int main() {
int number1,number2,number3;
printf("enter any 3 numbers:");
scanf("%d %d %d",&number1,&number2,&number3);
if (number1<=number3)
{ if(number2<=number3)
printf("\ngreatest no.:%d",number3);
else
printf("\ngreatest no.:%d",number2);
}
else
{ if (number1>=number3)
if(number2<=number1)
printf("\ngreatest no.:%d",number1);
else
printf("\ngreatest no.:%d",number2);
}

    return 0;
}