#include <cstdio>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    char h=0;
    scanf("%d",&a);

    f=1;
    for(b=1;b<=a;b++){
        for(c=0;c<a;c++){
            printf("%d ",f);
            f=(f+2)%10;
        }
        printf("\n");
    }
    return 0;
}
