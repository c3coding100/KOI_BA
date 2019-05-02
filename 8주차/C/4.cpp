#include <cstdio>

void max(int a,int b,int c)
{
    int m=0;
    if(a>=b && a>=c)
        m=a;
    else if(b>=a && b>=c)
        m=b;
    else
        m=c;
    printf("%d",m);
}

int main()
{
    int i=0,j=0,k=0,h=0,t=1;

    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    max(i,j,k);

    return 0;
}
