/*
  Super Trunfo de Cidades - Cadastro de Cartas
  Autor: [Bruno Mazini de Almeida]
  Data: [19/10/2025]
  Descrição: Programa que cadastra e exibe duas cartas do jogo Super Trunfo com dados de cidades - Desafio: nível novato.
*/

#include <stdio.h>
#include <string.h>

int main (){

//Variáveis definidas para as duas cartas
char estado1, estado2;
char codigoCarta1 [50], codigoCarta2 [50];
char nomeCidade1 [50], nomeCidade2 [50];
int populacao1, populacao2; 
int pontosTuristicos1, pontosTuristicos2;
float area1, area2;
float pib1, pib2;

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
scanf("%d", &populacao1);

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
scanf("%d", &populacao2);

printf("Digite a area da cidade em quilometros quadrados: ");
scanf("%f", &area2);

printf("Digite o PIB da cidade (em bilhoes de reais): ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);

//Exibindo dados da primeira carta 
printf("------- Resultados da primeira carta -------\n");
printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigoCarta1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f quilometros quadrados\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);


//Exibindo dados da segunda carta 
printf("\n------- Resultados da segunda carta -------\n");
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigoCarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f quilometros quadrados\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}