#include <stdio.h>
#include <stdlib.h>
long Fact(int n);
int main()
{
    int m;
    long ret;
    printf("Input m:");
    scanf_s("%d", &m);
    ret = Fact(m);
    printf("%d!=%ld\n", m, ret);
    printf("press any key to continue.");
    return 0;
}

long Fact(int n)
{
    int i;
    long result = 1;
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
