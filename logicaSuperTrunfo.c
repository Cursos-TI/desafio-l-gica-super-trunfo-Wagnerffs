#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Definição das variáveis para armazenar as propriedades das cidades
   
// Você pode utilizar o código do primeiro desafio


     //criação das variáveis;
    char estado1, estado2, cidade1, cidade2;
    int cod1, cod2, turismo1, turismo2;
    float pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    double densidade1, densidade2; //população / pela area;
    float pibpc1, pibpc2; //pib / pela população;
    

    inicializando as variáveis;
    estado1 = "para";
    estado2 = "para";
    cidade1 = "belem";
    cidade2 = "belem;"
    cod1 = 25;
    cod2 = 25;
    turismo1 = 25;
    turismo2 = 25;
  
     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //criação das entradas e saídas; 
    printf("Digite o estado do jogador A:\n");
    scanf("%s", &estado1);

    printf("Digite o nome da cidade do jogador A\n");
    scanf("%s", &cidade1);

    //printf("Digite o código da cidade:\n");
    //scanf("%d", &cod);

    printf("Qual é a população?\n");
    scanf("%.2f", &pop);

    printf("Qual é a área\n");
    scanf("%.3f", &area);

    printf("Qual o PIB\n");
    scanf("%.3f", &pib);

    printf("Quantos pontos turísticos\n");
    scanf("%d", &turismo);

    densidade1 =  pop / area;
    densidade2 =  pop / area;
    pibpc1 = pib / pop;
    pibpc2 = pib / pop;

    
    // Exibição dos Dados das Cartas;
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //Exibição dos dados
    printf("O estado do jogador 01 é: %s\n", estado1);
    printf("O código da cidade 01 é: %d\n", cod);
    printf("O nome da cidade é: %s\n", nome);
    printf("A população é de: %d milhões\n", pop);
    printf("A área é: %.3f km2\n", area);
    printf("O PIB é: %.3f\n", pib);    
    printf("A qtde de pontos tuirísticos: %d\n", turismo);
    printf("A densidade populacional é de: %.3f\n", densidade);
    printf("O PIB per capita é: %.3f\n", pibpc);

    return 0;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
