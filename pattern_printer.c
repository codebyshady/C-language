#include <stdio.h>
int main(){
                char a[5];
                printf("Enter the character of which you want pattern: \n >>>");
                scanf("%s",&a);
                for (int i=1; i<=8; i++){
                            for (int j=1; j<=i;j++){

                                printf("%s ",a);
                            }
                            printf("\n");
                             }
                for (int k=8 ; k>=1; k--){
                            for (int l=k; l>=1; l--){

                                printf("%s ",a);
                            }

                    printf("\n");

                }
    return 0;
}