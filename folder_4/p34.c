//Se citesc numere de la tastatură până la apariția lui zero. Să se determine câte perechi de elemente citite consecutiv se termină cu aceeași cifră.
#include <stdio.h>
int main()
{
    int cnt=0,x,y;
    scanf("%d",&x);
    do
    {
        scanf("%d",&y);
        if(x%10==y%10&&y!=0)
            cnt++;
            x=y;
    }while(y);
    printf("%d",cnt);

    return 0;
}
