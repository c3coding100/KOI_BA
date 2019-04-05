#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=1;
    char c='A';

    scanf("%d",&i);

    for(j=0;j<i;j++){
        for(k=j;k<i;k++)
            printf("%d ",h++);
        for(k=0;k<=j;k++)
            printf("%c ",c++);
        printf("\n");
    }
    return 0;
}
