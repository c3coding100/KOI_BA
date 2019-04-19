#include <cstdio>
int main()
{
    char c[100][100]={0,};
    int i=0,j=0;
    char ch=0;

    for (i = 0 ; i <3; i++) {
        for(j = 0 ; j < 5 ; j++){
            scanf(" %c",&ch);
            c[i][j]=ch;
        }
    }

    for (i = 0 ; i <3; i++) {
        for(j = 0 ; j < 5 ; j++){
            printf("%c ",c[i][j]+32);
        }
        printf("\n");
    }
    return 0;
}
