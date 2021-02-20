//Se dau n numere naturale. Determinați cea mai mică bază de numerație b în care ar putea fi considerate aceste numere.
#include <stdio.h>
int main()
{
    int n, x, b = 0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&x);
        while (x) {
            if (x%10>b) b = x%10;
            x/=10;
        }
    }
    printf("%d",b+1);
    return 0;
}
