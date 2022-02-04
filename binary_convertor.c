#include <stdio.h>
#include <stdlib.h>
int main(){ // d is for bits unit and n for decimal number .
                int d , n  ;
                int *ptr;
                printf("How much bits decimal conversion your want : \n >>>");
                scanf("%d", &d);
                ptr = (int*) malloc(n*sizeof(int));
                printf("Enter the decimal number : \n >>> ");
                scanf("%d",&n);
                int i = 0; // for array use .
                while (n){
                       ptr[i] = n % 2;
                        n=n/2;
                        i++;

                }
                printf("The the binary value is \n >>> ");
                for (int j= i-1; j>=0; j--){

                    printf("%d",ptr[j]);
                }




    return 0;
}