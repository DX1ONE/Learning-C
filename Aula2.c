#include <math.h>
#include <stdio.h>

int main() {
  float soma, numero_1, numero_2; 
  
  printf("Digite o primeiro núemro ");
  scanf("%f", &numero_1);
  
  printf("Digite o segundo número: ");
  scanf("%f", &numero_2);
  
  soma = numero_1 + numero_2;
  
  printf("A soma dos números %d + %d é igual a %d",
  numero_1, numero_2, soma);

  return 0;
}