#include <stdio.h>
#include <stdlib.h>
unsigned long Fact(unsigned int n);
int main()
{
    int m;
    do
    {
        printf("Input m:");
        scanf_s("%d", &m);
    } while (m < 0);
    printf("%d!=%lu\n", m, Fact(m));
    printf("press any key to continue.");
    return 0;
}

unsigned long Fact(unsigned int n)
{
    unsigned int i;
    unsigned long result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
    return result;
}
