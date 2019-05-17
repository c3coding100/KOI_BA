#include <cstdio>
#include <cstring>
int main(void)
{
    int i = 0;
    int len[10];
    char c[10][20] = { 0, };
    char d = 0;
    for (i = 0; i < 10; i++) {
        scanf("%s", c[i]);
        len[i] = strlen(c[i]);
    }

    scanf(" %c", &d);
    for (i = 0; i < 10; i++) {
        if (c[i][len[i] - 1] == d) {
            printf("%s\n", c[i]);
        }
    }
    return 0;
}
