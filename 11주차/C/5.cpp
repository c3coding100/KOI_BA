#include <cstdio>
#include <cstring>
typedef struct data
{
    char name[20];
    char number[20];
    char locate[20];
}telbook;
int main()
{
    int i;
    telbook a[3];
    for (i = 0; i < 3; i++) {
        scanf("%s%s%s", a[i].name, a[i].number, a[i].locate);
    }

    int min = 0;
    for (i = 1; i < 3; i++) {
        if (strcmp(a[min].name, a[i].name) > 0) min = i;
    }

    printf("name : %s\n", a[min].name);
    printf("tel : %s\n",  a[min].number);
    printf("addr : %s\n", a[min].locate);
    return 0;
}
