#include <cstdio>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    float h[7]={0,85.6,79.5,83.1,80.0,78.2,75.0};
    float i=0;

    scanf("%d%d",&a, &b);
    i=h[a]+ h[b];
    printf("%.1f ",i);

    return 0;
}
