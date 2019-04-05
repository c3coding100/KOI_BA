#include <cstdio>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    char h='A';
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        for(c=a;c>=b;c--)
            printf("%C ",h++);
        for(c=1;c<b;c++)
            printf("%d ",f++);
        printf("\n");
    }
    return 0;
}
