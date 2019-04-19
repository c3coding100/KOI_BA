#include <cstdio>
int main()
{
    int c[11][11]={0,};
    int i=0,j=0,k=0,h=0;

    scanf("%d",&i);

    c[i][1]=1;
    for (j = i-1 ; j > 0; j--)
        for(k = 1 ; k <= (i+1)-j ; k++)
            c[j][k]=c[j+1][k-1]+c[j+1][k];

	for (j = 1 ; j <= i ; j++) {
		for(k = 1 ; k <= (i+1)-j ; k++)
			printf("%d ", c[j][k]);
		printf("\n");
	}
    return 0;
}
