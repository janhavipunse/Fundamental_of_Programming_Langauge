#include <stdio.h>
int main(){ 
    
    int n, sum, i, choice=0, array[100],search, min, max, flag=0;
    int ans = 1;
    printf("Enter size of an array=");
    scanf("%d",&n);
    printf("Enter elements =\n");
    for (i=0;i<n;i++){   
        scanf("%d",&array[i]);
    }
    while(ans == 1){
        printf("choose an option:\n");
        printf("1. display array\n2. sum of all\n3. search a no.\n4.finding min and max");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                 for (i=0;i<n;i++)
                    printf("%d \n",array[i]);
                 break;
            
            case 2:
                for(i=0;i<n;i++)
                    sum += array[i];
                printf("Sum of all numbers=%d\n",sum);
                break;
            case 3:
                printf(" enter number to be searched=");
                scanf("%d",&search);
                for(i=0;i<n;i++){
                    if (array[i]==search){
                        printf("%d is at %d position\n",search,i+1);
                        flag=1;
                        break;
                    }
                  }
                if (flag==0)
                    printf("%d is not present\n",search);
                break;
            case 4:
                min=array[0];      
                max=array[0];
                for (i=0; i<n;i++)
                {  
                    if(array[i]>max){
                        max=array[i];
                    }
                    if (array[i]<min){
                       min= array[i];
                    }
                }
                printf("Mininum no.=%d\nMaximum no.=%d\n",min,max);
                break;
            default:
                printf("Please enter valid option \n");
                break;
        }
        printf("do you want to continue?\n1.yes\n2.no");
        scanf("%d",&ans);
    }

    return 0;
  }
  
  
 
 