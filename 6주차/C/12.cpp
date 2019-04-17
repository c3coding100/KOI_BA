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
        if(c[i]%5==0){
            k++;
            t=t+c[i];
        }
    }
    printf("Multiples of 5 : %d\n",k);
    printf("sum : %d\n",t);
    printf("avg : %.1f\n",(float)t/k);
    return 0;
}
