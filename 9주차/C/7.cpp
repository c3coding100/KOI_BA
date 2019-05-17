#include <stdio.h>

int N;

int sum(int n)
{
    int i;
    if (n <= 1) return 1;
    return sum(n / 2) + sum(n - 1);
}

int main()
{
    scanf("%d", &N);
    printf("%d", sum(N));
    return 0;
}
