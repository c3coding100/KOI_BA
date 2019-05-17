#include <cstdio>
#include <cstring>

int main(void)
{
    char c[20] = { 0, };
    char d[20] = { 0, };

    scanf("%s", c);
    scanf("%s", d);

    strncpy(d, c, 2);
    strncat(d, c, 2);
    printf("%s\n", d);

    return 0;
}
