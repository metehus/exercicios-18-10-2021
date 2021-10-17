#include <stdio.h>
#include <stdbool.h>

bool checaNumeroPerfeito (int numero) {
  int soma = 0;

  for (int i = numero - 1; i > 0; i--) {
    if (numero % i == 0) {
      soma += i;
    }
  }

  return soma == numero;
}

int main(void) {
  printf("Checar se um número é perfeito\n");
  while (true) {
    printf("\n< Digite um número: \n> ");
    int numero;
    scanf("%d", &numero);

    if (numero <= 0) break;
    printf("\n< O número %d ", numero);
    printf(checaNumeroPerfeito(numero) ? "é" : "não é");
    printf(" perfeito.");
  }
  return 0;
}