/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafael Mello do Carmo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1001
Data        : 29/04/2026
Objetivo    : escanear 2 valores e somar eles
Aprendizado : estrutura basica de scan e conta
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int n1, n2, soma;
    scanf("%d %d", &n1, &n2);
    soma = n1 + n2;
    printf("X = %d\n", soma);
    return 0;
}
