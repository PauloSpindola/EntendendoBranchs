#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  

  float salario, aumento, novoSalario;

  printf("Digite o valor do seu salário para receber seu merecido aumento: $");
  scanf("%f%*c", &salario);

  aumento = salario * 25/100;
  novoSalario = salario + aumento;

  printf("Seu novo salário é: $%.2f\n", novoSalario);
  return 0;
}


