#include <stdio.h>
 
long factor(int n)
{
  int i;
  long fact = 1;
 
  for (i = 1; i <= n; i++)
    fact = fact * i;
 
  return fact;
}
 
int main()
{
  int nbr;
 
  printf("Veillez entrez un nombre pour calculer sa factorielle:");
  scanf("%d", &nbr);

  if(nbr==0){
    printf("le resultat est 1");
  }
  else if(nbr<0){
    printf("impossible  veuillez entrer un nombre positif");
  }
 else{
 printf("%d! = %ld\n", nbr, factor(nbr));
 }
 
 
  return 0;
}