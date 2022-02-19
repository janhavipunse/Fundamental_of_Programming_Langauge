#include <stdio.h>

int main() {
   float n;
   printf("Enter any number=");
   scanf("%f",&n);
   if (n>=0)
 {  if (n==0)
   printf("Number is 0.");
   else
   printf("Number is positive.");
}
   else
   printf("Number is negative.");
    return 0;
}