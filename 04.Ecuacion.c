#include<stdio.h>
#include <conio.h>
#include<math.h>

 int main()
{
    float a, b, c, res1, res2, res3, res4, res5;
printf ("Uso de la formula general para resolver una ecuacion cuadratica\n");
printf("Ingrese el termino de la seccion cuadratica:\n");
    printf("Ingrese el termino de la seccion lineal:\n");
    printf("Ingrese el termino de la seccion independiente:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a!=0)
    {
        res3=pow(b,2);
        res4=(4*a*c);
        res5=(res3-res4);
        if (res5<0)
        {
            printf("No existen raizes negativas\n");
        }
        if (res5>=0)
        {
            res1=((-b+(sqrt(res5)))/(2*a));
            res2=((-b-(sqrt(res5)))/(2*a));
            if(res1==res2)
            {
                printf("El resultado es igual para x1 y x2, y es: %.4f", res1);
            }
            if (res1!=res2)
            {
                printf("El resultado de x1: %.4f\n",res1);
                printf("El resultado de x2: %.4f\n",res2);
            }
        }
    }
    if (a==0)
    {
        printf("No es posible realizar esta operacion\n");
    }
return 0;
}
