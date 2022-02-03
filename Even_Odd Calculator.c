#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *marks;
    int n;
    int eve = 0;
    int odd = 0;

    char g[1];
    printf("Enter the number of students\n");
    scanf("%d", &n);
    printf("Now Enter the number one by one\n");
    marks = (int *)malloc(n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &marks[i]);
    }
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 == 0)
        {

            eve = eve + marks[j];
        };
        if (j % 2 != 0)
        {

            odd = odd + marks[j];
        }
    };
    printf("Now Enter e for even sum and o for odd sum\n");
    scanf("%s", &g);
    if (g == 'e')
    {
        printf("%d\n", eve);
    };
    else if (g == 'o')
    {
        printf("%d\n", odd);
    };
    return 0;
}