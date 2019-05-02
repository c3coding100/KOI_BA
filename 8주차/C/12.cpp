#include <cstdio>
#include <math.h>
void calc(int i)
{
    float res;
    res = sqrt(i / 3.14);
    printf("%.2f ", res);
}

int main()
{
    int i=0;
    scanf("%d", &i);

    calc(i);
    return 0;
}
