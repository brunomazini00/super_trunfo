/*
Super Trunfo - Nível Mestre 
  Autor: Bruno Mazini de Almeida
  Data: 10/12/2025
*/

#include <stdio.h>
#include <string.h> // Necessário para strcpy

int main() {
    
    char estado1, estado2;
    char codigo1[50], codigo2[50], nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, pib1, densidade1, pibPerCapita1, area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis de Apoio
    int opcao1, opcao2;
    float valorJogo1_c1, valorJogo1_c2; 
    float valorJogo2_c1, valorJogo2_c2; 
    char nomeAtributo1[50], nomeAtributo2[50];
    float soma1, soma2;

    // --- Entrada carta 1 ---
    printf("------ Carta 1 ------\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    getchar(); 
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; 
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    // --- Entrada carta 2 ---
    printf("\n------ Carta 2 ------\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    getchar(); 
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; 
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- Menu 1 ---
    printf("\n=== Escolha o primeiro atributo ===\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    printf("Escolha entre 1 e 5 : ");
    scanf("%d", &opcao1);

    switch(opcao1) {
        case 1:
            valorJogo1_c1 = (float)populacao1;
            valorJogo1_c2 = (float)populacao2;
            strcpy(nomeAtributo1, "Populacao");
            break;
        case 2:
            valorJogo1_c1 = area1;
            valorJogo1_c2 = area2;
            strcpy(nomeAtributo1, "Area");
            break;
        case 3:
            valorJogo1_c1 = pib1;
            valorJogo1_c2 = pib2;
            strcpy(nomeAtributo1, "PIB");
            break;
        case 4:
            valorJogo1_c1 = (float)pontosTuristicos1;
            valorJogo1_c2 = (float)pontosTuristicos2;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;
        case 5:
            valorJogo1_c1 = densidade1;
            valorJogo1_c2 = densidade2;
            strcpy(nomeAtributo1, "Densidade Demografica");
            break;
        default:
            printf("Opcao invalida! Usando Populacao.\n");
            valorJogo1_c1 = (float)populacao1;
            valorJogo1_c2 = (float)populacao2;
            strcpy(nomeAtributo1, "Populacao");
            opcao1 = 1;
    }

    // --- Menu 2 --- 
    // Menu dinâmico visual (não mostra o que já foi escolhido)
    printf("\n=== Escolha o segundo atributo ===\n");
    if(opcao1 != 1) printf("1. Populacao\n");
    if(opcao1 != 2) printf("2. Area\n");
    if(opcao1 != 3) printf("3. PIB\n");
    if(opcao1 != 4) printf("4. Pontos Turisticos\n");
    if(opcao1 != 5) printf("5. Densidade Demografica\n");
    
    printf("Escolha entre 1 e 5 : ");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2) {
        printf("\nVocê escolheu o mesmo atributo (%s) duas vezes!\n", nomeAtributo1);
        printf("Por favor, digite outro numero: ");
        scanf("%d", &opcao2); // Lê a nova tentativa do usuário

        // Verifica se ele errou de novo (encerra se errar)
        if (opcao1 == opcao2) {
            printf("Voce escolheu repetido novamente. O jogo sera encerrado.\n");
            return 1;
        }
    }
  
    switch(opcao2) {
        case 1:
            valorJogo2_c1 = (float)populacao1;
            valorJogo2_c2 = (float)populacao2;
            strcpy(nomeAtributo2, "Populacao");
            break;
        case 2:
            valorJogo2_c1 = area1;
            valorJogo2_c2 = area2;
            strcpy(nomeAtributo2, "Area");
            break;
        case 3:
            valorJogo2_c1 = pib1;
            valorJogo2_c2 = pib2;
            strcpy(nomeAtributo2, "PIB");
            break;
        case 4:
            valorJogo2_c1 = (float)pontosTuristicos1;
            valorJogo2_c2 = (float)pontosTuristicos2;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;
        case 5:
            valorJogo2_c1 = densidade1;
            valorJogo2_c2 = densidade2;
            strcpy(nomeAtributo2, "Densidade Demografica");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    // --- Cálculo da Soma ---
    
    float p1_c1 = (opcao1 == 5) ? (1.0f / valorJogo1_c1) : valorJogo1_c1;
    float p1_c2 = (opcao1 == 5) ? (1.0f / valorJogo1_c2) : valorJogo1_c2;

    float p2_c1 = (opcao2 == 5) ? (1.0f / valorJogo2_c1) : valorJogo2_c1;
    float p2_c2 = (opcao2 == 5) ? (1.0f / valorJogo2_c2) : valorJogo2_c2;

    soma1 = p1_c1 + p2_c1;
    soma2 = p1_c2 + p2_c2;


    printf("\n================ RESULTADOS ================\n");
    printf("%s vs %s\n\n", nomeCidade1, nomeCidade2);

    // Atributo 1
    printf("1. %s:\n", nomeAtributo1);
    printf("   %s: %.2f\n", nomeCidade1, valorJogo1_c1);
    printf("   %s: %.2f\n", nomeCidade2, valorJogo1_c2);
    
    int venceu1 = (opcao1 == 5) ? (valorJogo1_c1 < valorJogo1_c2) : (valorJogo1_c1 > valorJogo1_c2);
    printf("   -> Venceu: %s\n\n", venceu1 ? nomeCidade1 : nomeCidade2);

    // Atributo 2
    printf("2. %s:\n", nomeAtributo2);
    printf("   %s: %.2f\n", nomeCidade1, valorJogo2_c1);
    printf("   %s: %.2f\n", nomeCidade2, valorJogo2_c2);
    
    int venceu2 = (opcao2 == 5) ? (valorJogo2_c1 < valorJogo2_c2) : (valorJogo2_c1 > valorJogo2_c2);
    printf("   -> Venceu: %s\n\n", venceu2 ? nomeCidade1 : nomeCidade2);

    // Soma Final
    printf("--------------------------------------------\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    if(soma1 == soma2) {
        printf("\nResultado final: Empate!\n");
    } else {
        printf("\nResultado final: %s Venceu!\n", (soma1 > soma2) ? nomeCidade1 : nomeCidade2);
    }

    return 0;
}
