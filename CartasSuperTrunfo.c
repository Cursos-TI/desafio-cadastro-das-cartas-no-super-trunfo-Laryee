#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Carta1[10], carta2[10];

       // Carta 1

       char codigo_da_cidadeA_1[5], nomeA_1[30];
       int populacaoA_1, pontos_turisticosA_1;
       float areaA_1, pibA_1;

       //Carta 2

    char codigo_da_cidadeB_1[5], nomeB_1[30];
    int populacaoB_1, pontos_turisticosB_1;
    float areaB_1, pibB_1;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


//Carta 1
printf("Carta 1\n");
printf("Digite o estado: ");
scanf("%[^\n]", Carta1);


printf("Código: "); scanf("%4s", codigo_da_cidadeA_1);
printf("Nome da cidade: "); scanf(" %[^\n]", nomeA_1);
printf("população: "); scanf("%d", &populacaoA_1);
printf("Area (em km): "); scanf("%f", &areaA_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibA_1);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosA_1);


//Carta 2
printf("Carta 2 \n");
printf("Digite o estado: ");
scanf(" %[^\n]", carta2);

printf("Código: "); scanf("%4s", codigo_da_cidadeB_1);
printf("Nome da cidade: "); scanf(" %[^\n]", nomeB_1);
printf("Populção: "); scanf("%d", &populacaoB_1);
printf("Area (em Km): "); scanf("%f", &areaB_1);
printf("PIB (Em bilhões): "), scanf("%f", &pibB_1);
printf("Números de pontos turisticos: "), scanf("%d", &pontos_turisticosB_1);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Carta 1
printf("\n=== Dados Cadastrados da Carta 1 ===\n");
 printf("Estado: %s\n", Carta1);
    printf("Codigo: %s\n", codigo_da_cidadeA_1);
    printf("Cidade: %s - %s\n", codigo_da_cidadeA_1, nomeA_1);
    printf("População: %d habitantes\n", populacaoA_1);
    printf("Área: %.2f km²\n", areaA_1);
    printf("PIB: R$ %.2f bilhões\n", pibA_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosA_1);



    //Carta 2
printf("\n=== Dados Cadastrados da carta 2 ===\n");
printf("Estado: %s\n", carta2);
    printf("Codigo: %s\n", codigo_da_cidadeB_1);
    printf("Cidade: %s\n",nomeB_1);
    printf("População: %d\n", populacaoB_1);
    printf("Área: %.2f km²\n", areaB_1);
    printf("PIB: R$ %.2f bilhões\n", pibB_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosB_1);



    return 0;
}
