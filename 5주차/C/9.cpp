#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=0;

    scanf("%d",&i);

    do{
        j=j+i;
        if(j>=100)
            break;
        printf("%d ",j);
        if(j%10 == 0)
            break;
    }while(1);

    return 0;
}
