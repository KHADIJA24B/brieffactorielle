#include <stdio.h>
 
int main()
{
  int nbr, i, f = 1;
 
  printf("Veuillez entrez une valeur pour calculer sa factorielle:");
  scanf("%d", &nbr);
 
  if(nbr==0){
    printf("le resultat est 1");
  }
  else if(nbr<0){
    printf("impossible  veuillez entrer un nombre positif");
  }
 else{
  for (i = 1; i <= nbr; i++)
    f = f * i;

    
 
  printf("Factorielle de %d = %d\n", nbr, f);
 
}
}