#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=3;
    scanf("%d",&i);

    for(j=0;j<i;j++){
        for(k=0;k<j;k++)
            printf(" ");
        for(k=i-j;k>0;k--)
            printf("*");
        printf("\n");
    }
    return 0;
}
