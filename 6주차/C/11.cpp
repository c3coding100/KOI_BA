#include <cstdio>
int main()
{
    int c[100]={0,};
    int i=0,j=0,k=0;
    char t=0;
    int min=32767;
    int max=-32768;

    for (i = 0; i < 100; i++) {
        scanf("%d", &c[i]);
        if(c[i]==999)
            break;
        if(c[i]<min)
            min=c[i];
        if(c[i]>max)
            max=c[i];
    }
    printf("max : %d\n",max);
    printf("min : %d\n",min);
    return 0;
}
