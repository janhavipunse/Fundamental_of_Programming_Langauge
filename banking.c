/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void display();
void Withdraw();
void deposit();
void check_Balance();


// Mybank is an array which will store 50 user entries, each entry has 2 fields - AccountNumber, BankBalance
int myBank[50][2];      

int main()
{

    for(int i = 0 ; i < 50; i++){
        myBank[i][0] = 1000 + i;
        //backbalance is a random amount i*220 gives different backbalance each time
        myBank[i][1] = 1000 + (i*220); 
    }
    int choice = 0;
    int ans = 1;
    printf("***BANKING***");
    while(ans == 1){
        printf(" \nEnter your choice : ");
        printf(" \n1. display ");
        printf(" \n2. Withdraw ");
        printf(" \n3. deposit ");
        printf(" \n4. check balance \n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display();
                break;
            case 2:
                Withdraw();
                break;
            case 3:
                deposit();
                break;
            case 4:
                check_Balance();
                break;
            defalut:
                printf(" Choose a Valid option !! ");
                break;
        }

        printf(" \nDo you want to continue press 1 for Yes / 0 for no : ");
        scanf("%d", &ans);
    }
    printf("Exit");
}


void display()
{
    int accountNumber, flag = 0;
    printf("Enter account number to check balance: ") ;
    scanf("%d", &accountNumber);  
    for (int i=0; i<50; i++)
    {
        if(myBank[i][0] == accountNumber){
            printf("Balance for your account number is: %d", myBank[i][1]);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("There is no matching account number for %d. Please enter valid account number!", accountNumber);
    }
}

void Withdraw()
{
    int accountNumber, withdrawAmount, ans = 0, flag = 0;
    printf("Enter account number to withdraw amount from: ") ;
    scanf("%d", &accountNumber);

    for (int i = 0; i < 50; i++)
    {
        if (myBank[i][0] == accountNumber)
        {
            flag = 1;
            printf("Enter amount you want to withdraw = ");
            scanf("%d", &withdrawAmount);
    
            if (myBank[i][1] > withdrawAmount)
            {
                myBank[i][1] -= withdrawAmount;
                printf("%d Rs withdrawn", withdrawAmount);
                printf("\nDo you want to check balance?\n1). yes\n2).no\n");
                scanf("%d", &ans);
                if (ans == 1)
                {
                    printf("balance=%d", myBank[i][1]);
                }
            }
            else
            {
                printf("LOW BALANCE!!");
            }
            break;
        }
    }
    if(flag == 0){
        printf("There is no matching account number for %d. Please enter valid account number!", accountNumber);
    }
}

void deposit()
{
    int accountNumber, depositAmount, ans = 0, flag = 0;
    printf("Enter account number to withdraw amount from: ") ;
    scanf("%d", &accountNumber);

    for (int i = 0; i < 50; i++)
    {
        if (myBank[i][0] == accountNumber)
        {
            flag = 1;
            printf("Enter amount you want to deposit = ");
            scanf("%d", &depositAmount);
            myBank[i][1] += depositAmount;

            printf("%d Rs deposited", depositAmount);
            printf("\nDo you want to check balance?\n1). yes\n2).no\n");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("balance =%d", myBank[i][1]);
            }
        }
        break;
    }
    if(flag == 0){
        printf("There is no matching account number for %d. Please enter valid account number!", accountNumber);
    }
}

void check_Balance()
{
    int accountNumber, flag = 0;
    printf("Enter account number to check balance: ") ;
    scanf("%d", &accountNumber);

    for (int i=0; i<50; i++)
    {
        if(myBank[i][0] == accountNumber){
            printf("Balance for your account number is: %d", myBank[i][1]);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("There is no matching account number for %d. Please enter valid account number!", accountNumber);
    }    
}