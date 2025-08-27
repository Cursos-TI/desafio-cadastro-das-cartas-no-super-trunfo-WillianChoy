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
    printf("Qual o PIB: ");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos tem? ");
    scanf("%d", &npontost);
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("EXIBINDO RESULTADOS DA CARTA %s\n", codigo);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", npontost);

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
    printf("Qual o PIB: ");
    scanf("%f", &pib2);
    printf("Quantos pontos turisticos tem? ");
    scanf("%d", &npontost2);
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("EXIBINDO RESULTADOS DA CARTA %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", npontost2);


  
    

    return 0;
}