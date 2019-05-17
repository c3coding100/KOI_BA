#include <stdio.h>

void sum(int n)
{
    if (n <= 0) return;
    sum(n / 2);
    printf("%d ", n);
    return;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    sum(n);
    return 0;
}
