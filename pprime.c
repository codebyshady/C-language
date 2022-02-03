#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the number upto which you want prime number ...\n");
    scanf("%d", &a);
    for (int i = 2; i <= a; i++)
    { int count=0;
        for (int j = 1; j <= i; j++)
        {

            if (i % j == 0)
            {
                count++;
                
            }
           
        }
         if (count == 2)
            {
                printf("%d ,", i);
            }
    }

    return 0;
}