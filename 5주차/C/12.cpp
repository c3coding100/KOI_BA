#include <cstdio>
int main()
{
    int i=0,j=0,k=0;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=0;j<(k*2-1)-(i*2+1);j++)
            printf(" ");
        for(j=0;j<i*2+1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
