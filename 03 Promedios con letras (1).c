#include <stdio.h>

int main()
{
    char calif1,calif2,calif3;
    int A,B,C;
    int promedio;

    printf("\n    Ingresa tu 1ra calificacion en letra\n");
    scanf("%c",&calif1);
    printf("    Ingresa tu 2da calificacion en letra\n");
    fflush(stdin);
    scanf("%c",&calif2);
    printf("    Ingresa tu 3ra calificacion en letra\n");
    fflush(stdin);
    scanf("%c",&calif3);

// Calificacion 1

    if (calif1== 'A' || calif1=='a')
    {
        A=10;
    }
    else if (calif1== 'B' || calif1== 'b')
    {
        A=9;
    }
    else if (calif1== 'C' || calif1== 'c')
    {
        A=8;
    }
    else if (calif1== 'D' || calif1== 'd')
    {
        A=7;
    }
    else if (calif1== 'E' || calif1== 'e')
    {
        A=6;
    }
    else
    {
        A=5;
    }

// Calificacion 2

    if (calif2== 'A' || calif2== 'a')
    {
        B= 10;
    }
    else if (calif2== 'B' || calif2== 'b')
    {
        B= 9;
    }
    else if (calif2== 'C' || calif2== 'c')
    {
        B= 8;
    }
    else if (calif2== 'D' || calif2== 'd')
    {
        B= 7;
    }
    else if (calif2== 'E' || calif2== 'e')
    {
        B= 6;
    }
    else
    {
        B=5;
    }

// Calificacion 3

    if (calif3== 'A' || calif3== 'a')
    {
        C= 10;
    }
    else if (calif3== 'B' || calif3== 'b')
    {
        C= 9;
    }
    else if (calif3== 'C' || calif3== 'c')
    {
        C= 8;
    }
    else if (calif3== 'D' || calif3== 'd')
    {
        C= 7;
    }
    else if (calif3== 'E' || calif3== 'e')
    {
        C= 6;
    }
    else
    {
        C= 5;
    }

    promedio= (A+B+C)/3;

    printf("    Tu calificacion final es:%d\n\a",promedio);

    if (promedio==10)
    {
        printf("\n            Felicidades has aprobado con autonomo!!! ;)\n\a");
    }
    else if (promedio==9)
    {
        printf("\n            Felicidades has aprobado con destacado!!! :)\n\a");
    }
    else if (promedio==8)
    {
        printf("\n          Has aprobado con satisfactorio, intenta esforzarte mas... :|\n\a");
    }
    else if (promedio<8)
    {
        printf("\n          ¡ Has reprobado! :'(\n\a");
    }
    return 0;

    }
