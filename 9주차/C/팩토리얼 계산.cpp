#include<stdio.h>

int factorial(int num) {
    int result=1;

    for (int i = 1; i <=num; i++) {
        result = i*result;
    }

    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", factorial(n));

    return 0;
}

