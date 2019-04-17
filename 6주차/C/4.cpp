#include <cstdio>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    int h[10]={0,};

    for(b=0;b<100;b++){
        scanf("%d",&h[b]);
        if(h[b]==0)
            break;
        c++;
    }

    for(b=c-1;b>=0;b--)
        printf("%d ",h[b]);

    return 0;
}
