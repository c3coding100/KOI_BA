#include <stdio.h>

int sum(int n)
{
    if(n==2)
	    return 2;
    if(n==1)
	    return 1;

    return (sum(n-1) * sum(n-2))%100;
}
int main(void)
{
    int n;

    scanf("%d",&n);
    printf("%d\n",sum(n));

    return 0;
}
