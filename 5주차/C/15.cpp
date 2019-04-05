#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=1;
    scanf("%d",&k);

    for(i=0;i<k;i++){
        for(j=0;j<i;j++)
            printf("  ");
        for(j=k;j>i;j--)
            printf("%d ",h++);
        printf("\n");
    }
    return 0;
}
