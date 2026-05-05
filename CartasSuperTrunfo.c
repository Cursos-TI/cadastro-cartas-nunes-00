#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //carta 1
  char estado1;
  char cidade1[50];
  char codigo[4];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  //carta 2
  char estado2;
  char cidade2[50];
  char codigo2[4];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;


  // Área para entrada de dados

//entrada da carta 1 
printf("carta da cidade 1: \n");

printf("estado de A a H: ");
scanf(" %c", &estado1);

printf("nome da cidade: ");
scanf(" %[^\n]", cidade1);

printf("codigo da cidade: ");
scanf(" %s", codigo);

printf("populacao: ");
scanf("%d", &populacao1);

printf("area em km²: ");
scanf("%f", &area1);

printf("pib em bilhöes: ");
scanf("%f", &pib1);

printf("pontos turisticos: ");
scanf("%d", &pontos1);

//entrada carta 2
printf("carta da cidade 2: \n");

printf("estado de A a H: ");
scanf(" %c", &estado2);

printf("nome da cidade: ");
scanf(" %[^\n]", cidade2);

printf("codigo da cidade: ");
scanf(" %s", codigo2);

printf("populacao: ");
scanf("%d", &populacao2);

printf("area em km²: ");
scanf("%f", &area2);

printf("pib em bilhões: ");
scanf("%f", &pib2);

printf("pontos turisticos: ");
scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
 
  printf("\n carta da cidade 1: \n");
printf("estado: %c\n", estado1);
printf("cidade: %s\n", cidade1);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao1);
printf("area: %.2f km²\n", area1);
printf("pib: %.2f em bilhöes\n", pib1);
printf("pontos turisticos: %d\n", pontos1);

  printf("\n carta da cidade 2: \n");
printf("estado: %c\n", estado2);
printf("cidade: %s\n", cidade2);
printf("codigo: %s\n", codigo2);
printf("populacao: %d\n", populacao2);
printf("area: %.2f km²\n", area2);
printf("pib: %.2f em bilhöes\n", pib2);
printf("pontos turisticos: %d\n", pontos2);

return 0;
} 
