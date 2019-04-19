#include <cstdio>
int main()
{
    int c[103]={0,};
    int i=0,j=0,k=0;

    scanf("%d", &j);

    c[0]=100;
    c[1]=j;
    for (i = 2; i < 100; i++)
        c[i]=c[i-2]-c[i-1];

    for (i = 0; i < 100; i++) {
        printf("%d ", c[i]);
        if(c[i]<0)
            break;
    }
    return 0;
}
