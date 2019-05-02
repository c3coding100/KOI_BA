#include <cstdio>

#define one 1
#define two 2
#define three 3

int main(void)
{
    int i,j;

    for(i=one ; i<= three ;i++ )
        for(j=one ; j<= three ; j++)
            printf("%d + %d = %d\n",i,j,i+j);

    return 0;
}
