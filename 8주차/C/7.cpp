#include <cstdio>
int cal(int a,int b, int *c, int *d)
{
    int res=0;

    if(a>b){
        *c=a/2; *d=b*2;
    }
    else {
        *d=b/2; *c=a*2;
    }
    return res;
}

int main()
{
    int i=0,j=0,k=0,h=0;

    scanf("%d",&i);
    scanf("%d",&j);

    cal(i,j,&k,&h);

    printf("%d %d",k,h);

    return 0;
}
