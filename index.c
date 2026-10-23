#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>
#include"connect.h"
int main()
{
    float a = coeficiente_quadratico();
    float b = coeficiente_angular();
    float c = coeficiente_independente();
    obter_funcao(a,b,c);
    bhaskara(a,b,c);
    return 0;
}