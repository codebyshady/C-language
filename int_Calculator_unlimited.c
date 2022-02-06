#include <stdio.h>
int main(){
            int a , b , c ; // variables .
            int d ; //variable for if else statement .
            printf("NOTE : Its an infinite calculator to exit press Ctrl + C...\n");
            label2: //goto label2...
            printf("Enter 0 for subtration \nEnter 1 for addition \nEnter 2 for multiplcation \nEnter 3 for division \n >>> ");
            scanf("%d",&d);
            if (d==1){
            printf("Enter Number : \n >>> ");
            scanf("%d",&a);
            label: // Code repeat from here .
            printf("Enter next number : \n >>> ");
            scanf("%d",&b);
              c = a + b ;
              printf("Result: : \n >>> %d \n", c);
              a = c ;

              goto label;
              }
            else if (d==0){

                              printf("Enter Number : \n >>> ");
            scanf("%d",&a);
            label3: // goto label 3 Code repeat from here .
            printf("Enter next number : \n >>> ");
            scanf("%d",&b);
              c = a - b ;
              printf("Result: : \n >>> %d \n", c);
              a = c ;

              goto label3;
            }
            // this is the multiplication code ....
              else if (d==2){
                printf("Enter Number : \n >>> ");
            scanf("%d",&a);
            label4: // label4 Code repeat from here .
            printf("Enter next number : \n >>> ");
            scanf("%d",&b);
              c = a * b ;
              printf("Result: : \n >>> %d \n", c);
              a = c ;

              goto label4;
              }
              // code for division...
                else if (d==3){
                  printf("Enter Number : \n >>> ");
            scanf("%d",&a);
            label5: // label5 Code repeat from here .
            printf("Enter next number : \n >>> ");
            scanf("%d",&b);
              c = a / b ;
              printf("Result: : \n >>> %d \n", c);
              a = c ;

              goto label5;
                }
                    else {
                      printf("wrong input \n");
                      goto label2;
                    }
return 0;
    
}
