#include <cstdio>
int cal(int a,char c, int b)
{
    int res=1, i=0;

    if(c=='+') 	i=a+b;
    else if(c=='-') i=a-b;
    else if(c=='*') i=a*b;
    else if(c=='/') i=a/b;

    printf("%d %c %d = %d", a,c,b,i);
    return res;
}

int main()
{
    int c[3]={0,};
    int i=0,j=0,k=0,h=0,t=1;
    char ch=0;

    scanf("%d",&i);
    scanf(" %c",&ch);
    scanf("%d",&j);

    cal(i,ch,j);

    return 0;
}
