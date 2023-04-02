#include <stdio.h>
#include <math.h>
int main() {
  
  //entrada
  float nota_a1 = 0.0f; //Primeira Nota
  float nota_a2 = 0.0f; // Segunda Nota
  printf("Digite a primeira nota (0 -10): ");  
  scanf("%f", &nota_a1); // Entrada da primeira nota
  printf("Digite a segunda nota (0 - 10): ");
  scanf("%f", &nota_a2); //Entrada da segunda nota
  
  //processamento
  float nota_final;
  nota_final = (0.4 * nota_a1) + (0.6 * nota_a2); //Cálculo da nota
    
  //saída
  printf("A nota final com as notas %.2f e %.2f é igual a %.2f", nota_a1, nota_a2,nota_final); // Saída com os dados 
  
  return 0; }