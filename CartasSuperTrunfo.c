#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Willian Choy

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: Estado, código da carta, nome da cidade, população, área, pib e pontos turísticos.
    //CARTA1
    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int npontost;
    //adicionado 2 variaveis novas para calculo
    float denpopu; 
    float pibpercap;
    
    // Cadastro da Carta 1
    printf("Digite um Estado  (Apenas 1 Letra: ex: A): ");
    scanf("%c", &estado);
    printf("Digite o codigo (Ex. A01): ");
    scanf("%s", codigo);
    printf("Digite uma cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Qual o PIB: (Se for em Bilhoes, coloque todos os numeros)  ");
    scanf(" %f", &pib);
    printf("Quantos pontos turisticos tem? ");
    scanf("%d", &npontost);
    //Calculo do pibpercapita e densidade populacional
    denpopu = populacao / area;
    pibpercap = pib / populacao;
    float superpoder1 = (populacao+area+pib+npontost+(1.0/denpopu) + pibpercap);
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("EXIBINDO RESULTADOS DA CARTA %s\n", codigo);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", npontost);
    printf("Densidade populacional: %.2f\n", denpopu);
    printf("PIB per capita: %.2f\n", pibpercap);
    printf("SUPERPODER: %.2f\n", superpoder1);
        // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: Estado, código da carta, nome da cidade, população, área, pib e pontos turísticos.
    //CARTA2
    char estado2;
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int npontost2;
    //adicionado 2 variaveis novas para calculo
    float denpopu2;
    float pibpercap2;
    
     
    // Cadastro da Carta 2
    printf("Digite o Estado 2 (Apenas 1 Letra: ex: B): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo (Ex. A01): ");
    scanf("%s", codigo2);
    printf("Digite uma cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area2);
    printf("Qual o PIB: (Se for em Bilhoes, coloque todos os numeros) ");
    scanf(" %f", &pib2);
    printf("Quantos pontos turisticos tem? ");
    scanf("%d", &npontost2);
    //Calculo do pibpercapita e densidade populacional  e superpoder
    denpopu2 = populacao2 / area2;
    pibpercap2 = pib2 / populacao2;
    float superpoder2 = (populacao2+area2+pib2+npontost2+(1.0/denpopu2) + pibpercap2);
    
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("EXIBINDO RESULTADOS DA CARTA %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", npontost2);
    printf("Densidade populacional: %.2f\n", denpopu2);
    printf("PIB per capita: %.2f\n", pibpercap2);
    printf("SUPERPODER: %.2f\n", superpoder2);
 
    //Criando menu de escolha
    int opcao;
    printf("**** DIGITE A OPÇÃO PARA COMPARAR ****\n");
    printf("--- DIGITE 1 PARA VER POPULAÇÃO\n");
    printf("--- DIGITE 2 PARA VER AREA\n");
    printf("--- DIGITE 3 PARA VER PIB\n");
    printf("--- DIGITE 4 PARA VER PONTOS TURISTICOS\n");
    printf("--- DIGITE 5 PARA VER DENSIDADE POPULACIONAL\n");
    printf("--- DIGITE 6 PARA VER PIB PERCAPITA\n");
    printf("--- DIGITE 7 PARA VER SUPER PODER\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("**** RESULTADO DA POPULAÇÃO *****\n");
        if (populacao > populacao2){printf("População - Carta 1 - VENCEU!\n");}else if (populacao < populacao2){printf("População - Carta 2 - VENCEU\n");
    }
     else{
        printf("População - EMPATOU!\n");}
        break;
    
    case 2:
        printf("**** RESULTADO DA AREA *****\n");

        if (area > area2){printf("Area - Carta 1 - VENCEU\n");}else if (area < area2)
        {
            printf("Area - Carta 2 - VENCEU!\n");
        }
            else{
            printf("Area - EMPATOU!\n");}
            break;

    case 3:
        printf("**** RESULTADO DO PIB *****\n");
        if (pib > pib2){printf("PIB - Carta 1 - VENCEU\n");}else if (pib < pib2)
        {
            printf("PIB - Carta 2 - VENCEU!\n");
        }   
        else{
            printf("PIB - EMPATOU!\n");
        }
            break;
    
    case 4:
        printf("**** RESULTADO DO PONTOS TURÍSTICOS *****\n");
        if (npontost > npontost2){printf("Pontos Turisticos - Carta 1 - VENCEU\n");}else if (npontost < npontost2)
        {
        printf("Pontos Turisticos - Carta 2 - VENCEU!\n");
        }
        
        else{
            printf("Pontos Turisticos - EMPATOU!\n");
        }
        break;    

    case 5:
        printf("**** RESULTADO DA DENSIDADE POPULACIONAL *****\n");
        if (denpopu < denpopu2){printf("Densidade populacional - Carta 1 - VENCEU\n");}else if (denpopu > denpopu2)
        {
            printf("Densidade populacional - Carta 2 - VENCEU!\n");
        }
        
        else{
            printf("Densidade populacional EMPATOU!\n");
        }
        break;    

    case 6:
        printf("**** RESULTADO DO PIB PERCAPITA *****\n");
        if (pibpercap > pibpercap2){printf("PIB per capita - Carta 1 - VENCEU\n");}else if (pibpercap < pibpercap2)
        {
            printf("PIB per capita - Carta 2 - VENCEU!\n");
        }
        
        else{
            printf("PIB per capita EMPATOU!\n");
        }
        
        break;    
    case 7:
        printf("**** RESULTADO DO SUPERPODER *****\n");
        if (superpoder1 > superpoder2){printf("Super poder - Carta 1 - VENCEU\n");}else if (superpoder1 < superpoder2)
        {
            printf("Super poder - Carta 2 - VENCEU!\n");
        }
        
        else{
            printf("Super poder - EMPATOU!\n");
        }
            
        break;    

    default:
        printf("OPÇÃO INVÁLIDA!");
        break;
    }

    //jogador1- escolhe 2 atributos (população, area, pib, pontos turisticos, densidade, pibpercap, superpoder)
    //jogador2- escolhe 2 atributos.(população, area, pib, pontos turisticos, densidade, pibpercap, superpoder)
    //comparar somando os 2; maior vence.exceto densidade populacional;
    
    int pontosJ1 = 0, pontosJ2 = 0;
    //int escolha;
    int j1escolha1, j1escolha2, j2escolha1, j2escolha2;
    
    // JOGADOR 1 - ESCOLHA 1
    
    printf("\n**** Jogador 1 - escolha o ATRIBUTO 1 ****\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &j1escolha1);
    
    
    switch (j1escolha1) {
        case 1:
         if (populacao > populacao2) { pontosJ1++; } else if (populacao < populacao2) { pontosJ2++; } break;
        case 2:
         if (area > area2) { pontosJ1++; } else if (area < area2) { pontosJ2++; } break;
        case 3:
         if (pib > pib2) { pontosJ1++; } else if (pib < pib2) { pontosJ2++; } break;
        case 4:
         if (npontost > npontost2) { pontosJ1++; } else if (npontost < npontost2) { pontosJ2++; } break;
        case 5: 
        if (denpopu < denpopu2) { pontosJ1++; } else if (denpopu > denpopu2) { pontosJ2++; } break;
        case 6:
         if (pibpercap > pibpercap2) { pontosJ1++; } else if (pibpercap < pibpercap2) { pontosJ2++; } break;
        case 7:
         if (superpoder1 > superpoder2) { pontosJ1++; } else if (superpoder1 < superpoder2) { pontosJ2++; } break;
        default:
         printf("Opção inválida!\n");
    }
    
    
    // JOGADOR 1 - ESCOLHA 2
    
    printf("\n**** Jogador 1 - escolha o ATRIBUTO 2 (não pode ser igual à primeira escolha) ****\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &j1escolha2);
    
    if (j1escolha1 == j1escolha2)
    {
        printf("Escolha igual não permitido!\n");
        return 0;
    }else{
    
    switch (j1escolha2) {
        case 1:
         if (populacao > populacao2) { pontosJ1++; } else if (populacao < populacao2) { pontosJ2++; } break;
        case 2:
         if (area > area2) { pontosJ1++; } else if (area < area2) { pontosJ2++; } break;
        case 3:
         if (pib > pib2) { pontosJ1++; } else if (pib < pib2) { pontosJ2++; } break;
        case 4:
         if (npontost > npontost2) { pontosJ1++; } else if (npontost < npontost2) { pontosJ2++; } break;
        case 5: 
        if (denpopu < denpopu2) { pontosJ1++; } else if (denpopu > denpopu2) { pontosJ2++; } break;
        case 6:
         if (pibpercap > pibpercap2) { pontosJ1++; } else if (pibpercap < pibpercap2) { pontosJ2++; } break;
        case 7: 
        if (superpoder1 > superpoder2) { pontosJ1++; } else if (superpoder1 < superpoder2) { pontosJ2++; } break;
        default: 
        printf("Opção inválida!\n");
    }
    }
    
    
    // JOGADOR 2 - ESCOLHA 1
    
    printf("\n**** Jogador 2 - escolha o ATRIBUTO 1 ****\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &j2escolha1);
    
    switch (j2escolha1) {
        case 1:
         if (populacao > populacao2) { pontosJ1++; } else if (populacao < populacao2) { pontosJ2++; } break;
        case 2: 
        if (area > area2) { pontosJ1++; } else if (area < area2) { pontosJ2++; } break;
        case 3: 
        if (pib > pib2) { pontosJ1++; } else if (pib < pib2) { pontosJ2++; } break;
        case 4: 
        if (npontost > npontost2) { pontosJ1++; } else if (npontost < npontost2) { pontosJ2++; } break;
        case 5: 
        if (denpopu < denpopu2) { pontosJ1++; } else if (denpopu > denpopu2) { pontosJ2++; } break;
        case 6:
         if (pibpercap > pibpercap2) { pontosJ1++; } else if (pibpercap < pibpercap2) { pontosJ2++; } break;
        case 7:
         if (superpoder1 > superpoder2) { pontosJ1++; } else if (superpoder1 < superpoder2) { pontosJ2++; } break;
        default: printf("Opção inválida!\n");
    }
    
    
    // JOGADOR 2 - ESCOLHA 2
    
    printf("\n**** Jogador 2 - escolha o ATRIBUTO 2 (Não pode ser igual a escolha 1)****\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &j2escolha2);

    if (j2escolha2 == j2escolha1)
    {
        printf("Escolha igual não permitido!\n");
    }else{
    
    
    switch (j2escolha2) {
        case 1: 
        if (populacao > populacao2) { pontosJ1++; } else if (populacao < populacao2) { pontosJ2++; } break;
        case 2:
         if (area > area2) { pontosJ1++; } else if (area < area2) { pontosJ2++; } break;
        case 3:
         if (pib > pib2) { pontosJ1++; } else if (pib < pib2) { pontosJ2++; } break;
        case 4:
         if (npontost > npontost2) { pontosJ1++; } else if (npontost < npontost2) { pontosJ2++; } break;
        case 5:
         if (denpopu < denpopu2) { pontosJ1++; } else if (denpopu > denpopu2) { pontosJ2++; } break;
        case 6: 
        if (pibpercap > pibpercap2) { pontosJ1++; } else if (pibpercap < pibpercap2) { pontosJ2++; } break;
        case 7: 
        if (superpoder1 > superpoder2) { pontosJ1++; } else if (superpoder1 < superpoder2) { pontosJ2++; } break;
        default:
         printf("Opção inválida!\n");
    }
    
    }
    // RESULTADO FINAL
    
    printf("\nPLACAR FINAL:\n");
    printf("Jogador 1: %d pontos\n", pontosJ1);
    printf("Jogador 2: %d pontos\n", pontosJ2);
    
    if (pontosJ1 > pontosJ2) {
        printf(" Jogador 1 venceu!\n");
    } else if (pontosJ2 > pontosJ1) {
        printf(" Jogador 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
     
    return 0;
      
     

    

    return 0;
}