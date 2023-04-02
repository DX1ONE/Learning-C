#include <stdio.h>
#include <math.h>

int main() {
  // Entrada
  float raiz;
  printf("Digite um valor para ver sua raiz: ");
  scanf("%f", &raiz);

  // Processamento
  float resultado = sqrt(raiz);

  // Saída
  printf("A raiz de %.f é %.3f\n", raiz, resultado);

  return 0;
}