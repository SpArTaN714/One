#include <stdio.h>
main()
{
    float R1, R2,R3, RT, A, Vr1,Vr2,Vr3, V;
    printf("\tCALCULAR LA RESISTENCIA TOTAL Y LA INTENSIDAD DE CADA RESITENCIA EN UN CIRCUITO PARALELO\n");
    printf("NTRODUZCA EL VALOR DE LA FUENTE EN VOLTS:\n");
    scanf("%f", &V);
    printf ("VALOR DE LA RESISTENCIA 1 EN OHMS\n");
    scanf ("%f", &R1);
    printf ("VALOR DE LA RESITENCIA 2 EN OHMS\n");
    scanf ("%f", &R2);
    printf ("VALOR DE LA RESITENCIA 3 EN OHMS\n");
    scanf ("%f", &R3);
    A=1/R1+1/R2+1/R3;
    RT=1/A;

    Vr1=V/R1;
    Vr2=V/R2;
    Vr3=V/R3;

    printf("LA RESISTENCIA TOTAL ES: %f\n",RT);
    printf("LA INTENSIDAD EN LA PRIMER RESISTENCIA ES:%f\n",Vr1);
    printf("LA INTENCIDAD EN LA SEGUNDA RESISTENCIA ES:%f\n",Vr2);
    printf("LA INTENCIDAD EN LA TERCER RESITENCIA ES:%f\n",Vr3);

    return 0;

}
