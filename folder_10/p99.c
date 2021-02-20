// incercare mallor : calcularea sumei introduse de user
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Introduceti numarul de elemente");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Eroare!! Memoria nu a fost alocata.");
        exit(0);
    }
    printf("Introduceti adresele");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
