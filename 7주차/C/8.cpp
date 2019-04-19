#include <cstdio>
int main()
{
    int c[4][3]={{3,5,9},{2,11,5},{8,30,10},{22,5,1}};
    int i=0,j=0,k=0,h=0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ",c[i][j]);
            k=k+c[i][j];
        }
        printf("\n");
    }
    printf("%d ", k);
    return 0;
}
