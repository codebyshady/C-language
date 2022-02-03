#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    char name[36];
    int *ptr;
    int a = 0;
            printf("Enter Your Name\n");
            scanf("%[^\n]s",&name);
    printf("Now Enter the number of numbers you want to add \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 1; i <= n; i++)
    {

        printf("Enter No. at %d place ", i);
        scanf("%d", &ptr[i]);
        a = a + ptr[i];
    }

    printf("The Sum of all the numbers is : %d\n", a);
    

    printf("Thanks For using our calculator %s",name);
free(ptr);


    return 0;
}