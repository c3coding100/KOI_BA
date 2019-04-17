#include <cstdio>
int main()
{
    int c=0;
    int h[10]={0,};
    int min=0;
    int max=10000;

    for(c=0;c<10;c++){
        scanf("%d",&h[c]);
        if(h[c]<100 && min<h[c])
            min=h[c];
        else if(h[c]>=100 && max>h[c])
            max=h[c];

    }

    if(min==0)  min = 100;
    if(max == 10000) max = 100;

    printf("%d %d",min,max);

    return 0;
}
