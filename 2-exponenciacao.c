#include <stdio.h>
#include <stdbool.h>

float exponenciacao (float base, float expoente) {
  if (expoente == 0) return 1;
  float resultado = 1;

  if (expoente > 0) {
    for (int i = 0; i < expoente; i++) {
      resultado *= base;
    }
  } else {
    expoente *= -1;
    resultado = 1 / exponenciacao(base, expoente);
  }


  return resultado;
}

int main(void) {
  printf("Calculadora de exponenciação\n");
  while (true) {
    printf("\n< Digite um número e um expoente: \n> ");
    float numero, expoente;
    scanf("%f %f", &numero, &expoente);

    printf("\n< Resultado: %.2f.", exponenciacao(numero, expoente));
  }
  return 0;
}