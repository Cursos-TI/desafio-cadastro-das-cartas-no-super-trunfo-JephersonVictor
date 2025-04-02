#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

                             

    int escolhaJogador = 0;
    int escolhaJogador2 = 0;
    int escolhaComputador = 0;
    int escolhaComputador2 = 0;                                 //Ao lado esquerdo estão as variaveis que serão usadas para escrever os códigos abaixo.
    int resultado = 0;
  char  estado[] = "Ceara";               // estado que sera representado por letras A-H
   char cidade[] = "Fortaleza";                      // nome da cidade
   int populacao = 2428708;                    // população da cidade
   float pib = 73430000000.00;                        // produto interno bruto da cidade
   float area = 312353.00;                       // área da cidade.
   int pontos_turisticos = 50;            // quantidade de pontos turisticos.
   char codigo_da_carta[] = "A01";          //código da carta.
   float dens_pop;                   // Densidade Populacional : População dividida pela área da cidade.
   float pib_per;                    // PIB Percápita: PIB dividido pela população.
   float super_p;                     // Super poder: soma de todas as propriedades da carta.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
                                    
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


    dens_pop =(float) (populacao / area);       //valores que serão usados para encontrar  densidade populacional
    pib_per = (float) (pib / populacao);       // valores que serão usados para encontrar PIB percápita
    super_p = (float) (populacao + pib + area + pontos_turisticos + dens_pop + pib_per);

    dens_pop2 =(float) (populacao2 / area2);       //valores que serão usados para encontrar  densidade populacional
    pib_per2 = (float) (pib2 / populacao2);       // valores que serão usados para encontrar PIB percápita
    super_p2 = (float) (populacao2 + pib2 + area2 + pontos_turisticos2 + dens_pop2 + pib_per2);

    
printf("Bem vindo ao super trunfo!\n\n");

    printf("Escolha uma opção:\n\n ");
  //CARTA 1
    printf("  |   Estado: %s \n", estado);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf(" |   Codigo da Carta: %s \n", codigo_da_carta);
    printf(" |   Cidade: %s \n", cidade);
    printf(" |1. População: %d \n", populacao);
    printf(" |2. Área: %f km² \n", area);
    printf(" |3. PIB: R$ %.2f \n", pib);
    printf(" |4. Pontos Turísticos: %d \n", pontos_turisticos);
    printf(" |5. Desnsidade Populacional: %.f \n", dens_pop );
    printf(" |6. PIB Percápita: %.f \n", pib_per );
    printf(" |7. Super Poder: %f \n\n" ,super_p);
    printf("Esolha o Primeiro Atributo:\n");
    scanf("%d", &escolhaJogador);
    

   printf("Escolha o Segundo Atributo:\n");
   printf("  |   Estado: %s \n", estado);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
   printf(" |   Codigo da Carta: %s \n", codigo_da_carta);
   printf(" |   Cidade: %s \n", cidade);
   printf(" |1. População: %d \n", populacao);
   printf(" |2. Área: %f km² \n", area);
   printf(" |3. PIB: R$ %.2f \n", pib);
   printf(" |4. Pontos Turísticos: %d \n", pontos_turisticos);
   printf(" |5. Desnsidade Populacional: %.f \n", dens_pop );
   printf(" |6. PIB Percápita: %.f \n", pib_per );
   printf(" |7. Super Poder: %f \n\n" ,super_p);
   printf("Esolha o Segundo Atributo:\n");
   scanf("%d", &escolhaJogador2);

resultado =  escolhaJogador != escolhaJogador2 ? 1 : 0; 

escolhaJogador == escolhaJogador2 ? printf("Voce não pode escolher os mesmos atributos\n") : printf("Os atributos são diferentes\n");

    srand(time(0));
    escolhaComputador = rand() % 7 + 1;
    printf("%d", escolhaComputador); 
    escolhaComputador2 = rand() % 7 + 1 - escolhaComputador;
    escolhaComputador =! escolhaComputador2;
switch(escolhaJogador)
{
case 1:

    printf("|População: %d \n", populacao);
    break;

    case 2:
    printf("|Área: %f km² \n", area);
    break;
    
    case 3:
    printf("|PIB: R$ %.2f \n", pib);
    break;

    case 4:
    printf("|Pontos Turísticos: %d \n", pontos_turisticos);
    break;

    case 5:
    printf("|Desnsidade Populacional: %.f \n", dens_pop );
    break;

    case 6:
    printf("PIB Percápita: %.f \n", pib_per );
    break;

    case 7:
    printf("Super Poder: %f \n" ,super_p);
    break;
 
    case 8:
    printf("Regras.");

    printf("Resgras");
    break;
    default:
    printf("Opção Invalida!\n");
break;

}
switch (escolhaJogador2) {
    case 1: // População
        if (escolhaJogador != 1) {
            if (populacao > populacao2) {
                
            } else if (populacao < populacao2) {
               
            }
        }
        break;
    case 2: // Área
        if (escolhaJogador != 2) {
            if (area > area2) {
              
            } else if (area < area2) {
        
            }
        }
        break;
    case 3: // PIB
        if (escolhaJogador != 3) {
            if (pib > pib2) {

            } else if (pib < pib2) {
                
            }
        }
        break;
    case 4: // Pontos Turísticos
        if (escolhaJogador != 4) {
            if (pontos_turisticos > pontos_turisticos2) {
              
            } else if (pontos_turisticos < pontos_turisticos2) {
                
            }
        }
        break;
    case 5: // Densidade Demográfica
        if (escolhaJogador != 5) {
            if (dens_pop < dens_pop2) {
                
            } else if (dens_pop> dens_pop2) {
              
            }
        }
        break;
    case 6: // PIB per capita
        if (escolhaJogador != 6) {
            if (pib_per > pib_per) {
              
            } else if (pib_per < pib_per2) {
           
            }
        }
        break;
}
switch (escolhaJogador2) {
    case 1: // População
        if (escolhaJogador != 1) {
            printf("População: %d \n", populacao); 
        }
        break;
    case 2: // Área
        if (escolhaJogador != 2) {
            printf("Área: %f km² \n", area);
        }
        break;
    case 3: // PIB
        if (escolhaJogador != 3) {
            printf("PIB: R$ %.2f \n", pib);
        }
        break;
    case 4: // Pontos Turísticos
        if (escolhaJogador != 4) {
            printf("Pontos Turísticos: %d \n", pontos_turisticos);
        }
        break;
    case 5: // Densidade Demográfica
        if (escolhaJogador != 5) {
            printf("Desnsidade Populacional: %.f \n", dens_pop);
        }
        break;
    case 6: // PIB per capita
        if (escolhaJogador != 6) {
            printf("PIB Percápita: %.f \n", pib_per);
        }
        break;
        printf("Digite o número do atributo: ");
        scanf("%d", &escolhaJogador2);
}

switch ( escolhaComputador)
{

case 1:

printf("População: %d \n", populacao2);
break;

case 2 :
printf("Área: %f km² \n", area2);
break;

case 3:
printf("PIB: R$ %.2f \n", pib2);
break;

case 4:
printf("Pontos Turísticos: %d \n", pontos_turisticos2);
break;

case 5:
printf("Desnsidade Populacional: %.f \n", dens_pop2 );
break;

case 6:
printf("PIB Percápita: %.f \n", pib_per2);
break;

case 7:
printf("Super Poder: %f \n" ,super_p2);
break;

default:
printf("Opção Invalida!\n");
break;
}

switch ( escolhaComputador2)
{

case 1:

printf("População: %d \n", populacao2);
break;

case 2 :
printf("Área: %f km² \n", area2);
break;

case 3:
printf("PIB: R$ %.2f \n", pib2);
break;

case 4:
printf("Pontos Turísticos: %d \n", pontos_turisticos2);
break;

case 5:
printf("Desnsidade Populacional: %.f \n", dens_pop2 );
break;

case 6:
printf("PIB Percápita: %.f \n", pib_per2);
break;

case 7:
printf("Super Poder: %f \n" ,super_p2);
break;

default:
printf("Opção Invalida!\n");
break;
}

printf("|   Estado: %s \n", estado2);                                  //Aqui esta todo material que sera cadastrado depois de preencher a carta
    printf(" |   Codigo da Carta: %s \n", codigo_da_carta2);
    printf(" |   Cidade: %s \n", cidade2);
    printf(" |1. População: %d \n", populacao2);
    printf(" |2. Área: %f km² \n", area2);
    printf(" |3. PIB: R$ %.2f \n", pib2);
    printf(" |4. Pontos Turísticos: %d \n", pontos_turisticos2);
    printf(" |5. Desnsidade Populacional: %.f \n", dens_pop2);
    printf(" |6. PIB Percápita: %.f \n", pib_per2);
    printf(" |7. Super Poder: %f \n\n" ,super_p2);
    
    
    if (escolhaJogador == 1) { // População
        if (populacao > populacao2) {
            printf("Vencedor!\n");
            printf("Estado: %s\n", estado);
            printf("Cidade: %s,\n", cidade);
            printf("Populacao: %d\n ", populacao);
        } else if (populacao2 > populacao) {
            printf("Vencedor:\n\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao %d\n", populacao2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaJogador == 2) { // Área
        if (area > area2) {
            printf("Vencedor!\n");
            printf("Estado: %s\n", estado);
            printf("Cidade: %s,\n", cidade);
            printf("Area: %.2f km²\n ", area);
        } else if (area2 > area) {
            printf("Vencedor:\n\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Area %.2f km²\n", area2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaJogador == 3) { // PIB
        if (pib > pib2) {
            printf("Vencedor!\n");
            printf("Estado: %s\n", estado);
            printf("Cidade: %s,\n", cidade);
            printf("PIB: R$ %.2f\n ", pib);
        } else if (pib2 > pib) {
            printf("Vencedor:\n\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB: R$ %.2f\n", pib2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaJogador == 4) { // Pontos Turísticos
        if (pontos_turisticos > pontos_turisticos2) {
            printf("Vencedor!\n");
            printf("Estado: %s\n", estado);
            printf("Cidade: %s,\n", cidade);
            printf("Pontos Turísticos: %d\n ", pontos_turisticos);
        } else if (pontos_turisticos2 > pontos_turisticos) {
            printf("Vencedor:\n\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Pontos Turísticos: %d\n", pontos_turisticos2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaJogador == 5) { // Densidade Populacional
        if (dens_pop > dens_pop2) {
            printf("Vencedor!\n");
            printf("Estado: %s\n", estado);
            printf("Cidade: %s,\n", cidade);
            printf("Densidade Populacional: %.2f\n ", dens_pop);
        } else if (dens_pop2 > dens_pop) {
            printf("Vencedor:\n\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %.2f\n", dens_pop2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaJogador == 6) { // PIB Per Capita
        if (pib_per > pib_per2) {
            printf("Vencedor!\n");
            printf("Estado: %s\n", estado);
            printf("Cidade: %s,\n", cidade);
            printf("PIB Per Capita: %.2f\n ", pib_per);
        } else if (pib_per2 > pib_per) {
            printf("Vencedor:\n\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB Per Capita: %.2f\n", pib_per2);
        } else {
            printf("Empate!\n");
        }
    } else if (escolhaJogador == 7) { // Super Poder
        if (super_p > super_p2) {
            printf("Vencedor!\n");
            printf("Estado: %s\n", estado);
            printf("Cidade: %s,\n", cidade);
            printf("Super Poder: %.2f\n ", super_p);
        } else if (super_p2 > super_p) {
            printf("Vencedor:\n\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Super Poder: %.2f\n", super_p2);
        } else {
            printf("Empate!\n");
        }
        if (escolhaJogador2 == 1) { // População
            if (populacao > populacao2) {
                printf("Vencedor!\n");
                printf("Estado: %s\n", estado);
                printf("Cidade: %s,\n", cidade);
                printf("Populacao: %d\n ", populacao);
            } else if (populacao2 > populacao) {
                printf("Vencedor:\n\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Populacao %d\n", populacao2);
            } else {
                printf("Empate!\n");
            }
        } else if (escolhaJogador2 == 2) { // Área
            if (area > area2) {
                printf("Vencedor!\n");
                printf("Estado: %s\n", estado);
                printf("Cidade: %s,\n", cidade);
                printf("Area: %.2f km²\n ", area);
            } else if (area2 > area) {
                printf("Vencedor:\n\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Area %.2f km²\n", area2);
            } else {
                printf("Empate!\n");
            }
        } else if (escolhaJogador2 == 3) { // PIB
            if (pib > pib2) {
                printf("Vencedor!\n");
                printf("Estado: %s\n", estado);
                printf("Cidade: %s,\n", cidade);
                printf("PIB: R$ %.2f\n ", pib);
            } else if (pib2 > pib) {
                printf("Vencedor:\n\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("PIB: R$ %.2f\n", pib2);
            } else {
                printf("Empate!\n");
            }
        } else if (escolhaJogador2 == 4) { // Pontos Turísticos
            if (pontos_turisticos > pontos_turisticos2) {
                printf("Vencedor!\n");
                printf("Estado: %s\n", estado);
                printf("Cidade: %s,\n", cidade);
                printf("Pontos Turísticos: %d\n ", pontos_turisticos);
            } else if (pontos_turisticos2 > pontos_turisticos) {
                printf("Vencedor:\n\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pontos Turísticos: %d\n", pontos_turisticos2);
            } else {
                printf("Empate!\n");
            }
        } else if (escolhaJogador2 == 5) { // Densidade Populacional
            if (dens_pop > dens_pop2) {
                printf("Vencedor!\n");
                printf("Estado: %s\n", estado);
                printf("Cidade: %s,\n", cidade);
                printf("Densidade Populacional: %.2f\n ", dens_pop);
            } else if (dens_pop2 > dens_pop) {
                printf("Vencedor:\n\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Densidade Populacional: %.2f\n", dens_pop2);
            } else {
                printf("Empate!\n");
            }
        } else if (escolhaJogador2 == 6) { // PIB Per Capita
            if (pib_per > pib_per2) {
                printf("Vencedor!\n");
                printf("Estado: %s\n", estado);
                printf("Cidade: %s,\n", cidade);
                printf("PIB Per Capita: %.2f\n ", pib_per);
            } else if (pib_per2 > pib_per) {
                printf("Vencedor:\n\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("PIB Per Capita: %.2f\n", pib_per2);
            } else {
                printf("Empate!\n");
            }
        } else if (escolhaJogador2 == 7) { // Super Poder
            if (super_p > super_p2) {
                printf("Vencedor!\n");
                printf("Estado: %s\n", estado);
                printf("Cidade: %s,\n", cidade);
                printf("Super Poder: %.2f\n ", super_p);
            } else if (super_p2 > super_p) {
                printf("Vencedor:\n\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Super Poder: %.2f\n", super_p2);
            } else {
                printf("Empate!\n");
      
        }
        }
    return 0;
}