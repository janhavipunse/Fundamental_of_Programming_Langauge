#include <stdio.h>

int main()
{
    float basic,total_salary,DA,HRA;
    printf("enter basic salary=");
    scanf("%f",&basic);
    if (basic<1500)
    {
        DA=0.9*basic;
        HRA=0.1*basic;
        total_salary= basic+DA+HRA;
        printf("TOTAL SALARY =%f",total_salary);
    }
    else
    { 
        DA=0.98*basic;
        HRA= 500;
        total_salary= basic+DA+HRA;
        printf("TOTAL SALARY=%f",total_salary);
    }
    
    return 0;
}