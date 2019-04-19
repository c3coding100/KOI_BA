#include <cstdio>
int main()
{
    int c[10]={0,};
    int t=0;
    int i=0,j=0,k=0;

    for (i = 0; i < 100; i++) {
        scanf("%d ", &t);
        if(t==0)
            break;
        c[t/10]++;
    }

    for(i=0 ; i<10 ; i++){
        if(c[i]!=0){
            printf("%d : %d\n",i,c[i]);
        }
    }
    return 0;
}
