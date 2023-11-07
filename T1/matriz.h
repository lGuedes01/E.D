#ifndef MATRIZ_H
#define MATRIZ_H

void inicializaMatrizNULA(int n, int m, int** mat);
void imprimeMatriz(int n, int m, int** mat);
void inicializaMatriz(int n, int m, int** mat);
int** aloca_matriz (int n, int m);
void desaloca_matriz (int n, int** mat);
int** soma_matriz (int n, int m, int** mat1, int** mat2);
void preencheDiagonalPrincipal(int ordem, int** mat, int numMax);
void inicializaMatrizEsparsa(int n, int m, int** mat);
int*** aloca_matriz3D(int x, int y, int z);
void preenche_matriz3D(int x, int y, int z, int*** mat);
void imprime_matriz3D(int x, int y, int z, int*** mat);
#endif