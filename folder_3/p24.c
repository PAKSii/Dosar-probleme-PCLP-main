//Se dă un număr natural n. Să se determine cele mai mari două numere impare, mai mici decât n.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d %d",n/2*2-3,n/2*2-1);
    return 0;
}
