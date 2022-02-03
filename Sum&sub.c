#include <stdio.h>
int sum(int a, int b)
{

    return a + b;
};

int main()
{

    int a, b, s, d, e;
    scanf("%d\n%d", &a, &b);
    s = sum(a, b);
    d = a - b;
    e = b - a;

    printf("%d\n", s);

    if (a > b)
        printf("%d", d);
    if (a < b)
        printf("%d", e);
    return 0;
}