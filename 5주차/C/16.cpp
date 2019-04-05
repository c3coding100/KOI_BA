#include <cstdio>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    char h=0;
    scanf("%d",&a);

    for(b=1;b<=((a*2)-1);b++){
        if(b<=a){
            for(c=1;c<=b;c++)
                printf("# ");
        }else{
            for(c=a;c<b;c++)
                printf("  ");
            for(c=((a*2)-1);c>=b;c--)
                printf("# ");
        }
        printf("\n");
    }
    return 0;
}
