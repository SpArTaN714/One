#include<stdio.h>
int main()
{
    int cont=0;
    int d, f, g;
  printf(" Escriba  cualquier valor de 0 a 5:\t");
  scanf("%d", &g);

  while(cont<=g)
  {
    d=cont;
    f=(g*g)-2*d;
    printf("%d \n", f);
    cont=cont+1;
  }
  return 0;
}
