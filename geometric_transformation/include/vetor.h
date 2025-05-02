#ifndef VETORES_H
#define VETORES_H

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} Vetor2d;

typedef struct {
    int x;
    int y;
    int z;
} Vetor3d;

void vetor2d(int x1, int y1, int x2, int y2);
void vetor3d(int x1, int y1, int z1, int x2, int y2, int z2);

void norma2d(int x, int y);
void norma3d(int x, int y, int z);

void desloca2d(int xp, int yp, int xv, int yv);
void desloca3d(int xp, int yp, int zp, int xv, int yv, int zv);
void somaSub2d(int x1, int y1, int x2, int y2, char *op);
void somaSub3d(int x1, int y1, int z1, int x2, int y2, int z2, char *op);
void multEsc2d(int xv, int yv, int esc);
void multEsc3d(int xv, int yv, int zv, int esc);

void normaliza2d(int xv, int yv);
void normaliza3d(int xv, int yv, int zv);

void prodEsc2d(int x1, int y1, int x2, int y2);
void prodEsc3d(int x1, int y1, int z1, int x2, int y2, int z2);
void prodVet2d(int x1, int y1, int x2, int y2);
void prodVet3d(int x1, int y1, int z1, int x2, int y2, int z2);

void imprimeVetor2d(int x, int y);
void imprimeVetor3d(int x, int y, int z);
void imprimeNorma2d(int x, int y);
void imprimeNorma3d(int x, int y, int z);

#endif
