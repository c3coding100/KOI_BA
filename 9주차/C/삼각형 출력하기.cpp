#include<stdio.h>

int totalLine;
void star(int n) {
    if(n==0) {
        return;
    }
    else {
        printf("*");
        return star(n-1);
    }
}

void output(int line)
{
    if( line>totalLine)
        return;
    else {
        star(line);
        printf("\n");
        return output(line+1);
    }
}

int main() {
    scanf("%d", &totalLine);
    output(1);

    return 0;
}

