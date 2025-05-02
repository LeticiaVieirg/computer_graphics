#include <stdio.h>
#include <math.h>
#include <string.h>
#include "vetor.h"

void vetor3d(int x1, int y1, int z1, int x2, int y2, int z2) {
    int res_x = x2 - x1;
    int res_y = y2 - y1;
    int res_z = z2 - z1;

    printf("O vetor 3D entre os pontos (%d, %d, %d) e (%d, %d, %d): <%d, %d, %d>.\n", 
           x1, y1, z1, x2, y2, z2, res_x, res_y, res_z);
}

void vetor2d(int x1, int y1, int x2, int y2) {
    int res_x = x2 - x1;
    int res_y = y2 - y1;

    printf("O vetor 2D entre os pontos (%d, %d) e (%d, %d): <%d, %d>.\n", 
           x1, y1, x2, y2, res_x, res_y);
}

void norma3d(int x, int y, int z) {
    int res_norma = (pow(x, 2) + pow(y, 2) + pow(z, 2));

    printf("A norma do vetor 3D <%d, %d, %d>: Raiz de %d\n", x, y, z, res_norma);
}

void norma2d(int x, int y) {
    int res_norma = (pow(x, 2) + pow(y, 2));

    printf("A norma do vetor 2D <%d, %d>: Raiz de %d\n", x, y, res_norma);
}

void desloca3d(int xp, int yp, int zp, int xv, int yv, int zv) {
    int res_x = xp + xv;
    int res_y = yp + yv;
    int res_z = zp + zv;

    printf("O deslocamento do ponto (%d, %d, %d) usando o vetor <%d, %d, %d>: (%d, %d, %d)\n", 
           xp, yp, zp, xv, yv, zv, res_x, res_y, res_z);
}

void desloca2d(int xp, int yp, int xv, int yv) {
    int res_x = xp + xv;
    int res_y = yp + yv;

    printf("O deslocamento do ponto (%d, %d) usando o vetor <%d, %d>: (%d, %d)\n", 
           xp, yp, xv, yv, res_x, res_y);
}

void somaSub3d(int x1, int y1, int z1, int x2, int y2, int z2, char *op) {
    if (strcmp(op, "soma") == 0) {
        int res_x = x1 + x2;
        int res_y = y1 + y2;
        int res_z = z1 + z2;
        printf("A soma entre os vetores <%d, %d, %d> e <%d, %d, %d>: <%d, %d, %d>.\n",
               x1, y1, z1, x2, y2, z2, res_x, res_y, res_z);
    } else if (strcmp(op, "subtracao") == 0) {
        int res_x = x1 - x2;
        int res_y = y1 - y2;
        int res_z = z1 - z2;
        printf("A subtracao entre os vetores <%d, %d, %d> e <%d, %d, %d>: <%d, %d, %d>.\n",
               x1, y1, z1, x2, y2, z2, res_x, res_y, res_z);
    } else {
        printf("ERRO: Operacao nao correspondente.\n");
    }
}

void somaSub2d(int x1, int y1, int x2, int y2, char *op) {
    if (strcmp(op, "soma") == 0) {
        int res_x = x1 + x2;
        int res_y = y1 + y2;
        printf("A soma entre os vetores <%d, %d> e <%d, %d>: <%d, %d>.\n",
               x1, y1, x2, y2, res_x, res_y);
    } else if (strcmp(op, "subtracao") == 0) {
        int res_x = x1 - x2;
        int res_y = y1 - y2;
        printf("A subtracao entre os vetores <%d, %d> e <%d, %d>: <%d, %d>.\n",
               x1, y1, x2, y2, res_x, res_y);
    } else {
        printf("ERRO: Operacao nao correspondente.\n");
    }
}

void multEsc3d(int xv, int yv, int zv, int esc) {
    int res_x = xv * esc;
    int res_y = yv * esc;
    int res_z = zv * esc;

    printf("A multiplicacao do vetor <%d, %d, %d> pelo escalar %d: <%d, %d, %d>.\n",
           xv, yv, zv, esc, res_x, res_y, res_z);
}

void multEsc2d(int xv, int yv, int esc) {
    int res_x = xv * esc;
    int res_y = yv * esc;

    printf("A multiplicacao do vetor <%d, %d> pelo escalar %d: <%d, %d>.\n",
           xv, yv, esc, res_x, res_y);
}

void normaliza3d(int xv, int yv, int zv) {
    int res_norma = (pow(xv, 2) + pow(yv, 2) + pow(zv, 2));
    printf("A normalizacao do vetor <%d, %d, %d>: <%d/raiz de %d, %d/raiz de %d, %d/raiz de %d>.\n",
           xv, yv, zv, xv, res_norma, yv, res_norma, zv, res_norma);
}

void normaliza2d(int xv, int yv) {
    int res_norma = (pow(xv, 2) + pow(yv, 2));
    printf("A normalizacao do vetor <%d, %d>: <%d/raiz de %d, %d/raiz de %d>.\n",
           xv, yv, xv, res_norma, yv, res_norma);
}

void prodEsc3d(int x1, int y1, int z1, int x2, int y2, int z2) {
    int res = (x2 * x1) + (y2 * y1) + (z2 * z1);
    printf("O produto escalar entre <%d, %d, %d> e <%d, %d, %d>: %d.\n",
           x1, y1, z1, x2, y2, z2, res);
}

void prodEsc2d(int x1, int y1, int x2, int y2) {
    int res = (x2 * x1) + (y2 * y1);
    printf("O produto escalar entre <%d, %d> e <%d, %d>: %d.\n",
           x1, y1, x2, y2, res);
}

void prodVet3d(int x1, int y1, int z1, int x2, int y2, int z2) {
    int res_x = y1 * z2 - z1 * y2;
    int res_y = z1 * x2 - x1 * z2;
    int res_z = x1 * y2 - y1 * x2;

    printf("O produto vetorial entre <%d, %d, %d> e <%d, %d, %d>: <%d, %d, %d>\n",
           x1, y1, z1, x2, y2, z2, res_x, res_y, res_z);
}

void prodVet2d(int x1, int y1, int x2, int y2) {
    int z1 = 0;
    int z2 = 0; 
    
    int res_x = y1 * z2 - z1 * y2;
    int res_y = z1 * x2 - x1 * z2;
    int res_z = x1 * y2 - y1 * x2;   
    printf("O produto vetorial entre <%d, %d> e <%d, %d>: <%d , %d, %d>\n", 
           x1, y1, x2, y2, res_x, res_y, res_z);
}
