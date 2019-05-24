#include <cstdio>

struct student {
    int height;
    float weigth;
}mom, dad, me;

int main(void)
{
    scanf("%d%f", &dad.height, &dad.weigth);
    scanf("%d %f", &mom.height, &mom.weigth);

    me.height = (dad.height + mom.height)/2 + 5;
    me.weigth = (dad.weigth + mom.weigth)/2 - 4.5;

    printf("height : %dcm\n", me.height);
    printf("weight : %.1fkg", me.weigth);
}
