#include <stdio.h>
int main(){
            int a , b , c ; // variables .
            printf("NOTE : Its an infinite calculator to exit press Ctrl + C...\n");
            printf("Enter Number : \n >>> ");
            scanf("%d",&a);
            label: // Code repeat from here .
            printf("Enter next number : \n >>> ");
            scanf("%d",&b);
              c = a + b ;
              printf("Result: : \n >>> %d \n", c);
              a = c ;

              goto label;


return 0;
    
}