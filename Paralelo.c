#include <stdio.h>
main()
{
    float R1, R2, R3, RF, V;
    int E;
    printf("CALCULAR EL VALOR DE LAS RESISTENCIAS\n");
    printf ("¿QUE LED OCUPARA?:\n");
		printf ("VERDE(1)\n");
		printf ("BLANCO(2)\n");
		printf ("ROJO(3)\n");
		scanf ("%d", &E);
    printf("¿QUE VOLTAJE OCUPARA?:");
    scanf("%f", &V);
    switch(E)
    {
        case 1:
			R1 = V - 3;
     RF = R1/0.02;
			break;
		case 2:
			R2 = V - 2.8;
     RF= R2 / 0.02;
			break;
		case 3:
			R3 = V - 2;
     RF= R3/ 0.02;
			break;
     default:
			printf ("ESA NO ES UNA OPCION CORRECTA\n");
    }
		printf ("LA RESISTENCIA TENDRA UN VALOR DE:%f", RF);

    return 0;
}
