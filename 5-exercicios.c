#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int calculaSomaDosQuadrados (x, y, z) {
  return (x * x) + (y * y) + (z * z);
}

void exe1() {
  int valor1, valor2, valor3;
  printf("\nDigite 3 números:\n> ");
  scanf("%d %d %d", &valor1, &valor2, &valor3);
  printf("\nResultado: %d\n", calculaSomaDosQuadrados(valor1, valor2, valor3));
}

void desenhaRetangulo(int linhas, int colunas) {
  for (int y = 0; y < linhas; y++) {
    for (int x = 0; x < colunas; x++) {
      if (x == 0 || x == colunas - 1) {
        if (y == 0 || y == linhas - 1) printf("+");
        else printf("|");
      } else if (y == 0 || y == linhas - 1) printf("-");
      else printf(" ");
    }
    printf("\n");
  }
}

void exe2() {
  int l, c;
  printf("\nDigite o número de linhas e colunas:\n> ");
  scanf("%d %d", &l, &c);
  desenhaRetangulo(l, c);
}

int numeroDeDigitos (int num) {
  int digitos;
  for(digitos = 0; num > 0; digitos++) num /= 10;
  return digitos;
}

void exe3() {
  int numero;
  printf("\nDigite um número:\n> ");
  scanf("%d", &numero);
  printf("\nNúmero de dígitos: %d\n", numeroDeDigitos(numero));
}

void escadaNumeros (int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}

void exe4() {
  int numero;
  printf("\nDigite um número:\n> ");
  scanf("%d", &numero);
  escadaNumeros(numero);
}

int main(void) {
  int opcao;

  while (true) {
    printf("Escolha uma opção:\n");
    printf("1. Exercício 1\n");
    printf("2. Exercício 2\n");
    printf("3. Exercício 3\n");
    printf("4. Exercício 4\n");
    printf("5. Sair\n> ");

    scanf("%d", &opcao);

    if (opcao == 1) exe1();
    else if (opcao == 2) exe2();
    else if (opcao == 3) exe3();
    else if (opcao == 4) exe4();
    else if (opcao == 5) break;
    else printf("\nEscolha uma opção válida!\n");
  }
}