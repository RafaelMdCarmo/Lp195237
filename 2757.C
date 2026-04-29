/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Rafael Mello do Carmo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 29/04/2026
Objetivo    : imprimir os numeros de formas diferentes
Aprendizado : outras maneiras de apresentar o resultado na tela
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    scanf("%d %d %d", &n1, &n2, &n3);
    
    printf("A = %d, B = %d, C = %d\n", n1, n2, n3);
    printf("A = %10d, B = %10d, C = %10d\n", n1, n2, n3);
    printf("A = %010d, B = %010d, C = %010d\n", n1, n2, n3);
    printf("A = %-10d, B = %-10d, C = %-10d\n", n1, n2, n3);

    return 0;
}
