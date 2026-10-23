#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>

float coeficiente_independente(void)
{
    static float c;
    printf("Digite o coeficiente independente: ");
    while(scanf("%f",&c) != 1)
    {
        printf("❌ [ERROR] ❌: O número inválido\n");
        while(getchar() != '\n');
        printf("Digite o coeficiente independente: ");
        Sleep(2000);
    }
    return c;
}