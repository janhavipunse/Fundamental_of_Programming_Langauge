#include <stdio.h>

int main() {
   float quantity, rate,total;
    printf("Enter quantity\n(If your purchase is greater than 1000 Rs. you can get a discount)-\n:");
    scanf("%f",&quantity);
    if (quantity>1000)
{
    printf("You get a discount of 10 percent!\n");

rate=0.1*quantity;
printf("Discount of Rs.=%.2f",rate);
total=quantity-rate;
printf("\nPay Rs.=%.2f only.",total);
  }
 else
{ printf("Pay Rs.=%.2f",quantity);
 } return 0;
   
}