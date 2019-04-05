#include <stdio.h>
#define MAXN 60
int n, sw;
int a[MAXN];
char c[MAXN / 6];
int data[8][6] = {  {0, 0, 0, 0, 0, 0},
                    {0, 0, 1, 1, 1, 1},
                    {0, 1, 0, 0, 1, 1},
                    {0, 1, 1, 1, 0, 0},
                    {1, 0, 0, 1, 1, 0},
                    {1, 0, 1, 0, 0, 1},
                    {1, 1, 0, 1, 0, 1},
                    {1, 1, 1, 0, 1, 0}, };
void input()
{
    scanf("%d", &n);
    for (int i=0;i<n*6;i++)
        scanf("%1d", &a[i]);
}
void process()
{
    int comp;
    for (int i=0;i<n;i++) {
        for (int j=0;j<8;j++) {
            comp = 0;
            for (int k=0;k<6;k++) {
                if (a[i * 6 + k] != data[j][k]) comp++;
            }
            if (comp <= 1){
                c[i] = j + 65;
                sw = -1;
            }
        }

        if (sw == -1)
            sw = 0;
        else {
            sw = i + 1;
            break;
        }
    }
}

void output()
{
    if (sw == 0){
        for (int i=0;i<n;i++)
            printf("%c", c[i]);
        printf("\n");
    }
    else
        printf("%d\n", sw);
}

int main()
{
    input();
    process();
    output();

    return 0;
}
