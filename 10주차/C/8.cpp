#include <cstdio>

int main(void)
{
    int i = 0;
    char c[5][100] = { {0,}, };

    for (i = 0; i < 5; i++)
        scanf("%s", c[i]);

    for (i = 4; i >= 0; i--) {
        printf("%s\n", c[i]);
    }
    return 0;
}
