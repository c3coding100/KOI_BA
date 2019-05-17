#include <cstdio>
#include <cstring>
int main(void)
{
    char str[101] = { 0, };
    scanf("%s", str);

    int len = 0;
    len = strlen(str);

    int i;
    while (1) {
        scanf("%d", &i);
        if (i < len) {
            for (int h = i; h <= len; h++)
                str[h - 1] = str[h];
        }
        len--;

        for (int k = 0; k < len; k++)
            printf("%c", str[k]);
        printf("\n");

        if (len <= 1) {
            break;
        }
    }
    return 0;
}
