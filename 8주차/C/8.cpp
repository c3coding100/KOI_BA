#include <cstdio>
void gugudan(int a,int b)
{
    int i=0,j=0;
    if(a > b){
        i=a;
        a=b;
        b=i;
    }
    for(j=a;j <= b;j++){
        printf("== %ddan ==\n",j);
        for(i=1;i<=9;i++){
            printf("%d * %d = %2d\n",j,i,j*i);
        }
        printf("\n");
    }
}
int main()
{
    int i=0,j=0;
    scanf("%d%d",&i,&j);

    gugudan(i,j);
    return 0;
}
