/*
Orice culoare poate fi reprezentată drept o combinație de intensități de roșu (RED), verde (GREEN) și albastru (BLUE). Calculatorul tău folosește, cel mai probabil, culori reprezentate pe 24 de biți, câte 8 rezervați fiecăreia dintre cele trei culori anterior menționate.
Definim opusul unei culori (r, g, b) ca fiind (255 – r, 255 – g, 255 – b).
Dându-se o culoare, scrieți opusul acesteia.
*/

#include <stdio.h>
int main()
{
    int r,g,b;
    scanf("%d%d%d",&r,&g,&b);
    printf("%d %d %d",255-r,255-g,255-b);
       return 0;
}
