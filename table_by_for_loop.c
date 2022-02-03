#include <stdio.h>
int main()
{

    int n, r, i;
    printf("Enter a number to genrate table :\n");

    scanf("%d", &n);

    for (i = 1; i <= 10; i = i + 1)
    {

        r = n * i;

        printf("%d x %d = %d\n", n, i, r);
    }

    return 0;
}