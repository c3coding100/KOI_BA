#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=0;

    for(j=0;j<20;j++){
        scanf("%d",&i);
        if(i==0)
            break;
        h=h+i;
        k++;
    }
    printf("%d %d",h,h/k);
    return 0;
}
