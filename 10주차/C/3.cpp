#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];
    //scanf("%s", str); �̰��� �ȵȴ�.
    gets(str);

    int cnt=0;
    int len = strlen(str);
    for(int i=0; i<len; i++)
        if(str[i]==' ') cnt++;

    printf("%d\n", cnt+1);

    return 0;
}
