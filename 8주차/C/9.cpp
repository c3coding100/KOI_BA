#include <cstdio>
int sort(int j, int *c)
{
    int i=0,k=0,t=0;
    for (i = 0; i < j; i++)
        for (k = i; k < j; k++)
            if(c[i]<c[k]){
                t=c[i];
                c[i]=c[k];
                c[k]=t;
            }

    for (i = 0; i < j; i++)
        printf("%d ", c[i]);
	return 1;
}

int main()
{
    int c[100]={0,};
    int i=0,j=0;
    scanf("%d", &j);

    for(i=0;i<j;i++)
        scanf("%d", &c[i]);

    sort(j, &c[0]);
    return 0;
}
