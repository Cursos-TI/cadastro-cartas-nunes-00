#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //carta 1
  char estado1[50];
  char cidade1[50];
  char codigo[10];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidade1;
  float pib_per_capita1;
  float super_poder1;


  //carta 2
  char estado2[50];
  char cidade2[50];
  char codigo2[10];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidade2;
  float pib_per_capita2;
  float super_poder2;

  // Área para entrada de dados

//entrada da carta 1 
printf("carta da cidade 1: \n");

printf("estado de A a H: ");
scanf(" %s", &estado1);

printf("nome da cidade: ");
scanf(" %s", cidade1);

printf("codigo da cidade: ");
scanf(" %s", codigo);

printf("populacao: ");
scanf("%lu", &populacao1);

printf("area: ");
scanf("%f", &area1);

printf("pib: ");
scanf("%f", &pib1);

printf("pontos turisticos: ");
scanf("%d", &pontosturisticos1);

//entrada carta 2
printf("carta da cidade 2: \n");

printf("estado de A a H: ");
scanf(" %s", &estado2);

printf("nome da cidade: ");
scanf(" %s", cidade2);

printf("codigo da cidade: ");
scanf(" %s", codigo2);

printf("populacao: ");
scanf("%lu", &populacao2);

printf("area: ");
scanf("%f", &area2);

printf("pib: ");
scanf("%f", &pib2);

printf("pontos turisticos: ");
scanf("%d", &pontosturisticos2);


//calculos carta 1 
 densidade1 = populacao1 / area1;
 pib_per_capita1 = pib1 / populacao1;


super_poder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pib_per_capita1 + (1/densidade1);



//calculos carta 2

densidade2 = populacao2 / area2;
 pib_per_capita2 = pib2 / populacao2;


super_poder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pib_per_capita2 + (1/densidade2);




  // Área para exibição dos dados da cidade
 
  printf("\n carta da cidade 1: \n");
printf("estado: %s\n", estado1);
printf("cidade: %s\n", cidade1);
printf("codigo: %s\n", codigo);
printf("populacao: %lu\n", populacao1);
printf("area: %.2f km²\n", area1);
printf("pib: %.2f em bilhöes\n", pib1);
printf("pontos turisticos: %d\n", pontosturisticos1);
printf("densidade populacional: %.2f habitantes por km²\n", densidade1);
printf("pib per capita: %.2f reais\n", pib_per_capita1);


  printf("\n carta da cidade 2: \n");
printf("estado: %s\n", estado2);
printf("cidade: %s\n", cidade2);
printf("codigo: %s\n", codigo2);
printf("populacao: %lu\n", populacao2);
printf("area: %.2f km²\n", area2);
printf("pib: %.2f em bilhöes\n", pib2);
printf("pontos turisticos: %d\n", pontosturisticos2);
printf("densidade populacional: %.2f habitantes por km²\n", densidade2);
printf("pib per capita: %.2f reais\n", pib_per_capita2);



printf("\nComparacao de Cartas:\n");

printf("Populacao: Carta %d venceu (%d)\n",
       populacao1 > populacao2 ? 1 : 2,
       populacao1 > populacao2);

printf("Area: Carta %d venceu (%d)\n",
       area1 > area2 ? 1 : 2,
       area1 > area2);

printf("PIB: Carta %d venceu (%d)\n",
       pib1 > pib2 ? 1 : 2,
       pib1 > pib2);

printf("Pontos Turisticos: Carta %d venceu (%d)\n",
       pontosturisticos1 > pontosturisticos2 ? 1 : 2,
       pontosturisticos1 > pontosturisticos2);

// menor densidade vence
printf("Densidade Populacional: Carta %d venceu (%d)\n",
       densidade1 < densidade2 ? 1 : 2,
       densidade1 < densidade2);

printf("PIB per Capita: Carta %d venceu (%d)\n",
       pib_per_capita1 > pib_per_capita2 ? 1 : 2,
       pib_per_capita1 > pib_per_capita2);

printf("Super Poder: Carta %d venceu (%d)\n",
       super_poder1 > super_poder2 ? 1 : 2,
       super_poder1 > super_poder2);


       
return 0;
} 
