#include <cstdio>
#include <cstring>

int main(void)
{
    char str[101] = { 0, };
    int i=0, j=0;

    scanf("%s", str);

    i = strlen(str) - 1;
    for (j=0; j<=i; j++)
    {
        char c = str[i];
        for(int k=i;k>0; k--)
        {
            str[k] = str[k-1];
        }
        str[0]=c;
        printf("%s\n", str);
    }

    return 0;
}
