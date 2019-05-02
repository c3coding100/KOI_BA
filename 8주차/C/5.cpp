#include <cstdio>

int seq(int a,int b)
{
    int res=1, i=0;
    for(i=1; i<=b ; i++){
        res=res*a;
    }
    return res;
}

int main()
{
    int i=0,j=0,k=0,h=0,t=1;

    scanf("%d",&i);
    scanf("%d",&j);

    printf("%d",seq(i,j));

    return 0;
}
