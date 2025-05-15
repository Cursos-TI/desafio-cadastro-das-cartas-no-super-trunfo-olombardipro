#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


//Declaração das variáveis tipo:
        
        //int
        int populacao, pontos_turisticos;

        //float
        float area, pib;

        //char
        char estado, codigo_carta[5], nome_cidade[15];


        //Entrada de dados carta 1 e 2
        printf("Carta 1:\n");

        //Estado
        printf("Digitar o Estado: ");
        scanf(" %c", &estado);

        //Código da Carta
        printf("Digitar o código da carta 1: ");
        scanf("%s", codigo_carta);

        //Nome da Cidade
        printf("Digitar o nome da cidade: ");
        scanf("%s", nome_cidade);

        //População
        printf("Digitar a população: ");
        scanf("%d", &populacao);

        //Área
        printf("Digitar a Área: ");
        scanf("%f", &area);

        //PIB
        printf("Digitar o PIB: ");
        scanf("%f", &pib);

        //Número de Pontos Turísticos
        printf("Digitar o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos);



        //Saída de dados Carta 1 e 2
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo_carta);
        printf("Nome da Cidade: %s\n", nome_cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);


        




    return 0;
}
