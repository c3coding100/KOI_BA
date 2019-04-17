#include <cstdio>
int main()
{
    int h[10]={0,};
    int c=0,c1=0;
    int odd_t=0, evn_t=0;

    for(c=0;c<10;c++){
        scanf("%d",&h[c]);
        if((c % 2) == 0 ){
            c1++;
            odd_t += h[c];
        }else
            evn_t += h[c];
    }

    printf("sum : %d\n",evn_t);
    printf("avg : %.1f\n",(float)odd_t/c1);

    return 0;
}
