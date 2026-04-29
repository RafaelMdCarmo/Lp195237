/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafael Mello do Carmo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/XXXX
Data        : 29/04/2026
Objetivo    : descobrir o valor maior
Aprendizado : utilização do if else
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() 
{
    int a, b, c, maior;
    scanf ("%d %d %d",&a ,&b ,&c);
    if (a>b && a>c)
    { 
        maior = a;
    }
    else if(b>c)
    {
        maior = b;
    }
    else maior = c;
    printf ("%d eh o maior\n",maior);
    return 0;
}
