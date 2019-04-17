#include <cstdio>
int main()
{
    char c[6]={'J','U','N','G','O','L'};
    int i=0,j=0,k=0;
    char t=0;
    scanf("%c", &t);

    for (i = 0; i < 7; i++) {
        if(i>=6)
            printf("none");
        else if(t==c[i]){
            printf("%d ", i);
            break;
        }
    }
    return 0;
}
