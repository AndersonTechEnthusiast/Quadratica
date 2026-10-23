#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<Windows.h>

void obter_funcao(float a , float b , float c)
{
    if(a > 0 && b > 0 && c > 0)
    {
        printf("\n\n%.1fx² + %.1fx + %.1f\n\n",a,b,c);
    }
    else
    if(a < 0 && b > 0 && c > 0)
    {
        printf("\n\n-%.1fx² + %.1fx + %.1f\n\n",a,b,c);
    }
    else
    if(a < 0 && b < 0 && c > 0)
    {
        printf("\n\n-%.1fx² - %.1fx + %.1f\n\n",a,b,c);
    }
    else
    if(a < 0 && b < 0 && c < 0)
    {
        printf("\n\n-%.1fx² - %.1fx - %.1f\n\n",a,b,c);
    }
    else
    if(a > 0 && b < 0 && c > 0)
    {
        printf("\n\n%.1fx² - %.1fx + %.1f\n\n",a,b,c);
    }
    else
    if(a > 0 && b < 0 && c < 0)
    {
        printf("\n\n%.1fx² - %.1fx + %.1f\n\n",a,b,c);
    }
    else
    if(a > 0 && b > 0 && c < 0)
    {
        printf("\n\n%.1fx² + %.1fx - %.1f\n\n",a,b,c);
    }
}