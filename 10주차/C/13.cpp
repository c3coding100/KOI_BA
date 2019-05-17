#include <cstdio>
#include <cstring>

int main(void)
{
    char c[100] = { 0, };
    int d[5] = { 0, };
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &d[i]);
    }

    sprintf(c, "%d%d%d%d%d", d[0], d[1], d[2], d[3], d[4]);

    for (i = 0; i < strlen(c); i++) {
        printf("%c", c[i]);
        if (((i + 1) % 3) == 0)
	    printf("\n");
    }

    return 0;
}
