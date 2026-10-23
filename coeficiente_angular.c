#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>

float coeficiente_angular(void)
{
    static float b;
    printf("Digite o coeficiente ângular: ");
    while(scanf("%f",&b) != 1)
    {
        printf("❌ [ERROR] ❌: O número inválido\n");
        Sleep(2000);
        while(getchar() != '\n');
        printf("Digite o coeficiente ângular: ");
    }
    return b;
}