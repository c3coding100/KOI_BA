#include <cstdio>
int main()
{
    int c[6][6] = { 1, 0, 1, 0, 1 }, i=0, j=0;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j <= 4;j++) {
            if(j>=1) c[i][j] = c[i - 1][j - 1];
            if(j<4) c[i][j] += c[i - 1][j + 1];
        }
    }

    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
