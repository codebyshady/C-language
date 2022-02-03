#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int a;
            srand(time(NULL));
            printf("Enter the last no. until which you want the random number\n ");
            scanf("%d",&a);
            printf("The random Number between 0 to %d is %d",a,rand()%a);
return 0;

}