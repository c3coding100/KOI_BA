#include <cstdio>
#include <cstring>

struct telBook {
    char name[10];
    char number[15];
};

int main()
{
    telBook book[10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", book[i].name);
        scanf("%s", book[i].number);
    }

    char name[10];
    scanf("%s", name);
    for (int i = 0; i < n; i++) {
        if (!(strncmp(book[i].name, name, 10))) {
            printf("name : %s\ntel: %s\n", book[i].name, book[i].number);
        }
    }
    return 0;
}
