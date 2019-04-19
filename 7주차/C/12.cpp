#include <cstdio>
int main()
{
    int c[5][3]={0,};
    int i=0,j=0,k=0,h=0,t=0;

    for (i = 0; i < 4; i++)
        for(j = 0 ; j < 2 ; j++){
            scanf("%d",&c[i][j]);
            c[i][2]+=c[i][j];
            c[4][j]+=c[i][j];
        }

    for (i = 0; i < 4; i++)
        printf("%d ", c[i][2]/2);

    printf("\n");
    for (i = 0; i < 2; i++)
        printf("%d ", c[4][i]/4);

    printf("\n");
    printf("%d ", (c[4][0]+c[4][1])/8);
    return 0;
}
