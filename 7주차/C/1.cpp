#include <cstdio>
int main()
{
    char c[26]={0,};
    char t=0;
    int i=0,j=0,k=0;

    for (i = 0; i < 100; i++) {
        scanf(" %c", &t);
        if(t<'A' || t > 'Z')
            break;
        c[t-'A']++;
    }

    for(i=0 ; i<26 ; i++){
        if(c[i]!=0){
            printf("%C : %d\n",('A'+i),c[i]);
        }
    }
    return 0;
}
