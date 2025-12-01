/*
  Super Trunfo de Cidades - Cadastro de Cartas
  Autor: [Bruno Mazini de Almeida]
  Data: [29/11/2025]
  Descrição: Programa que cadastra e exibe duas cartas do jogo Super Trunfo com dados de cidades - Desafio: nível novato.
*/

#include <stdio.h>
#include <string.h>

int main (){

//Variáveis definidas para as duas cartas
char estado1, estado2;
char codigoCarta1 [50], codigoCarta2 [50];
char nomeCidade1 [50], nomeCidade2 [50];

unsigned long int populacao1, populacao2; 
int pontosTuristicos1, pontosTuristicos2;

float area1, area2;
float pib1, pib2;
float densi_popu1, densi_popu2; //Densidade populacional - número de habitantes por quilômetro quadrado
float pibpc1, pibpc2; //Pib per capita
float superPoder1, superPoder2;

int menu; 

//Leitura de dados da primeira carta
printf("------ Insira os dados para primeira carta ------ \n");
printf("Digite uma letra de (A a H) para representar o estado: ");
scanf(" %c", &estado1);

printf("Digite o codigo da carta: ");
scanf("%s", codigoCarta1);

getchar(); //limpar o buffer para receber fgets

printf("Digite o nome da cidade: ");
fgets(nomeCidade1, sizeof(nomeCidade1), stdin); //Possibilita o uso de strings com espaço 

nomeCidade1[strcspn(nomeCidade1,"\n")] = '\0'; //Remove a quebra de linha que o fgets gera

printf("Digite o numero da populacao da cidade: ");
scanf("%lu", &populacao1);

printf("Digite a area da cidade em quilometros quadrados: ");
scanf("%f", &area1);

printf("Digite o PIB da cidade (em bilhoes de reais): ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);


//Leitura de dados da segunda carta
printf("\n------ Insira os dados para segunda carta ------ \n");
printf("Digite uma letra de (A a H) para representar o estado: ");
scanf(" %c", &estado2);

printf("Digite o codigo da carta: ");
scanf("%s", codigoCarta2);

getchar(); //limpar o buffer para receber fgets

printf("Digite o nome da cidade: ");
fgets(nomeCidade2, sizeof(nomeCidade2), stdin); //Possibilita o uso de strings com espaço 

nomeCidade2[strcspn(nomeCidade2,"\n")] = '\0'; //Remove a quebra de linha que o fgets gera

printf("Digite o numero da populacao da cidade: ");
scanf("%lu", &populacao2);

printf("Digite a area da cidade em quilometros quadrados: ");
scanf("%f", &area2);

printf("Digite o PIB da cidade (em bilhoes de reais): ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);

densi_popu1 = (float) populacao1 / area1;
densi_popu2 = (float) populacao2 / area2;

pibpc1 = (pib1 * 1000000000) / (float) populacao1;
pibpc2 = (pib2 * 1000000000) / (float) populacao2;

superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibpc1 + (1/ densi_popu1);
superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibpc2 + (1/ densi_popu2);

//Exibindo dados da primeira carta 
printf("------- Resultados da primeira carta -------\n");
printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigoCarta1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %lu\n", populacao1);
printf("Area: %.2f quilometros quadrados\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
printf("Densidade populacional: %.2f\n", densi_popu1);
printf("PIB per capita: %.2f\n", pibpc1);


//Exibindo dados da segunda carta 
printf("\n------- Resultados da segunda carta -------\n");
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigoCarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f quilometros quadrados\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
printf("Densidade populacional: %.2f\n", densi_popu2);
printf("PIB per capita: %.2f\n", pibpc2);


//Menu Interativo 

printf("\nBatalha das cartas - Escolha o seu atributo para batalha:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos turísticos\n");
printf("5 - Densidade demografica\n");
printf("----- Escolha um numero entre 1 e 5 ----- :");
scanf("%d", &menu);

//Switch para comparação das cartas

switch (menu)
{
case 1:
     printf("Atributo = População\n");
     if (populacao1>populacao2)
     {
       printf("A carta 1 (%s - número da população: %lu ) Venceu!\n",nomeCidade1,populacao1);
     }else if (populacao2>populacao1){
       printf("A carta 2 (%s - número da população: %lu ) Venceu!\n",nomeCidade2,populacao2);
     }else{
       printf("Empate!\n");
     }
       break;
case 2:
     printf("Atributo = Área\n");
     if (area1>area2)
     {
       printf("A carta 1 (%s - Área: %.2f ) Venceu!\n",nomeCidade1,area1);
     }else if (area2>area1){
       printf("A carta 2 (%s - Área: %.2f ) Venceu!\n",nomeCidade2,area2);
     }else{
       printf("Empate!\n");
     }
       break;
case 3:
     printf("Atributo = PIB\n");
     if (pib1>pib2)
     {
       printf("A carta 1 (%s - PIB: %.2f ) Venceu!\n",nomeCidade1,pib1);
     }else if (pib2>pib1){
       printf("A carta 2 (%s - PIB: %.2f ) Venceu!\n",nomeCidade2,pib2);
     }else{
       printf("Empate!\n");
     }
       break;
case 4:
     printf("Atributo = Número de pontos turísticos\n");
     if (pontosTuristicos1>pontosTuristicos2)
     {
       printf("A carta 1 (%s - Número de pontos turísticos: %d ) Venceu!\n",nomeCidade1,pontosTuristicos1);
     }else if (pontosTuristicos2>pontosTuristicos1){
       printf("A carta 2 (%s - Número de pontos turísticos: %d ) Venceu!\n",nomeCidade2,pontosTuristicos2);
     }else{
       printf("Empate!\n");
     }
       break;
case 5:
     printf("Atributo = Densidade demográfica\n");
     if (densi_popu1 < densi_popu2)
     {
       printf("A carta 1 (%s - Densidade demográfica: %.2f ) Venceu!\n",nomeCidade1,densi_popu1);
     }else if (densi_popu2 < densi_popu1){
       printf("A carta 2 (%s - Densidade demográfica: %.2f ) Venceu!\n",nomeCidade2,densi_popu2);
     }else{
       printf("Empate!\n");
     }
       break;
default:
       printf("Opção invalida!\n");
       break;
}

   return 0;
}
