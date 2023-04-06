#include<stdio.h>
int main ()
{
    int pLIFT,pME,ans;
    scanf("%d %d", &pME, &pLIFT);
    if (pME>pLIFT){
        ans = (((pME-pLIFT)+pME)*4)+9+10;
    }
    else {
        ans = (pLIFT*4)+9+10;
    }
    printf ("%d\n",ans);
    return 0;
}

