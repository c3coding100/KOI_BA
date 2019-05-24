#include <cstdio>
#include <cstring>          // memset
#include <algorithm>        // abs
using namespace std;

const int MAX = 30;
int weightNum, marbleNum;   //�� ����, ���� ����
int w[MAX];                 //�� ����
int m[7];                   //���� ����
int d[MAX + 1][MAX * 500 + 1]; //[�� ����] [�� ������ ���� �� �ִ� ����]

void calc(int curWeightNum, int curWeight) // (���� �� ����, ���� ����� �� ����)
{
    if (curWeightNum > weightNum)
        return;

    if ( d[curWeightNum][curWeight] != -1 )
        return;

    d[curWeightNum][curWeight] = 1; //���� ������� ���� ���

    //�� ���� ����, �߸� ������ ���� �ʿ� �ø�
    calc(curWeightNum + 1, curWeight + w[curWeightNum]);
    //�� ���� ����, �߸� �� �ø�
    calc(curWeightNum + 1, curWeight);
    //�� ���� ����, �߸� ������ �ִ� �ʿ� �ø�
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
        if (m[i] > MAX * 500) //500g �� 30���� �߰��� �ͺ��� ���ſ� �����̶��
            printf("%c ", 'N');
        else if (d[weightNum][m[i]] == 1)
            printf("%c ", 'Y');
        else
            printf("%c ", 'N');
    }

    return 0;
}
