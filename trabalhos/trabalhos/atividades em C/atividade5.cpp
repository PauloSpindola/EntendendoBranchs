#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
 

  float salario, novoSalario, aumento;
  int percentualAumento;

  printf("Salario: $");
  scanf("%f%*c", &salario);
  printf("Percentual de aumento: ");
  scanf("%d%*c", &percentualAumento);

  aumento = salario*percentualAumento/100;
  novoSalario = salario + aumento;

  printf("Valor do aumento: $%d.2f\n", aumento);
  printf("Novo salario %.2f\n", novoSalario);
  return 0;
}