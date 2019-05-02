#include <cstdio>

void seq(int dat)
{
    int i=0,j=0,k=1;

    for(i=0 ; i <dat; i++){
        for(j=0 ; j<dat ; j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
}

int main()
{
    int i=0,j=0,k=0,h=0,t=1;

    scanf("%d",&k);
    seq(k);

    return 0;
}
