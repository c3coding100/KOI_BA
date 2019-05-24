#include <cstdio>

struct person {
    char name[20];
    char tel[20];
    char addr[20];
};

int main()
{
    struct person p;
    scanf("%s%s%s", p.name, p.tel, p.addr);
    printf("name : %s\ntel : %s\naddr : %s\n", p.name, p.tel, p.addr);
}
