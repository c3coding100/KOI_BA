#include <cstdio>
int main()
{
    int c[100]={0,};
    int i=0,j=0,k=0;
    int t=0;
    scanf("%d", &j);

    for (i = 0; i < j; i++)
        scanf("%d", &c[i]);

    for (i = 0; i < j; i++)
    for (k = i; k < j; k++)
        if(c[i]<c[k]){
            t=c[i];
            c[i]=c[k];
            c[k]=t;
        }

    for (i = 0; i < j; i++)
        printf("%d\n", c[i]);
    return 0;
}
