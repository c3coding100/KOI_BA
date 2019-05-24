#include <cstdio>
struct score {
    char name[20];
    int kor;
    int mat;
    int eng;
    int total;
};

int main(void)
{
    int n;
    scanf("%d", &n);
    struct score man[10];
    struct score change;

    for (int i = 0; i < n; i++) {
        scanf("%s%d%d%d", man[i].name, &man[i].kor, &man[i].mat, &man[i].eng);
        man[i].total = man[i].kor + man[i].mat + man[i].eng;

    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (man[i].total < man[j].total) {
                change = man[i];
                man[i] = man[j];
                man[j] = change;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", man[i].name, man[i].kor,
				     man[i].mat, man[i].eng, man[i].total);
    }

    return 0;
}
