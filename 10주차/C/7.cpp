#include <cstdio>
#include <cstring>
int main(void)
{
    char a[10000];
    int cnt1 = 0;
    int cnt2 = 0;

    scanf("%s", a);

    int size = strlen(a);
    for (int i = 0; i < size-2; ++i)
    {
        if (a[i + 1] != 'O' || a[i + 2] != 'I') continue;
        if (a[i] == 'K') cnt1++;
        if (a[i] == 'I') cnt2++;
    }

    printf("%d\n", cnt1);
    printf("%d\n", cnt2);

    return 0;
}
