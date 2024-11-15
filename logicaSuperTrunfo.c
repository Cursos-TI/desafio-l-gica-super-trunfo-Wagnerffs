#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Definição das variáveis para armazenar as propriedades das cidades
   
// Você pode utilizar o código do primeiro desafio


     //criação das variáveis;
    char estado1[50];
    char estado2[50];
    char cidade1[50];
    char cidade2[50];
    int cod1, cod2, turismo1, turismo2;
    float pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    double densidade1, densidade2; //população / pela area;
    float pibpc1, pibpc2; //pib / pela população;
    

    //inicializando as variáveis;
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

     int c1 = 10;
     int c2 = 10;
     char atributo[20];
    
    printf("Escolha qual atributo será comparado!!!\n\n");
    printf("1-População.\n");
    printf("2-Área.\n");
    printf("3-PIB.\n");
    printf("4-Pontos turísticos.\n");
    printf("5-Densidade populacional.\n");
    printf("6-PIB per capita.\n");

    scanf("%d", &c1);

    switch (c1)
    {
    case 1:
      printf("O atributo a ser comparado será: População!\n\n");
      break;
    case 2: 
      printf("O atributo a ser comparado será: Área!\n\n");
      break;
    case 3:
      printf("O atributo a ser comparado será: PIB!\n\n");
      break;
    case 4:
      printf("O atributo a ser comparado será: Pontos turísticos!\n\n");
      break;
    case 5: 
      printf("O atributo a ser comparado será: Densidade populacional!\n\n");
      break;
    case 6: 
      printf("O atributo a ser comparado será: PIB per capita!\n\n");
      break;
         
    default:printf("*** Opção inválida ***\n\n");
      break;
    }

    
    densidade1 =  pop1 / area1;
    densidade2 =  pop2 / area2;
    pibpc1 = pib1 / pop1;
    pibpc2 = pib2 / pop2;
    //cartavencedora;

    
    // Exibição dos Dados das Cartas;
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //Exibição dos dados
    printf("OS DADOS DO JOGADOR 'A' SÃO:\n\n");

    printf("O estado do jogador A é: %s\n", estado1);
    printf("O código da cidade A é: %d\n", cod1);
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
    
    
    switch (c1)
    {
      case 1:
       if(pop1 == pop2)
     printf("Ambas tem a mesma população.\n");
     else
        if(pop1 > pop2)
        printf("O jogador 'A' é o VENCEDOR, a cidade é mais populosa\n");
        else 
        printf("O jogador 'B' é o VENCEDOR, a cidade é mais populosa\n");
      break;

      
      case 2:
       if(area1 == area2)
        printf("Ambas tem a mesma área!\n");
     else
        if(area1 > area2)
        printf("O jogador 'A' é o VENCEDOR, a área da sua cidade é maior\n");
        else
        printf("O jogador 'B' é o VENCEDOR, a área da sua cidade é maior\n");
      break;

      case 3:
       if(pib1 == pib2)
        printf("Ambas as cidades tem o mesmo PIB!\n");
     else
        if(pib1 > pib2)
        printf("O jogador 'A' é o vencedor, pois tem o maior PIB\n");
        else
        printf("O jogador 'B' é o vencedor, pois tem o maior PIB\n");
      break;   

      case 4:
      if(turismo1 == turismo2)
        printf("Ambas ten a nesna quantidade de pontos turísticos!\n");
     else
        if (turismo1 > turismo2)
        printf("O jogador 'A' é o vencedor, sua cidade tem mais pontos turísticos\n");
        else       
        printf("O jogador 'B' é o vencedor, sua cidade tem mais pontos turísticos\n");
      break;  

      case 5:
       if(densidade1 == densidade2)
        printf("Ambas tem a mesma densidade populacional!\n");
     else
        if(densidade1 > densidade2)
        printf("O jogador 'A' é o vencedor, sua cidade tem a menor densidade populacional\n");
        else
        printf(" jogador 'B' é o vencedor, sua cidade tem a menor densidade populacional\n");
      break;    

      case 6:
       if(pibpc1 == pibpc2)
        printf("Ambas tem o mesmo PIB per capita!\n");
     else
        if(pibpc1 > pibpc2)
        printf("O PIB per capita da cidade do jogador 'A' é maior, ele é o VENCEDOR!!!\n");
        else
        printf("O PIB per capita da cidade do jogador 'B' é maior, ele é o VENCEDOR!!!\n");
      break;
      
    default:
    printf("** COMPETIÇÃO ANULADA ***\n");
      break;
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