#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>

float coeficiente_quadratico(void)
{
    static float a;
    printf("Digite o coeficiente quadrático: ");
    while(scanf("%f",&a) == 0)
    {
        printf("❌ [ERROR] ❌: O número inválido\n");
        while(getchar() != '\n');
        printf("Digite o coeficiente quadrático: ");
        Sleep(2000);
    }
    return a;
}