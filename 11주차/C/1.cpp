#include <cstdio>

struct person {
    char name[20];
    char school[20];
    int grade;

};

int main()
{
    struct person c;
    scanf("%s", &c.name);
    scanf("%s", &c.school);
    scanf("%d", &c.grade);

    printf("Name : %s\n", c.name);
    printf("School : %s\n", c.school);
    printf("Grade : %d\n", c.grade);

    return 0;
}
