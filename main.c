#include <stdio.h>
#include <stdlib.h>

void hanoi(int n,char a,char c, char b)
{
    if (n>0)
      {
        hanoi(n-1,a,b,c);
        printf("deplacer %c vers %c \n",a,c);
        printf("******** \n");
       hanoi(n-1,b,c,a);
       }
}
int main()
{
    int n=3;
    char a='a',b='b',c='c';
    hanoi(n,a,c,b);
    getchar();

    return 0;
}
