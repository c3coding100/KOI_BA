#include<stdio.h>
#define Swap(aa,bb) {cc=aa;aa=bb;bb=cc;}
int a[5], b[5], ret, cc;

void Read(int l1)
{
    char s[2];
    scanf("%s", s);
    if (s[0] == 'R') a[l1] = 1;
    else if (s[0] == 'B') a[l1] = 2;
    else if (s[0] == 'Y') a[l1] = 3;
    else if (s[0] == 'G') a[l1] = 4;
    scanf("%d", &b[l1]);
}
void SortA(void)
{
    int l1, l2;
    for (l1 = 0; l1 < 5; l1++)
        for (l2 = l1 + 1; l2 < 5; l2++)
            if (a[l1] > a[l2] || (a[l1] == a[l2] && b[l1] > b[l2]))
            {
                Swap(a[l1], a[l2]);
                Swap(b[l1], b[l2]);
            }
}
void SortB(void)
{
    int l1, l2;
    for (l1 = 0; l1 < 5; l1++)
        for (l2 = l1 + 1; l2 < 5; l2++)
            if (b[l1] > b[l2] || (b[l1] == b[l2] && a[l1] > a[l2]))
            {
                Swap(a[l1], a[l2]);
                Swap(b[l1], b[l2]);
            }
}

void Try(int score)
{
    if (score > ret) ret = score;
}
int Flush(void)
{
    SortA();
    if (a[0] == a[1] && a[0] == a[2] && a[0] == a[3] && a[0] == a[4])
	return b[4];
    return 0;
}

int Straight(void)
{
    SortB();
    if (b[0] + 1 == b[1] && b[0] + 2 == b[2] && b[0] + 3 == b[3]
	&& b[0] + 4 == b[4]) return b[4];
    return 0;
}
int Four(void)
{
    SortB();
    if (b[1] == b[2] && b[1] == b[3] && b[1] == b[4]) return b[1];
    if (b[0] == b[1] && b[0] == b[2] && b[0] == b[3]) return b[0];
    return 0;
}
int Three(void)
{
    SortB();
    if (b[2] == b[3] && b[2] == b[4]) return b[2];
    if (b[1] == b[2] && b[1] == b[3]) return b[1];
    if (b[0] == b[1] && b[0] == b[2]) return b[0];
    return 0;
}
int Two(void)
{
    SortB();
    if (b[3] == b[4]) return b[3];
    if (b[2] == b[3]) return b[2];
    if (b[1] == b[2]) return b[1];
    if (b[0] == b[1]) return b[0];
    return 0;
}
int Two2(void)
{
    SortB();
    if (b[0] == b[1]) return b[0];
    if (b[1] == b[2]) return b[1];
    if (b[2] == b[3]) return b[2];
    if (b[3] == b[4]) return b[3];
    return 0;
}
int main(void)
{
    int l1, l0;

    for (l1 = 0; l1 < 5; l1++)
        Read(l1);
    if (Flush() && Straight()) Try(900 + Flush());
    if (Four()) Try(800 + Four());
    if (Three() && Two() && Three()!=Two()) Try(700 + 10*Three() + Two());
    if (Three() && Two2() && Three()!=Two2()) Try(700 + 10*Three() + Two2());
    if (Flush()) Try(600 + Flush());
    if (Straight()) Try(500 + Straight());
    if (Three()) Try(400 + Three());
    if (Two() && Two2() && Two() != Two2()) Try(300 + 10 * Two() + Two2());
    if (Two()) Try(200 + Two());
    for (l1 = 0; l1 < 5; l1++) Try(100 + b[l1]);

    printf("%d\n", ret);
}
