/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* 
   Cálculo do fatorial de um número.
*/

#include <stdio.h>
#include <stdlib.h>

int calc_fat(int);

int main()
{
    system("chcp 65001>null");

    int numero = 5;
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d é: %d", numero , num_fat);
    return 0;
}

/* Definição da funcao fatorial */
int calc_fat(int b)
{
    int fatorial = 1;
    for (int contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %d",fatorial);
    }
    return fatorial;
}

