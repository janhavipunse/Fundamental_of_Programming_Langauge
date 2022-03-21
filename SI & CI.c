#include <stdio.h>
#include <math.h>
int main() {
  float p,r,t,CI,SI;
  printf("Enter principal amount=");
  scanf("%f",&p);
  printf("Enter the time in years =");
  scanf("%f",&t);
  printf("Enter rate=");
  scanf("%f",&r);
    SI=(p*r*t)/100;
    CI= p*(pow(1+r/100,t)-1);
    printf("SI=%.2f\nCI=%.2f",SI,CI);
    
    return 0;
}