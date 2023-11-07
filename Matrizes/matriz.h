#ifndef MATRIZ_H
#define MATRIZ_H

void inicializaMatriz(int n, int m, int** mat);
void mostraMatriz(int n, int m, int** mat);
void inicializaMatrizRand(int n, int m, int** mat, int numMax);
int** aloca_matriz (int n, int m);
void desaloca_matriz (int n, int** mat);
int** soma_matriz (int n, int m, int** mat1, int** mat2);
#endif