#include <stdio.h>
#include <math.h>

int main() {
  // entrada
  float numero;
  printf("Entre com um numero: ");
  scanf("%f", &numero);
  
  //processamento
  float raiz = sqrt(numero);
  
  // Saída
  printf("A raiz de %.f é %.3f\n", numero, raiz);
  
  return 0;
}