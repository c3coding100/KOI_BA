#include <stdio.h>

int board[19][19];
int result;
int sx, sy;
int ex, ey;

int getBoard(int x, int y)
{
    if (x<0) return 0;
    if (y<0) return 0;
    if (x>=19) return 0;
    if (y>=19) return 0;

    return board[y][x];
}

void input()
{
    int i,j;
    for(i=0;i<19;i++)
    for(j=0;j<19;j++)
        scanf("%d", &board[i][j]);
    result = 0;
}

void process()
{
    const int d[4][2] = {
        { 1, 0},
        { 0, 1},
        { 1, 1},
        { 1,-1}
    };
    int x,y,dir;
    int currentColor;

    for(dir=0;dir<4;dir++)
    for(y=0;y<19;y++)
    for(x=0;x<19;x++)
        if ((currentColor = getBoard(x,y)) &&
            getBoard(x, y) != getBoard(x-d[dir][0], y-d[dir][1]))
        {
            int count = 0;
            int xh=x, yh=y;
            while(getBoard(xh,yh)==currentColor){
                xh+=d[dir][0];
                yh+=d[dir][1];
                count++;
            }
            if (count==5){
                result = currentColor;
                sx = x;
                sy = y;
                ex = xh;
                ey = yh;
            }
        }
}

void output()
{
    printf("%d\n", result);
    if (result){
        printf("%d %d\n", sy+1, sx+1);
    }
}

int main()
{
    input();
    process();
    output();

    return 0;
}


