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
    printf("Digite um Estado (Apenas 1 Letra: ex: S): ");
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
    printf("Digite o Estado (Apenas 1 Letra: ex: S): ");
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
    //Calculo do pibpercapita e densidade populacional
    denpopu2 = populacao2 / area2;
    pibpercap2 = pib2 / populacao2;
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

    //comparando valores da carta 1 com a 2. Sempre utilizando carta1 ou A > que carta 2 ou B. Se resultado for 1, a carta A vence e se resultado for 0 a B vence.
    float resppopu = populacao > populacao2;
    float resarea = area > area2;
    float respib = pib > pib2;
    float respturistico = npontost > npontost2;
    float respdensidade = denpopu < denpopu2;
    float resppibpercapita = pibpercap > pibpercap2;
    float superpoder1 = (populacao+area+pib+npontost+(1.0/denpopu) + pibpercap);
    float superpoder2 = (populacao2+area2+pib2+npontost2+(1.0/denpopu2) + pibpercap2);
    float superpodert = superpoder1 > superpoder2;

    printf("**** RESULTADO DAS COMPARAÇÕES *****\n");
    if (resppopu == 1){printf("População - Carta 1 - VENCEU!\n");} else{
        printf("População - Carta 2 - VENCEU!\n");}

    if (resarea == 1){printf("Area - Carta 1 - VENCEU\n");}else{
        printf("Area - Carta 2 - VENCEU!\n");
    }
    if (respib == 1){printf("PIB - Carta 1 - VENCEU\n");}else{
        printf("PIB - Carta 2 - VENCEU!\n");
    }
    if (respturistico == 1){printf("Pontos Turisticos - Carta 1 - VENCEU\n");}else{
        printf("Pontos Turisticos - Carta 2 - VENCEU!\n");
    }
     if (respdensidade == 1){printf("Densidade populacional - Carta 1 - VENCEU\n");}else{
        printf("Densidade populacional - Carta 2 - VENCEU!\n");
    }
      if (resppibpercapita == 1){printf("PIB per capita - Carta 1 - VENCEU\n");}else{
        printf("PIB per capita - Carta 2 - VENCEU!\n");
    }
     if (superpodert == 1){printf("Super poder - Carta 1 - VENCEU\n");}else{
        printf("Super poder - Carta 2 - VENCEU!\n");
    }

    

    return 0;
}