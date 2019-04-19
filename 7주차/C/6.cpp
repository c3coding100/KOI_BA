#include <cstdio>
int main()
{
    int c[5][4]={0,};
    int i=0,j=0,k=0,h=0;

    for (i = 0; i < 5; i++)
        for(j = 0 ; j < 4 ; j++)
            scanf("%d",&c[i][j]);

    for (i = 0; i < 5; i++) {
        k=0;
        for(j = 0 ; j<4 ; j++)
            k=k+c[i][j];
        if((k/4)>=80){
            printf("pass\n");
            h++;
        }else{
            printf("fail\n");
        }
    }
    printf("Successful : %d",h);
    return 0;
}
