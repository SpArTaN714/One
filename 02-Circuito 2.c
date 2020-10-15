
#include<stdio.h>
main()
{
    int cont=0;
    int d;
printf(" Escribe cualquier valor de 0 a 5:\t");
scanf("%d",&d);

while(cont<=d+d+1)
   {
    printf(" %d \n",(3*d)+(cont*2));
    cont=cont+1;
   }
return 0;
}
