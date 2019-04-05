#include <cstdio>
int main()
{
    int i,j=0,sum=0,c=0;
    scanf("%d",&i);

    while(i>sum){
        j++;
        if((j%2)==1){
            sum=sum+j;
            c++;
        }
    }
    printf("%d %d\n",c,sum);
    return 0;
}
