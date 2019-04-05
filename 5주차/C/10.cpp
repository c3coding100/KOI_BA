#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=0,e=0,f=0;
    scanf("%d",&i);

    for(j=0;j<((i*2)-1);j++){
        if(j<i){
            for(k=0;k<=j;k++)
                printf("*");
        }else{
            for(h=j;h<((i*2)-1);h++)
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
