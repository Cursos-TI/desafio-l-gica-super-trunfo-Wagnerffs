#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Definição das variáveis para armazenar as propriedades das cidades
   
// Você pode utilizar o código do primeiro desafio


     //criação das variáveis;
    char estado1[20], estado2[20], cidade1[20], cidade2[20];
    int cod1, cod2, turismo1, turismo2;
    float pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    double densidade1, densidade2; //população / pela area;
    float pibpc1, pibpc2; //pib / pela população;
    

    //inicializando as variáveis;
    estado1 = "para";
    estado2 = "para";
    cidade1 = "belem";
    cidade2 = "belem";
    cod1 = 25;
    cod2 = 25;
    pop1 = 360,00;
    pop2 = 360,00;
    area1 = 360.000;
    area2 = 360.000;
    pib1 = 360.000;
    pib2 = 360.000;
    turismo1 = 25;
    turismo2 = 25;
  
     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //criação das entradas e saídas jogador A; 
    printf("Digite o estado do jogador A:\n");
    scanf("%s", &estado1);

    printf("Digite o nome da cidade do jogador A\n");
    scanf("%s", &cidade1);

    printf("Digite o código da cidade do jogador A:\n");
    scanf("%d", &cod1);

    printf("Qual é a população?\n");
    scanf("%f", &pop1);

    printf("Qual é a área\n");
    scanf("%f", &area1);

    printf("Qual o PIB\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos\n");
    scanf("%d", &turismo1);

     //criação das entradas e saídas jogador B; 
    printf("Digite o estado do jogador B:\n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade do jogador B\n");
    scanf("%s", &cidade2);
    
    printf("Digite o código da cidade do jogador B:\n");
    scanf("%d", &cod2);

    printf("Qual é a população?\n");
    scanf("%f", &pop2);

    printf("Qual é a área\n");
    scanf("%f", &area2);

    printf("Qual o PIB\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos\n");
    scanf("%d", &turismo2);

    //atributo1;
    //atributo2;
    //atributo3;
   // atributo4; 
    
    printf("Escolha qual atributo será comparado!!!");


    densidade1 =  pop1 / area1;
    densidade2 =  pop2 / area2;
    pibpc1 = pib1 / pop1;
    pibpc2 = pib2 / pop2;

    
    // Exibição dos Dados das Cartas;
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //Exibição dos dados
    printf("OS DADOS DO JOGADOR 'A' SÃO:\n\n");

    printf("O estado do jogador A é: %s\n", estado1);
    printf("O código da cidade 01 é: %d\n", cod1);
    printf("O nome da cidade é: %s\n", cidade1);
    printf("A população é de: %.2f milhões\n", pop1);
    printf("A área é: %.3f km2\n", area1);
    printf("O PIB é: %.3f\n", pib1);    
    printf("A qtde de pontos tuirísticos: %d\n", turismo1);
    printf("A densidade populacional é de: %.3f\n", densidade1);
    printf("O PIB per capita é: %.3f\n\n", pibpc1);

    printf("OS DADOS DO JOGADOR 'B' SÃO:\n\n");

    printf("O estado do jogador B é: %s\n", estado2);
    printf("O código da cidade B é: %d\n", cod2);
    printf("O nome da cidade é: %s\n", cidade2);
    printf("A população é de: %.2f milhões\n", pop2);
    printf("A área é: %.3f km2\n", area2);
    printf("O PIB é: %.3f\n", pib2);    
    printf("A qtde de pontos tuirísticos: %d\n", turismo2);
    printf("A densidade populacional é de: %.3f\n", densidade2);
    printf("O PIB per capita é: %.3f\n\n", pibpc2);

    if(pop1 > pop2){
        printf("A cidade do jogador A é mais populosa\n\n");
    }else{
        printf("A cidade do jogador B é mais populosa\n\n");
    } if(pop1 == pop2){
        printf("A população de ambas são iguais!\n\n");

    }
    if(area1 > area2){
        printf("A área da cidade do jogador A é maior\n\n");
    }else{
        printf("A área da cidade do jogador B é maior\n\n");
    }if(area1 == area2){
        printf("A área de ambas são iguais!\n\n");
    }

    if(densidade1 < densidade2){
        printf("A cidade do jogador A tem a menor densidade populacionaln\n");
    }else{
        printf("A cidade do jogador B tem a menor densidade populacional\n\n");
    }if(densidade1 == densidade2){
        printf("A densidade populacional de ambas são iguais!\n\n");
    }

    if(pib1 > pib2){
        printf("A cidade do jogador A tem o maior PIB\n");
    }else{
        printf("A cidade do jogador B tem o maior PIB\n\n");
    }if(pib1 == pib2){
        printf("O PIB de ambas são iguais!\n\n");
    }

    if(pibpc1 > pibpc2){
        printf("O PIB per capita da cidade do jogador A é maior\n");
    }else{
        printf("O PIB per capita da cidade do jogador B é maior");
    }if(pibpc1 == pibpc2){
        printf("O PIB per capita de ambas são iguais!\n\n");
    }

    if(turismo1 > turismo2){
        printf("A cidade do jogador A tem mais pontos turísticos\n");
    }else{
        printf("A cidade do jogador B tem mais pontos turísticos\n\n");
    }if(turismo1 == turismo2){
        printf("A quantidade de pontos turísticos de ambas são iguais!\n\n");
    }

    



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

    }