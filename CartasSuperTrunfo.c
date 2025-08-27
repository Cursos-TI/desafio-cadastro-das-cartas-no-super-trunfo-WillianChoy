#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Willian Choy

int main() {
     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: Estado, código da carta, nome da cidade, população, área, pib e pontos turísticos.
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int npontost;
    // Cadastro das Cartas:
    printf("Digite um Estado (Sem espaço, ex: SaoPaulo): ");
    scanf("%s", estado);
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
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", npontost);

    

    return 0;
}
