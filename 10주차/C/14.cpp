#include <cstdio>
#include <cstring>

int main()
{
    char str[101];
    scanf("%s", str);
    int n = strlen(str);

    int ans=1;
    for(int i=0; i<=n/2-1;i++)
        if(str[i]!=str[n-1-i])
            ans = 0;

    printf("%d\n", ans);
    return 0;
}
