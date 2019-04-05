#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=3;
    char c='A';

    scanf("%d",&i);

    for(j=0;j<i;j++){
        for(k=0;k<i-j;k++)
            printf("%c",c++);
        printf("\n");
    }
    return 0;
}
