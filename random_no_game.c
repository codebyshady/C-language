#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
                int a , b ;

            printf("Its an random number game ... \nEnter number from 0 to 5 only \n");
int count=0;
for (int i=1; i<=5; i++){       
    srand(time(NULL));
    a = rand()%5;
    label:
    printf("Enter your number \n >>> ");
    scanf("%d",&b);
       
    
        if (a==b){
                    printf("The Random number is \n >>> %d \n ",a);
            printf("Congratulation... you win round %d \n", i );
                count++;
        }
        else if (b>5){
            printf("Wrong Input \n");
            goto label;
        }
        else { printf("The Random number is \n >>> %d \n ",a);
            printf("Oops Try the next round \n");
        }
            
}
printf("Your score is %d", count);

    return 0;
}