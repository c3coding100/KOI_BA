#include <stdio.h>
#define MAX 10000
const int NOT_REACHED = 0;
int n;
int dice[MAX][6];
int result;

void input()
{
    scanf("%d", &n);
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<6;j++)
    {
        scanf("%d", &dice[i][j]);
    }
}

int across(int face)
{
    int aface[6] = { 5, 3, 4, 1, 2, 0 };
    return aface[face];
}

int sidemax(int n, int bottom)
{
    int top = across(bottom);
    int max=0;
    for(int i=0;i<6;i++){
        if (i==top || i==bottom)
            continue;
        if (max < dice[n][i])
            max = dice[n][i];
    }
    return max;
}

int find(int n, int value)
{
    for(int i=0;i<6;i++){
        if (dice[n][i] == value)
            return i;
    }
    return -1;
}

void process()
{
    result = 0;
    for(int first = 0; first <6; first++){
        int prevTop = dice[0][across(first)];
        int sum = sidemax(0, first);

        for(int i=1;i<n;i++){
            int curBottom = find(i,prevTop);
            sum+=sidemax(i,curBottom);
            prevTop = dice[i][across(curBottom)];
        }

        if (sum>result)
            result = sum;
    }
}

void output()
{
    printf("%d\n", result);

}

int main()
{
    input();
    process();
    output();

    return 0;
}

