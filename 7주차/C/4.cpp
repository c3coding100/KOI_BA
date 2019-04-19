#include <cstdio>
int main()
{
    int c[3][5]={{5,8,10,6,4},{11,20,1,13,2},{7,9,14,22,3}};
    int i=0,j=0,k=0;

    for (i = 0; i < 3; i++) {
        for(j = 0 ; j<5 ; j++)
            printf("%2d   ",c[i][j]);
        printf("\n");
    }
    return 0;
}
