#include <cstdio>
int check(int i, int j)
{
    int res=0;
    int c[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(c[i]<j || j<1)	res=0;
    else		res=1;

    return res;
}

int main()
{
    int i=0,j=0;

    scanf("%d", &i);
    scanf("%d", &j);

    if(check(i,j)==0)
        printf("BAD!");
    else
        printf("OK!");
    return 0;
}
