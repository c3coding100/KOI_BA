#include <cstdio>

struct talmo {
    int a;
    int b;
};

int main() {
    struct talmo p[100];
    int n, tempA, tempB;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].a, &p[i].b);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].a > p[j + 1].a) {
                tempA = p[j].a;
                tempB = p[j].b;
                p[j].a = p[j + 1].a;
                p[j].b = p[j + 1].b;
                p[j + 1].a = tempA;
                p[j + 1].b = tempB;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", p[i].a, p[i].b);
    }
    return 0;
}
