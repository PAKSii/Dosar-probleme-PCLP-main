// Rezolvarea problemei: Într-un brad sunt a globuri albe, de două ori mai multe globuri roșii, iar globuri verzi cu 3 mai puține ca numărul de globuri roșii. Câte globuri sunt în total ?//
#include <stdio.h>
void main()
{
  int glob_albe;
  scanf("%d",&glob_albe);
  printf("In total, sunt %d globuri.",glob_albe+2*glob_albe+(2*glob_albe)-3);
}
