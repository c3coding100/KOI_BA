#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[21];
    char str2[21];

    scanf("%s", str1);
    scanf("%s", str2);

    int ans = strlen(str1) + strlen(str2);

    printf("%d\n", ans);

    return 0;
}
