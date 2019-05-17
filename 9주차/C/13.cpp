#include <stdio.h>

int i=0;
int sum(int n)
{
    if(n==1)
	    return i;

    if(n&1){
        i++;
        return sum(n/3);
    }else{
        i++;
        return sum(n/2);
    }
}
int main(void)
{
    int n=0;
    scanf("%d",&n);
    printf("%d\n",sum(n));
    return 0;
}
