#include <stdio.h>
#include <stdlib.h>
unsigned long Fact(unsigned int n);
int main()
{
    int m, k;
    double P;
    do
    {
        printf("Input m,k(m>=k>0):");
        scanf_s("%d,%d", &m, &k);
    } while (m < k || m < 0 || k < 0);
    P = (double)Fact(m) / (Fact(k) * Fact(m - k));
    printf("P=%.0f\n", P);
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
