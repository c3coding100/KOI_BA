#include <cstdio>
int main()
{
    int c[100]={0,};
    int i=0,j=0,k=0;
    int t=0;

    for (i = 0; i < 100; i++) {
        scanf("%d", &c[i]);
        if(c[i]==0)
            break;
        k++;
    }
    printf("%d \n",k);
    for (i = 0; i < k; i++) {
        if(c[i]%2 == 1)
            t=c[i]*2;
        else
            t=c[i]/2;
        printf("%d ",t);
    }
    return 0;
}
