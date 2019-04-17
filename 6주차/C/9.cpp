#include <cstdio>
int main()
{
    int num[10], i, j, temp, index;

    for (i = 0; i <= 9; i++)
        scanf("%d", &num[i]);

    for (i = 0; i <= 9; i++) {
        index = i;
        for (j = i + 1; j <= 9; j++) {
            if (num[index] < num[j])
            index = j;
        }
        temp=num[i];
        num[i]=num[index];
        num[index]=temp;
    }

    for (i = 0; i < 10; i++)
        printf("%d ", num[i]);
    return 0;
}
