#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Ponto = [x, y, z]

bool checaColisao (double ponto1[3], double ponto2[3]) {
  double delta = pow(ponto2[0] - ponto1[0], 2)
  + pow(ponto2[1] - ponto1[1], 2)
  + pow(ponto2[2] - ponto1[2], 2);

  return sqrt(delta) == 0;
}

void printBoolean (bool valor) {
  if (valor) printf("Sim");
  else printf("Não");
}

int main(void) {
  printf("Calculadora de colisão entre 3 dimensões\n");

  double pos1[3] = {3, 4, 2};
  double pos2[3] = {1, 2, 5};
  double pos3[3] = {1, 2.6, 5.1};

  bool colisao = checaColisao(pos1, pos2);
  printf("\nColisão entre (3, 4, 2) e (1, 2, 5): ");
  printBoolean(colisao);

  colisao = checaColisao(pos2, pos2);
  printf("\nColisão entre (1, 2, 5) e (1, 2, 5): ");
  printBoolean(colisao);
  
  colisao = checaColisao(pos2, pos3);
  printf("\nColisão entre (1, 2, 5) e (1, 2.6, 5.1): ");
  printBoolean(colisao);

  colisao = checaColisao(pos1, pos1);
  printf("\nColisão entre (3, 4, 2) e (3, 4, 2): ");
  printBoolean(colisao);
}