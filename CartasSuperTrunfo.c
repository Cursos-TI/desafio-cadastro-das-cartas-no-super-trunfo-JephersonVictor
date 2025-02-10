#include <stdio.h>


int main() {


                                     //Ao lado esquerdo estão as variaveis que serão usadas para escrever os códigos abaixo.
                                    

                                    
   char estado[30];                  // estado que sera representado por letras A-H
   char cidade[20];                      // nome da cidade
   unsigned long int populacao;                    // população da cidade
   float pib;                        // produto interno bruto da cidade
   float area;                       // área da cidade.
   int pontos_turisticos;            // quantidade de pontos turisticos.
   char codigo_da_carta[3];          //código da carta.
   float dens_pop;                   // Densidade Populacional : População dividida pela área da cidade.
   float pib_per;                    // PIB Percápita: PIB dividido pela população.
   float super_p;                     // Super poder: soma de todas as propriedades da carta.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
    printf("BEM VINDO AO SUPER TRUNFO! \n");
                       //intoduçao do jogo
    printf("CARTA 1. \n");                
    printf("PARA JOGAR BASTA APENAS USAR O TECLADO. \n");
   
    printf(" Digite o nome do Estado (A-H): \n ");
    scanf("%s", &estado);

    printf("Digite o código da Carta(Exemplo: A01): \n");              //esse texto é o que deve aparecer quando  for começar a preecher os itens das cartas, assim como os demais.
    scanf("%s", &codigo_da_carta);

    printf(" Digite o nome da Cidade (Exemplo: São Paulo): \n");
    scanf("%s", &cidade);

    printf(" Digite a População: \n");
    scanf("%uld", &populacao);

    printf(" Digite a Área em km²: \n");
    scanf("%f", &area);

    printf(" Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf(" Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
    
    printf("Densidade Populacional \n");
    printf("%f", dens_pop);
     
    printf("PIB Percápita: \n");
    printf("%f", pib_per);
    

    dens_pop =(float) (populacao/ area);       //valores que serão usados para encontrar  densidade populacional
    pib_per = (float) (pib/ populacao);       // valores que serão usados para encontrar PIB percápita
    super_p = (float) (populacao + pib + area + pontos_turisticos + dens_pop + pib_per);


    printf("|Estado: %s \n", estado);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf("|Codigo da Carta: %s \n", codigo_da_carta);
    printf("|Cidade: %s \n", cidade);
    printf("|População: %d \n", populacao);
    printf("|Área: %f km² \n", area);
    printf("|PIB: R$ %.2f \n", pib);
    printf("|Pontos Turísticos: %d \n", pontos_turisticos);
    printf("|Desnsidade Populacional: %.f \n", dens_pop );
    printf("PIB Percápita: %.f \n", pib_per );
    printf("Super Poder: %f \n" ,super_p);

    printf("Carta2. \n");

                                     
   char estado2[30];                  // estado que sera representado por letras A-H
   char cidade2[20];                      // nome da cidade
   unsigned long int populacao2;                    // população da cidade
   float pib2;                        // produto interno bruto da cidade
   float area2;                       // área da cidade.
   int pontos_turisticos2;            // quantidade de pontos turisticos.
   char codigo_da_carta2[3];          //código da carta.
   float dens_pop2;                   // Densidade Populacional : População dividida pela área da cidade.
   float pib_per2;                    // PIB Percápita: PIB dividido pela população.
   double super_p2;                     // Super poder: soma de todas as propriedades da carta.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.



   
    printf(" Digite o nome do Estado (A-H): \n ");
    scanf("%s", &estado2);

    printf("Digite o código da Carta(Exemplo: A01): \n");              //esse texto é o que deve aparecer quando  for começar a preecher os itens das cartas, assim como os demais.
    scanf("%s", &codigo_da_carta2);

    printf(" Digite o nome da Cidade (Exemplo: São Paulo): \n");
    scanf("%s", &cidade2);

    printf(" Digite a População: \n");
    scanf("%uld", &populacao2);

    printf(" Digite a Área em km²: \n");
    scanf("%f", &area2);

    printf(" Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf(" Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    
    printf("Densidade Populacional \n");
    printf("%f", dens_pop2);
     
    printf("PIB Percápita: \n");
    printf("%f", pib_per2);


  printf("|Estado: %s \n", estado);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf("|Codigo da Carta: %s \n", codigo_da_carta);
    printf("|Cidade: %s \n", cidade);
    printf("|População: %d \n", populacao);
    printf("|Área: %f km² \n", area);
    printf("|PIB: R$ %.2f \n", pib);
    printf("|Pontos Turísticos: %d \n", pontos_turisticos);
    printf("|Desnsidade Populacional: %.f \n", dens_pop );
    printf("PIB Percápita: %.f \n", pib_per );
    printf("Super Poder: %f \n" ,super_p);
     
    
     
printf("RESULTADO: \n");                              // aqui sera imprimido o resultado do jogo ( o maior ponto em determinado ponto vence, rebendo numero 1)

   printf(" População: %d \n", populacao > populacao2);
   printf("Área: %d \n", area > area2);
   printf("PIB: %d \n", pib > pib2);
   printf("Pontos Turisticos: %d \n", pontos_turisticos > pontos_turisticos2);
   printf("Densidade Populacional: %d \n", dens_pop < dens_pop2);
   printf("PIB Percápita: %d \n", pib_per > pib_per2);
   printf("Super Poder: %d \n", super_p > super_p2);
   
   printf("OBRIGADO POR JOGAR SUPER TRUNFO");







    return 0;
}
