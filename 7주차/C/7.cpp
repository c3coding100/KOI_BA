#include <cstdio>
int main()
{
    int c[5][5]={{1,1,1,1,1},};
    int i=0,j=0,k=0,h=0;

    for (i = 1; i < 5; i++)
        for(j = 0 ; j < 5 ; j++){
            if(j==0)
                c[i][j]=c[i-1][j];
            else
                c[i][j]=c[i-1][j]+c[i][j-1];
        }

    for (i = 0; i < 5; i++) {
        for(j = 0 ; j<5 ; j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
