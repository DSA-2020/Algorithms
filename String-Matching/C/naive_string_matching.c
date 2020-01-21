#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void patternmatch(char * txt,char * ptn)
{
    int i,j;
    int n = strlen(txt);
    int m = strlen(ptn);
    for(i = 0;i < n - m + 1;i++)
    {
        for(j = 0;j < m;j++)
        {
            if(txt[i+j] != ptn[j])
            {
                break;
            }
        }
        if(j == m)
        {
            printf("The given pattern is found at index %d.\n",i);
        }
    }
}



int main()
{
    char *txt = (char *)malloc(sizeof(char) * 1000000);
    scanf("%s",txt);
    char *ptn = (char *)malloc(sizeof(char) * 1000000);
    scanf("%s",ptn);
    patternmatch(txt,ptn);
    return 0;
}
