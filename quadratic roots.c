#include<stdio.h>
#include<math.h>
int main() 
{
    float a,b,c,dis,img,real,r1,r2;
    printf("enter coefficients of quadratic:\n");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
 {   
     r1=(-b+sqrt(dis))/2*a;
    r2=(-b-sqrt(dis))/2*a;
    printf("Roots are distinct and are equal to:\n%.2f\n%.2f",r1,r2);
}
else if(dis==0)
{r1=r2=-b/2*a;
printf("Roots are equal and are equal to:%.2f\n",r1);
}
else
{real=-b/2*a;
img =(sqrt(-dis))/2*a;
printf("Roots are imaginary and are equal to:\n%.2f+%.2fi \n%.2f-%.2fi",real,img,real,img);
 }   return 0;
}