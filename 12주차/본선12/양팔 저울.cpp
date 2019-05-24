#include <cstdio>
#include <cstring>          // memset
#include <algorithm>        // abs
using namespace std;

const int MAX = 30;
int weightNum, marbleNum;   //추 개수, 구슬 개수
int w[MAX];                 //추 무게
int m[7];                   //구슬 무게
int d[MAX + 1][MAX * 500 + 1]; //[추 개수] [추 개수로 만들 수 있는 무게]

void calc(int curWeightNum, int curWeight) // (현재 추 개수, 현재 만들어 낸 무게)
{
    if (curWeightNum > weightNum)
        return;

    if ( d[curWeightNum][curWeight] != -1 )
        return;

    d[curWeightNum][curWeight] = 1; //현재 만들어진 무게 기록

    //추 개수 증가, 추를 구슬이 없는 쪽에 올림
    calc(curWeightNum + 1, curWeight + w[curWeightNum]);
    //추 개수 증가, 추를 안 올림
    calc(curWeightNum + 1, curWeight);
    //추 개수 증가, 추를 구슬이 있는 쪽에 올림
    calc(curWeightNum + 1, abs(curWeight - w[curWeightNum]));
}



int main(void)
{
    scanf("%d", &weightNum);
    for (int i = 0; i < weightNum; i++)
        scanf("%d", &w[i]);

    scanf("%d", &marbleNum);
    for (int i = 0; i < marbleNum; i++)
        scanf("%d", &m[i]);

    memset(d, -1, sizeof(d));
    calc(0, 0);

    for (int i = 0; i < marbleNum; i++)
    {
        if (m[i] > MAX * 500) //500g 추 30개를 추가한 것보다 무거운 구슬이라면
            printf("%c ", 'N');
        else if (d[weightNum][m[i]] == 1)
            printf("%c ", 'Y');
        else
            printf("%c ", 'N');
    }

    return 0;
}
