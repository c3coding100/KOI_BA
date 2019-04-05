#include <cstdio>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    scanf("%d",&a);

    for(b=1;b<=a;b++){
        for(c=a;c>b;c--)
            printf("  ");
        for(c=1;c<=b;c++)
            printf("%d ",c);
        printf("\n");
    }
    return 0;
}
