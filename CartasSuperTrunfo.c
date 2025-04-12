#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis principais do jogador e do computador
    int escolhaJogador = 0;
    int escolhaJogador2 = 0;                 
    int escolhaComputador = 0;
    int escolhaComputador2 = 0;
    int resultado = 0;

    // Dados da carta do jogador
    char estado[] = "Ceara";
    char cidade[] = "Fortaleza";
    int populacao = 2428708;
    float pib = 73430000000.00;
    float area = 312353.00;
    int pontos_turisticos = 50;
    char codigo_da_carta[] = "A01";
    float dens_pop = populacao / area;
    float pib_per = pib / populacao;
    float super_p = populacao + pib + area + pontos_turisticos + dens_pop + pib_per;

    // Dados da carta do computador
    char estado2[] = "Minas Gerais";
    char cidade2[] = "Belo Horizonte";
    int populacao2 = 2315560;
    float pib2 = 1058296750.53;
    float area2 = 331354;
    int pontos_turisticos2 = 12;
    char codigo_da_carta2[] = "B01";
    float dens_pop2 = populacao2 / area2;
    float pib_per2 = pib2 / populacao2;
    float super_p2 = populacao2 + pib2 + area2 + pontos_turisticos2 + dens_pop2 + pib_per2;

    printf("Bem vindo ao super trunfo!\n\n");

    // Mostra carta do jogador
    printf("Carta do Jogador:\n");
    printf(" | Estado: %s\n", estado);
    printf(" | Código da Carta: %s\n", codigo_da_carta);
    printf(" | Cidade: %s\n", cidade);
    printf(" |1. População: %d\n", populacao);
    printf(" |2. Área: %.2f km²\n", area);
    printf(" |3. PIB: R$ %.2f\n", pib);
    printf(" |4. Pontos Turísticos: %d\n", pontos_turisticos);
    printf(" |5. Densidade Populacional: %.2f\n", dens_pop);
    printf(" |6. PIB Percápita: %.2f\n", pib_per);
    printf(" |7. Super Poder: %.2f\n\n", super_p);

    // Entrada dos dois atributos diferentes
    printf("Escolha o Primeiro Atributo:\n");
    scanf("%d", &escolhaJogador);

    printf("Escolha o Segundo Atributo:\n");
    scanf("%d", &escolhaJogador2);

    if (escolhaJogador == escolhaJogador2) {
        printf("Você não pode escolher os mesmos atributos!\n");
        return 0;
    }

    // Mostra os atributos escolhidos pelo jogador
    printf("\nAtributos escolhidos pelo jogador:\n");
    switch (escolhaJogador) {
        case 1: printf("|População: %d\n", populacao); break;
        case 2: printf("|Área: %.2f km²\n", area); break;
        case 3: printf("|PIB: R$ %.2f\n", pib); break;
        case 4: printf("|Pontos Turísticos: %d\n", pontos_turisticos); break;
        case 5: printf("|Densidade Populacional: %.2f\n", dens_pop); break;
        case 6: printf("|PIB Percápita: %.2f\n", pib_per); break;
        case 7: printf("|Super Poder: %.2f\n", super_p); break;
    }

    switch (escolhaJogador2) {
        case 1: printf("|População: %d\n", populacao); break;
        case 2: printf("|Área: %.2f km²\n", area); break;
        case 3: printf("|PIB: R$ %.2f\n", pib); break;
        case 4: printf("|Pontos Turísticos: %d\n", pontos_turisticos); break;
        case 5: printf("|Densidade Populacional: %.2f\n", dens_pop); break;
        case 6: printf("|PIB Percápita: %.2f\n", pib_per); break;
        case 7: printf("|Super Poder: %.2f\n", super_p); break;
    }

    // Sorteio das escolhas do computador
    srand(time(0));
    escolhaComputador = rand() % 7 + 1;
    escolhaComputador2 = rand() % 7 + 1;

    // Garante que não sejam iguais
    if (escolhaComputador == escolhaComputador2) {
        escolhaComputador2 = (escolhaComputador2 % 7) + 1;
    }

    // Mostra carta do computador
    printf("\nCarta do Computador:\n");
    printf(" | Estado: %s\n", estado2);
    printf(" | Código da Carta: %s\n", codigo_da_carta2);
    printf(" | Cidade: %s\n\n", cidade2);

    printf("Atributos escolhidos pelo computador:\n");
    switch (escolhaComputador) {
        case 1: printf("|População: %d\n", populacao2); break;
        case 2: printf("|Área: %.2f km²\n", area2); break;
        case 3: printf("|PIB: R$ %.2f\n", pib2); break;
        case 4: printf("|Pontos Turísticos: %d\n", pontos_turisticos2); break;
        case 5: printf("|Densidade Populacional: %.2f\n", dens_pop2); break;
        case 6: printf("|PIB Percápita: %.2f\n", pib_per2); break;
        case 7: printf("|Super Poder: %.2f\n", super_p2); break;
    }

    switch (escolhaComputador2) {
        case 1: printf("|População: %d\n", populacao2); break;
        case 2: printf("|Área: %.2f km²\n", area2); break;
        case 3: printf("|PIB: R$ %.2f\n", pib2); break;
        case 4: printf("|Pontos Turísticos: %d\n", pontos_turisticos2); break;
        case 5: printf("|Densidade Populacional: %.2f\n", dens_pop2); break;
        case 6: printf("|PIB Percápita: %.2f\n", pib_per2); break;
        case 7: printf("|Super Poder: %.2f\n", super_p2); break;
    }

    // Atribui os valores para comparação
    float valorJogador1 = escolhaJogador == 1 ? populacao :
                          escolhaJogador == 2 ? area :
                          escolhaJogador == 3 ? pib :
                          escolhaJogador == 4 ? pontos_turisticos :
                          escolhaJogador == 5 ? dens_pop :
                          escolhaJogador == 6 ? pib_per : super_p;

    float valorJogador2 = escolhaJogador2 == 1 ? populacao :
                          escolhaJogador2 == 2 ? area :
                          escolhaJogador2 == 3 ? pib :
                          escolhaJogador2 == 4 ? pontos_turisticos :
                          escolhaJogador2 == 5 ? dens_pop :
                          escolhaJogador2 == 6 ? pib_per : super_p;

    float valorComputador1 = escolhaComputador == 1 ? populacao2 :
                             escolhaComputador == 2 ? area2 :
                             escolhaComputador == 3 ? pib2 :
                             escolhaComputador == 4 ? pontos_turisticos2 :
                             escolhaComputador == 5 ? dens_pop2 :
                             escolhaComputador == 6 ? pib_per2 : super_p2;

    float valorComputador2 = escolhaComputador2 == 1 ? populacao2 :
                              escolhaComputador2 == 2 ? area2 :
                              escolhaComputador2 == 3 ? pib2 :
                              escolhaComputador2 == 4 ? pontos_turisticos2 :
                              escolhaComputador2 == 5 ? dens_pop2 :
                              escolhaComputador2 == 6 ? pib_per2 : super_p2;

    float totalJogador = 0;
    float totalComputador = 0;

    // Soma os atributos com a exceção da densidade
    totalJogador += (escolhaJogador == 5) ? -valorJogador1 : valorJogador1;
    totalJogador += (escolhaJogador2 == 5) ? -valorJogador2 : valorJogador2;

    totalComputador += (escolhaComputador == 5) ? -valorComputador1 : valorComputador1;
    totalComputador += (escolhaComputador2 == 5) ? -valorComputador2 : valorComputador2;

    // Resultado final
    printf("\nResultado:\n");
    printf("Total do Jogador (%s - %s): %.2f\n", estado, cidade, totalJogador);
    printf("Total do Computador (%s - %s): %.2f\n", estado2, cidade2, totalComputador);

    resultado = totalJogador > totalComputador ? 1 :
                totalJogador < totalComputador ? -1 : 0;

    if (resultado == 1) {
        printf("Você venceu com a cidade %s (%s)!\n", cidade, estado);
    } else if (resultado == -1) {
        printf("O computador venceu com a cidade %s (%s)!\n", cidade2, estado2);
    } else {
        printf("Empate entre %s (%s) e %s (%s)!\n", cidade, estado, cidade2, estado2);
    }

    return 0;
}