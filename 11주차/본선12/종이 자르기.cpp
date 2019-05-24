#include<stdio.h>
int a[101], b[101];

int calc(int a[], int n)
{
    int prev = 0, ret = 0;
    for (int i = 0; i <= n; i++) {
        if (a[i]) {
            if (ret < i - prev)
                ret = i - prev;
            prev = i;
        }
    }
    return ret;
}

int main(void)
{
    int m, n, k, dir, line;
    scanf("%d %d", &m, &n);
    scanf("%d", &k);
    a[0] = a[n] = b[0] = b[m] = 1;
    for (int i = 0; i < k; i++)
    {
        scanf("%d%d", &dir, &line);
        if (dir == 0)
            a[line] = 1;
        else if (dir == 1)
            b[line] = 1;
    }
    printf("%d\n", calc(a, n) * calc(b, m));

    return 0;
}
