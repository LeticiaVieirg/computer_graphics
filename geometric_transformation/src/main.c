#include <stdio.h>
#include "vetor.h"

int main() {
    printf("\n=========== OPERACOES COM VETORES ===========\n");

    printf("\n=== VETORES ENTRE PONTOS ===\n");
    vetor2d(2, 4, 6, 2);       // Vetor 2D entre (2,4) e (6,2)
    vetor3d(1, 2, 3, 4, 6, 8); // Vetor 3D entre (1,2,3) e (4,6,8)

    printf("\n=== NORMAS DOS VETORES ===\n");
    norma2d(3, 5);             // Norma do vetor 2D <3,5>
    norma3d(3, 5, 2);          // Norma do vetor 3D <3,5,2>

    printf("\n=== DESLOCAMENTO DE PONTOS ===\n");
    desloca2d(3, 5, 8, 9);     // Desloca ponto (3,5) pelo vetor <8,9>
    desloca3d(3, 5, 7, 8, 9, 11); // Desloca ponto (3,5,7) pelo vetor <8,9,11>

    printf("\n=== OPERACOES COM VETORES ===\n");
    printf("\nSoma e Subtração 2D:\n");
    somaSub2d(2, -5, 2, 4, "soma");      // Soma vetores 2D
    somaSub2d(2, -5, 2, 4, "subtracao"); // Subtração vetores 2D
    
    printf("\nSoma e Subtracao 3D:\n");
    somaSub3d(3, 5, -6, -3, 2, -3, "soma");      // Soma vetores 3D
    somaSub3d(3, 5, -6, -3, 2, -3, "subtracao"); // Subtração vetores 3D

    printf("\nMultiplicacao por Escalar:\n");
    multEsc2d(2, 4, 3);       // Multiplica vetor 2D <2,4> por 3
    multEsc3d(1, 7, 5, -5);   // Multiplica vetor 3D <1,7,5> por -5

    printf("\n=== NORMALIZACAO ===\n");
    normaliza2d(12, 3);       // Normaliza vetor 2D <12,3>
    normaliza3d(-3, 4, -5);   // Normaliza vetor 3D <-3,4,-5>

    printf("\n=== PRODUTOS ENTRE VETORES ===\n");
    printf("\nProduto Escalar:\n");
    prodEsc2d(2, -4, 5, 3);           // Produto escalar 2D
    prodEsc3d(1, 7, 5, 2, 4, 5);      // Produto escalar 3D

    printf("\nProduto Vetorial:\n");
    prodVet2d(2, -4, 5, 3);           // Produto vetorial 2D
    prodVet3d(2, -4, 0, 5, 3, 0);     // Produto vetorial 3D

    printf("\n=============================\n");
    return 0;
}
