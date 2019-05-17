#include <stdio.h>

int sum(int h)
{
    if(h==0) return 1;

    int g=1;
    g=h%10;
    if(g==0)
    	g=1;
    h=h/10;
    return (g*sum(h));
}
int main(void)
{
    int i=0,j=0,k=0,h=0;

    scanf("%d %d %d",&i, &j, &k);

    h=i*j*k;
    printf("%d\n",sum(h));

    return 0;
}
