// Rezolvarea problemei : Scrieți un program care citește un număr natural nenul n și care afișează numele lunii calendaristice corespunzătoare numărului n.
#include <stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  switch (n) {
    case 1 : printf("Ianuarie"); break;
    case 2 : printf("Februarie"); break;
    case 3 : printf("Martie"); break;
    case 4 : printf("Aprilie"); break;
    case 5 : printf("Mai"); break;
    case 6 : printf("Iunie"); break;
    case 7 : printf("Iulie"); break;
    case 8 : printf("August"); break;
    case 9 : printf("Septembrie"); break;
    case 10 : printf("Octombrie"); break;
    case 11 : printf("Noiembrie"); break;
    case 12 : printf("Decembrie"); break;
    default : printf("Valoare introdusa gresit [1,12]"); break;
  }
}
