#include <stdio.h>
#include <stdbool.h>

float mediaAritimetica (float n1, float n2, float n3) {
  return (n1 + n2 + n3) / 3;
}

float mediaPonderada (float n1, float n2, float n3) {
  return (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
}

float mediaHarmonica (float n1, float n2, float n3) {
  return 3 / (1 / n1 + 1 / n2 + 1 / n3);
}

bool calculaNotas () {
  float n1, n2, n3, resultado;
  int modelo;

  printf("\n< Digite as 3 notas: \n> ");
  scanf("%f %f %f", &n1, &n2, &n3);

  if (n1 < 0 || n2 < 0 || n3 < 0) return false;

  printf("\n< Digite o modelo (1, 2 ou 3): \n> ");

  while (true) {
    scanf("%d", &modelo);
    if (modelo < 1 || modelo > 3) {
      printf("\nDigite um modelo válido (1, 2 ou 3)\n> ");
      continue;
    }
    printf("%d", modelo);
    switch (modelo) {
      case 1:
        resultado = mediaAritimetica(n1, n2, n3);
        break;
      case 2:
        resultado = mediaPonderada(n1, n2, n3);
        break;
      case 3:
        resultado = mediaHarmonica(n1, n2, n3);
        break;
    }
    break;
  }

  printf("\n< Resultado: %.2f.\n< ------------", resultado);
  return true;
}

int main(void) {
  printf("Calculadora de notas\n");
  while (true) if (!calculaNotas()) break;
}