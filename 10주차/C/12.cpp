#include <cstdio>
#include <cstring>

int main(void)
{
    char c[100] = { 0, };

    scanf("%s", c);

    if (strchr(c, 'c') == NULL)
        printf("No ");
    else
        printf("Yes ");

    if (strstr(c, "ab") == NULL)
        printf("No ");
    else
        printf("Yes ");

    return 0;
}
