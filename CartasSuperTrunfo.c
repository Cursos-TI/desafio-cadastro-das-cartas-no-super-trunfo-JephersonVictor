#include <stdio.h>


int main() {


                                     //Ao lado esquerdo estão as variaveis que serão usadas para escrever os códigos abaixo.
                                    

                                    
   char estado[] ="Ceara";               // estado que sera representado por letras A-H
   char cidade []= "Fortaleza";                      // nome da cidade
   int populacao = 2428708;                    // população da cidade
   float pib = 73430000000.00;                        // produto interno bruto da cidade
   float area = 312353.00;                       // área da cidade.
   int pontos_turisticos = 50;            // quantidade de pontos turisticos.
   char codigo_da_carta[] = "A01";          //código da carta.
   float dens_pop;                   // Densidade Populacional : População dividida pela área da cidade.
   float pib_per;                    // PIB Percápita: PIB dividido pela população.
   float super_p;                     // Super poder: soma de todas as propriedades da carta.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
    
    printf("PARA JOGAR USE O TECLADO. \n");               //intoduçao do jogo
    printf("***CARTA 1.***  \n\n");                
   
   
    printf("|Estado:  ");
    printf("%s \n", estado);    

    printf("|Codigo da Carta (Exemplo: A01):  ");            //esse texto é o que deve aparecer quando  for começar a preecher os itens das cartas, assim como os demais.
    printf("A01 \n");

    printf("|Cidade:  ");
    printf("%s \n", cidade);

    printf("|População:  ");
    printf("%d \n", populacao);

    printf("|Área em km²:  ");
    printf("%f \n", area);


    printf("|PIB:  ");
    printf("%f \n", pib);
    
    printf(" |Pontos Turisticos:  ");
    printf("%d \n", pontos_turisticos);
    
    printf(" |Densidade Populacional");
    printf("%f \n", dens_pop);
     
    printf("|PIB Percapita");
    printf("%f \n", pib_per);
    

    dens_pop =(float) (populacao / area);       //valores que serão usados para encontrar  densidade populacional
    pib_per = (float) (pib / populacao);       // valores que serão usados para encontrar PIB percápita
    super_p = (float) (populacao + pib + area + pontos_turisticos + dens_pop + pib_per);
    
    
    

    printf("|Estado: %s \n", estado);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf("|Codigo da Carta: %s \n", codigo_da_carta);
    printf("|Cidade: %s \n", cidade);
    printf("|População: %d \n", populacao);
    printf("|Área: %f km² \n", area);
    printf("|PIB: R$ %.2f \n", pib);
    printf("|Pontos Turísticos: %d \n", pontos_turisticos);
    printf("|Desnsidade Populacional: %.f \n", dens_pop );
    printf("|PIB Percápita: %.f \n", pib_per );
    printf("|Super Poder: %f \n\n" ,super_p);

    printf("***Carta2.*** \n\n");

                                     
   char estado2[] = "Minas Gerais";                  // estado que sera representado por letras A-H
   char cidade2[] = "Belo Horizonte";                      // nome da cidade
   int populacao2 =  2315560;                    // população da cidade
   float pib2 = 1058296750.53 ;                        // produto interno bruto da cidade
   float area2 = 331354;                       // área da cidade.
   int pontos_turisticos2 = 12;            // quantidade de pontos turisticos.
   char codigo_da_carta2[] = "B01";          //código da carta.
   float dens_pop2;                   // Densidade Populacional : População dividida pela área da cidade.
   float pib_per2;                    // PIB Percápita: PIB dividido pela população.
   double super_p2;                     // Super poder: soma de todas as propriedades da carta.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.



   
    printf(" |Estado:  ");
    printf("%s \n", estado2);

    printf(" |Código da Carta(Exemplo: A01):  ");              //esse texto é o que deve aparecer quando  for começar a preecher os itens das cartas, assim como os demais.
    printf("%s \n", codigo_da_carta2);

    printf(" |Digite o nome da Cidade (Exemplo: São Paulo):  ");
    printf("%s \n", cidade2);

    printf(" |Digite a População:  ");
    printf("%d \n", populacao2);

    printf(" |Digite a Área em km²:   ");
    printf("%f \n", area2);

    printf(" |Digite o PIB:  ");
    printf("%f \n", pib2);
    
    printf(" |Digite o número de pontos turísticos:  ");
    printf("%d \n", pontos_turisticos2);
    
    printf(" |Densidade Populacional  ");
    printf("%f \n", dens_pop2);
     
    printf(" |PIB Percápita:  ");
    printf("%f \n\n", pib_per2);

    dens_pop2 =(float) (populacao2 / area2);       //valores que serão usados para encontrar  densidade populacional
    pib_per2 = (float) (pib2 / populacao2);       // valores que serão usados para encontrar PIB percápita
    super_p2 = (float) (populacao2 + pib2 + area2 + pontos_turisticos2 + dens_pop2 + pib_per2);

    printf("|Estado: %s \n", estado);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf("|Codigo da Carta: %s \n", codigo_da_carta);
    printf("|Cidade: %s \n", cidade);
    printf("|População: %d \n", populacao);
    printf("|Área: %f km² \n", area);
    printf("|PIB: R$ %.2f \n", pib);
    printf("|Pontos Turísticos: %d \n", pontos_turisticos);
    printf("|Desnsidade Populacional: %.f \n", dens_pop );
    printf("|PIB Percápita: %.f \n", pib_per );
    printf("|Super Poder: %f \n\n" ,super_p);
     
    printf("|Estado: %s \n", estado2);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf("|Codigo da Carta: %s \n", codigo_da_carta2);
    printf("|Cidade: %s \n", cidade2);
    printf("|População: %d \n", populacao2);
    printf("|Área: %f km² \n", area2);
    printf("|PIB: R$ %.2f \n", pib2);
    printf("|Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("|Desnsidade Populacional: %.f \n", dens_pop2);
    printf("|PIB Percápita: %.f \n", pib_per2);
    printf("|Super Poder: %f \n\n" ,super_p2);
     
printf("*RESULTADO*: \n\n"); // 
                            // aqui sera imprimido o resultado do jogo ("Jogador 1 venceu! ou Jogador 2 venceu!".)
if(populacao > populacao2)
{printf("Joagador 1 venceu! \n");}      
else{printf("Jogador 2 venceu! \n");}
  
   if(area > area2){printf("Jogador 1 venceu! \n");}
   else{printf("Jogador 2 venceu! \n");}

   if(pib > pib2){printf("Jogador 1 venceu! \n");}
    else{printf("Jogador 2 venceu! \n");}

   if(pontos_turisticos > pontos_turisticos2){printf("Jogador 1 venceu! \n");}
   else{printf("Jogador 2 venceu! \n");}

   if(dens_pop < dens_pop2){printf("Jogador 1 venceu! \n");}
   else{printf("Jogador 2 venceu! \n");}

   if(pib_per >pib_per2){printf("Jogador 1 vneceu! \n");}
   else {printf("Jogador 2 venceu! \n");}

   if (super_p > super_p2){ printf("Jogador 1 venceu! \n");}
   else{printf("Jogador 2 venceu! \n");}
   
   printf("OBRIGADO POR JOGAR SUPER TRUNFO! \n\n");






    return 0;
}
