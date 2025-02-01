#include <stdio.h>


int main() {


                                     //Ao lado esquerdo estão as variaveis que serão usadas para escrever os códigos abaixo.

   char estado[30];                  // estado que sera representado por letras A-H
   char cidade[30];                  // nome da cidade
   int populacao;                    // população da cidade
   float pib;                        // produto interno bruto da cidade
   float area;                       // área da cidade
   int pontos_turisticos;            // quantidade de pontos turisticos
   char codigo_da_carta[3];          //código da carta
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
   printf("BEM VINDO AO SUPER TRUNFO! \n");                  //intoduçao do jogo
   printf("PARA JOGAR BASTA APENAS USAR O TECLADO. \n");
   
    printf(" Digite o nome do Estado (A-H): \n ");
    scanf("%s", &estado);

    printf("Digite o código da Carta(Exemplo: A01): \n");              //esse texto é o que deve quando for começar a preecher os itens das cartas, assim como os demais.
    scanf("%s", &codigo_da_carta);

    printf(" Digite o nome da Cidade (Exemplo: São Paulo): \n");
    scanf("%s", &cidade);

    printf(" Digite a População: \n");
    scanf("%d", &populacao);

    printf(" Digite a Área em km²: \n");
    scanf("%f", &area);

    printf(" Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf(" Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);


    printf("|Estado: %s \n", estado);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf("|Codigo da Carta: %s \n", codigo_da_carta);
    printf("|Cidade: %s \n", cidade);
    printf("|População: %d \n", populacao);
    printf("|Área: %f km² \n", area);
    printf("|PIB: R$ %f \n", pib);
    printf("|Pontos Turísticos: %d \n", pontos_turisticos);
   
   printf("OBRIGADO POR JOGAR SUPER TRUNFO");

    return 0;
}
