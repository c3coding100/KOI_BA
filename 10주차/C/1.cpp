#include <cstdio>
#include <cstring>

int main(void)
{
    char c[100] = { 0, };
    int i = 0, j = 0, len = 0;

    scanf("%s", c);
    scanf("%d", &i);

    len = strlen(c) - 1;
    if (i > len)
        i = 0;
    else
        i = len-i + 1;

    for (j = len; j >= i; j--)
        printf("%c", c[j]);

    return 0;
}
