#include <cstdio>
int main()
{
    int c[2][4]={0,};
    int d[2][4]={0,};
    int i=0,j=0,k=0;

    printf("first array\n");
    for (i = 0; i < 2; i++)
        for(j = 0 ; j<4 ; j++)
            scanf("%d",&c[i][j]);

    printf("second array\n");
    for (i = 0; i < 2; i++)
        for(j = 0 ; j<4 ; j++)
            scanf("%d",&d[i][j]);

    for (i = 0; i < 2; i++) {
        for(j = 0 ; j<4 ; j++)
            printf("%d ",c[i][j]*d[i][j]);
        printf("\n");
    }
    return 0;
}
