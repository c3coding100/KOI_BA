#include <cstdio>

typedef struct class1 {
    char name[20];
    int tall;

} class1def;

int main()
{
    class1def a[5];
    int min = 0, mintall = 0;

    scanf("%s%d", &a[0].name, &a[0].tall);
    mintall = a[0].tall;
    for (int i = 1; i < 5; i++) {
        scanf("%s %d", &a[i].name, &a[i].tall);
        if (mintall > a[i].tall) {
            min = i;
            mintall = a[i].tall;
        }
    }
    printf("%s %d  \n", a[min].name, a[min].tall);
    return 0;
}
