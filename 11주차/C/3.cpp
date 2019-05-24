#include <cstdio>

typedef struct class1 {
    char name[20];
    int korean;
    int english;
} class1def;

int main()
{
    class1def a;
    class1def b;

    scanf("%s%d%d", &a.name, &a.korean, &a.english);
    scanf("%s%d%d", &b.name, &b.korean, &b.english);

    printf("%s %d %d  \n", a.name, a.korean, a.english);
    printf("%s %d %d  \n", b.name, b.korean, b.english);
    printf("avg %d %d ", ((a.korean+b.korean)/2), (a.english+b.english)/2);

    return 0;
}
