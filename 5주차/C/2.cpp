#include <cstdio>
int main()
{
    int i=0,j=0,k=0;
    scanf("%d",&i);

    for(j=1;j<=i;j++){
        for(k=1;k<=j;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
