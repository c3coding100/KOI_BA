#include<stdio.h>
int n, cnt;

int main(void)
{
    scanf("%d", &n);
    for(int a=1; a<n; a++)
    {
        for(int b=a; b<n; b++)
        {
            int c = n-(a+b);
            if(c < b) break;
            if(c < a+b)
                cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}
