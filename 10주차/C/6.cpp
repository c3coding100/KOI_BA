#include <cstring>
#include <cstdlib>

int main(void)
{
    char c[20] = { 0, };

    scanf("%s", c);

    printf("%d\n", atoi(c) * 2);
    printf("%.2f", atof(c));

    return 0;
}
