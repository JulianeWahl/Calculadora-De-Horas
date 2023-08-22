/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char Nome [10];
    float Salário, Horas, Total;
    
    printf ("Ola, qual seu nome: ");
    scanf ("%s", Nome );
    printf ("Qual o total do seu salário mensal: ");
    scanf ("%f", & Salário);
    printf ("Qual o total de horas trabalhadas mensalmente: ");
    scanf ("%f", & Horas);
    Total = Salário / Horas;
    
    printf ("Seu salário %s  hora é de: %.2f ", Nome, Total );

    return 0;
}


