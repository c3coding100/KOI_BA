#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=3;
    scanf("%d",&i);

    for(j=0;j<i;j++){
        for(k=i-j;k<i;k++)
            printf(" ");
        for(k=(j*2);k<(i*2-1);k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
