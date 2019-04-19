#include <cstdio>
int main()
{
    int c[4][4]={{0,},};
    int i=0,j=0,k=0,h=0;

    for (i = 0; i < 4; i++) {
        printf("%dclass? ",i+1);
        for (j = 0; j < 3; j++) {
            scanf("%d",&c[i][j]);
            c[i][3]=c[i][3]+c[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        printf("%dclass : %d\n",i+1,c[i][3]);
    }
    return 0;
}
