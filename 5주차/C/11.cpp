#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=0,e=0,f=0;
    scanf("%d",&i);

    for(j=0;j<((i*2)-1);j++){
        if(j<i){
            for(k=0;k<j;k++)
                printf(" ");
            for(k=((i-j)*2)-1;k>0;k--)
                printf("*");
        }else{
            for(k=j;k<((i*2)-2);k++)
                printf(" ");
            for(h=0;h<((j-i)+1)*2+1;h++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
