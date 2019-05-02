#include <cstdio>
void calc(float *c,int j)
{
    float t;
    int i,k;
    int a,b,d;
    for (i = 0; i < j; i++)
        for (k = i; k < j; k++)
            if(c[i]<c[k]){
                t=c[i];
                c[i]=c[k];
                c[k]=t;
            }
    if(c[0]<0)
        a=(int)c[0];
    else
        a=(int)c[0]+1;
    if(c[2]<0)
        b=(int)(c[2]-1);
    else
        b=(int)c[2];
    if(c[1]<0)
        d=(int)(c[1]-0.5);
    else
        d=(int)(c[1]+0.5);
    printf("%d %d %d", a, b, d);
}

int main()
{
    float c[3]={0,};

    scanf("%f", &c[0]);
    scanf("%f", &c[1]);
    scanf("%f", &c[2]);

    calc(c,3);
    return 0;
}
