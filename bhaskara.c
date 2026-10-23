#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>

void bhaskara(float a , float b , float c)
{
    printf("_________________________________________________________________________________________\n");
    printf("|--------------------------------------| CÁLCULO |--------------------------------------|\n");
    Sleep(2000);
    printf("       -b ± √(b² - 4ac)\n");
    printf("  x = ──────────────────\n");
    printf("             2a\n");
    printf("\n");
    Sleep(2000);
    printf("       -%.1f ± √(%.1f² - 4(%.1f)(%.1f))\n",b,b,a,c);
    printf("  x = ──────────────────\n");
    printf("             2(%.1f)\n",a);
    printf("\n");
    Sleep(2000);

    int coeficiente_quadratico = a;
    int coeficiente_angular = b;
    int coeficiente_independente = c;

    float delta = pow(coeficiente_angular , 2) - (4 * coeficiente_quadratico * coeficiente_independente);
    float denominador = 2 * coeficiente_quadratico;
    float x_1 = ((coeficiente_angular * -1) + (sqrt(delta)))/denominador;
    float x_2 = ((coeficiente_angular * -1) - (sqrt(delta)))/denominador;

    printf("X' = %.2f\n" , x_1);
    Sleep(2000);
    printf("X'' = %.2f\n", x_2);
    Sleep(2000);
}