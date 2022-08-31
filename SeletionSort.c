#include <stdio.h>

// Procura a posição do maior elemento do vetor
// Recebe: vetor, posicão inicial e posição final
// Retorna: Posição do maior elemento
int pmax(int* v, int ini, int fim) {
  int maior = ini;
  for(int i = ini + 1; i <= fim; i++) {
    if(v[i] > v[maior]) {
      maior = i;
    }
  }
  return maior;
}

// Troca o elemento na posição "a" e "b" de lugares
// Recebe: vetor, posição "a", posição "b"
// Retorna: NDA
void trocar(int* v, int a, int b) {
  int aux = v[a];
  v[a] = v[b];
  v[b] = aux;
}

// O Seletion Sort faz uma varredura no vetor buscando o
// maior elemento a cada loop e inverte os elementos da
// posição domaior elemento e da posição i.
// [0, 3, 6, 5, 1] i = 4; maior = 2; -> [0, 3, 1, 5, 6]
// [0, 3, 1, 5, 6] i = 3; maior = 3; -> [0, 3, 1, 5, 6]
// [0, 3, 1, 5, 6] i = 2; maior = 1; -> [0, 1, 3, 5, 6]
// [0, 1, 3, 5, 6] i = 1; maior = 1; -> [0, 1, 3, 5, 6]
void SeletionSort(int* v, int n) {
  for(int i = n-1; i > 0; i--) {
    int maior = pmax(v, 0, i);
    trocar(v, maior, i); 
  }
}