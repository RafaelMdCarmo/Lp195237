/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafael Mello do Carmo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1002
Data        : 29/04/2026
Objetivo    : Calculo com decimal
Aprendizado : existem diferenças entre o arredondamento em float e double
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    double R, A, PI;
    PI= 3.14159;
    
    scanf("%lf",&R);
    A=PI*R*R;
    
    printf("A=%.4f\n", A);
    
    return 0;
}
