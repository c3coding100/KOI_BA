#include <cstdio>
#define abs(x) ((x) <0 ? -(x) : (x))
int calc(int *x, int *y, double *dx, double *dy) {
    *x = abs(*x) > abs(*y) ? *x : *y;
    *dx = abs(*dx) < abs(*dy) ? *dx : *dy;
}

int main() {
    int x=0, y=0;
    double dx=0, dy=0;

    scanf("%d%d", &x, &y);
    scanf("%lf%lf", &dx, &dy);

    calc(&x, &y, &dx, &dy);

    printf("%d\n%.2lf\n", x, dx );
    return 0;
}
