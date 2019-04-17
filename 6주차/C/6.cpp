#include <cstdio>
int main()
{
    int c=0;
    int h[10]={0,};
    int min=1000;

    for(c=0;c<10;c++){
        scanf("%d",&h[c]);
        if(min>h[c])
            min=h[c];
    }

    printf("%d ",min);

    return 0;
}
