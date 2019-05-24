#include <cstdio>
typedef struct {
    int x;
    int y;
    int x2;
    int y2;
}data;

int main()
{
    data a, b, c;

    scanf("%d%d%d%d", &a.x, &a.y, &a.x2, &a.y2);
    scanf("%d%d%d%d", &b.x, &b.y, &b.x2, &b.y2);

    c.x = a.x < b.x ? a.x : b.x;
    c.y = a.y < b.y ? a.y : b.y;
    c.x2 = a.x2 > b.x2 ? a.x2 : b.x2;
    c.y2 = a.y2 > b.y2 ? a.y2 : b.y2;

    printf("%d %d %d %d", c.x, c.y, c.x2, c.y2);

    return 0;
}
