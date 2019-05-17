#include <cstdio>
#include <cstring>

int main(void)
{
    char str[30] = { 0, };

    scanf("%s", str);
    strcat(str, "fighting");
    printf("%s\n", str);

    return 0;
}
