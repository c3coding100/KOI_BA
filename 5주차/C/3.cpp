#include <cstdio>
int main()
{
    int i=0,j=0,k=0,h=3;
    scanf("%d",&i);

    for(j=1;j<=(i*2);j++){
        if(j<=i){
            for(k=j;k<=i;k++)
                printf("*");
	    }else{
  	        for(k=j;k>i;k--)
    	      printf("*");
        }
        printf("\n");
    }
    return 0;
}
