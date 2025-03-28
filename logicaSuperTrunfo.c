#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char carta1[5], carta2[5];
    char cidade1[20], cidade2[20];
    unsigned long int pop1, pop2;
    float area1, area2;
    long int pib1, pib2;
    int pontos1, pontos2;
    float densi1, densi2;
    float pibpercap1, pibpercap2;

    // Desafio Super Trunfo - Cidades
    // Menu inicial:
    // Exibe um menu para o usuário com as opções de jogar, ver as regras ou sair do jogo.

    int opcao;
    printf("Bem-vindo ao Super Trunfo - Cidades!\n\n");
    printf("Escolha uma opção:\n\n");
    printf("1 - Jogar\n");
    printf("2 - Ver as regras\n");
    printf("3 - Sair\n");
    printf("Opção: ");
    scanf(" %d", &opcao);

    // Implementação do menu:
    // Estruturas de decisão para verificar a opção escolhida pelo usuário.
    // Utilize o comando switch para verificar a opção escolhida e chame as funções correspondentes.
    // Caso o usuário escolha uma opção inválida, exiba uma mensagem de erro.

    switch (opcao)
    {
    case 1:
        printf("\nVamos jogar!\n\n\n");
        break;
    case 2:
        printf("Regras do jogo:\n\n");
        printf("OBJETIVO: \n");
        printf("O Super Trunfo é um jogo de cartas em que cada carta possui atributos numéricos;\n");
        printf("O objetivo é comparar os atributos das cartas. O jogador que marcar 2 pontos vence.\n\n");
        printf("COMO JOGAR:\n");
        printf("Cada jogador registra sua carta de cidade;\n");
        printf("Depois cada jogador deverá escolher 2 atributos em sua carta para comparar;\n");
        printf("O maior valor de atributo ganha, com excessão do atributo 'Densidade Populacional', neste o menor valor é o vencedor;\n");
        printf("Cada atributo vencedor marca um ponto.\n\n");
        printf("FIM DE JOGO:\n");
        printf("Ganha o jogador que efetuar 2 pontos na rodada.\n");
        printf("Em caso de empate, os atributos escolhidos serão somados e o maior valor vence.\n");
        printf("Se a soma dos atributos for empate, então fim de jogo. Essa rodada não teve vencedores. \n\n\n");
        break;
    case 3:
        printf("Até a próxima!\n\n\n");
        return 0;
    default:
        printf("Opção inválida. Até a próxima.\n\n\n");
        return 0;
    }

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Insira as informações das 2 cartas que irão competir.\nJogador 1 começando pela Carta 1:\n");
    printf("Qual a letra do estado?\n"); // Pede ao usuário a letra do estado
    scanf(" %c", &estado1);              // A

    printf("Qual o código da carta?\n"); // Pede ao usuário o código da carta
    scanf(" %s", carta1);                // 01

    printf("Qual o nome da cidade?\n"); // Pede ao usuário o nome da cidade
    scanf(" %s", cidade1);              // SaoPaulo

    printf("Qual a população da cidade?\n"); // Pede ao usuário a população da cidade
    scanf(" %lu", &pop1);                    // 11451000

    printf("Qual a área da cidade?\n"); // Pede ao usuário a área da cidade
    scanf(" %f", &area1);               // 1521

    printf("Qual o PIB da cidade?\n"); // Pede ao usuário o PIB da cidade
    scanf(" %ld", &pib1);              // 828.980.607.731 (sem pontos)

    printf("Qual o número de pontos turísticos da cidade?\n"); // Pede ao usuário o número de pontos turísticos da cidade
    scanf(" %d", &pontos1);                                    // 36

    // Repetindo o processo para a %s:
    printf("\nJogador 2 agora vamos inserir a Carta 2:\n");
    printf("Qual a letra do estado?\n");
    scanf(" %c", &estado2); // B

    printf("Qual o código da carta?\n");
    scanf(" %s", carta2); // 01

    printf("Qual o nome da cidade?\n");
    scanf(" %s", cidade2); // RioDeJaneiro

    printf("Qual a população da cidade?\n");
    scanf(" %ld", &pop2); // 6747815

    printf("Qual a área da cidade?\n");
    scanf(" %f", &area2); // 1221

    printf("Qual o PIB da cidade?\n");
    scanf(" %ld", &pib2); // 449.989.000.000 (sem pontos)

    printf("Qual o número de pontos turísticos da cidade?\n");
    scanf(" %d", &pontos2); // 28 */

    // Manipulação de variáveis:
    densi1 = pop1 / area1;
    densi2 = pop2 / area2;
    pibpercap1 = pib1 / pop1;
    pibpercap2 = pib2 / pop2;

    // Calculando o Super Poder:
    // Somando todos os atributos numericos (População, Área, PIB, Pontos Turísticos,
    // PIB per capita e o inverso da Densidade Populacional - quanto menor a densidade, maior o poder)
    // Armazene o Super Poder como Float

    float superpoder1 = (pop1 + area1 + pib1 + pontos1 + pibpercap1) / densi1;
    float superpoder2 = (pop2 + area2 + pib2 + pontos2 + pibpercap2) / densi2;

    // Comparação de Cartas e Exibição de Resultados:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    int atributo1, atributo2;
    int resultado1 = 0, resultado2 = 0;
    // Pede ao usuário que escolha os atributos a serem comparados:
    printf("Jogador 1, escolha o primeiro atributo para comparar:\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Atributo 1: ");
    scanf(" %d", &atributo1);

    
    // Escolha do segundo atributo
    printf("\nJogador 2, escolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Atributo 2: ");
    scanf(" %d", &atributo2);

    // Verifica se o segundo atributo é igual ao primeiro
    if (atributo1 == atributo2) {
        printf("\nOpção inválida! Você escolheu o mesmo atributo da primeira rodada. O programa será encerrado.\n");
        return 0;
    }

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;

    // Comparação do primeiro atributo
    switch (atributo1) {
    case 1:
        valor1Carta1 = pop1;
        valor1Carta2 = pop2;
        break;
    case 2:
        valor1Carta1 = area1;
        valor1Carta2 = area2;
        break;
    case 3:
        valor1Carta1 = pib1;
        valor1Carta2 = pib2;
        break;
    case 4:
        valor1Carta1 = pontos1;
        valor1Carta2 = pontos2;
        break;
    case 5: // Densidade populacional (menor valor vence)
        valor1Carta1 = densi1;
        valor1Carta2 = densi2;
        break;
    case 6:
        valor1Carta1 = pibpercap1;
        valor1Carta2 = pibpercap2;
        break;
    }
    

    // Comparação do segundo atributo
    switch (atributo2) {
    case 1:
        valor2Carta1 = pop1;
        valor2Carta2 = pop2;
        break;
    case 2:
        valor2Carta1 = area1;
        valor2Carta2 = area2;
        break;
    case 3:
        valor2Carta1 = pib1;
        valor2Carta2 = pib2;
        break;
    case 4:
        valor2Carta1 = pontos1;
        valor2Carta2 = pontos2;
        break;
    case 5: // Densidade populacional (menor valor vence)
        valor2Carta1 = densi1;
        valor2Carta2 = densi2;
        break;
    case 6:
        valor2Carta1 = pibpercap1;
        valor2Carta2 = pibpercap2;
        break;
    }

    // Soma dos atributos
    float somaCarta1, somaCarta2;

    // Caso o atributo seja Densidade Populacional, o menor valor vence
    if (atributo1 == 5) {
        somaCarta1 = -valor1Carta1; // Inverte o valor para que o menor seja considerado maior
        somaCarta2 = -valor1Carta2;
    } else {
        somaCarta1 = valor1Carta1;
        somaCarta2 = valor1Carta2;
    }

    if (atributo2 == 5) {
        somaCarta1 += -valor2Carta1; // Inverte o valor para que o menor seja considerado maior
        somaCarta2 += -valor2Carta2;
    } else {
        somaCarta1 += valor2Carta1;
        somaCarta2 += valor2Carta2;
    }


    // Exibição dos resultados
    printf("\nResultado da comparação:\n");

    // Exibição do primeiro atributo
    switch (atributo1) {
    case 1: // População (unsigned long int)
        printf("Atributo 1 - População: %lu Habitantes (%s) vs %lu Habitantes (%s)\n", (unsigned long int)valor1Carta1, cidade1, (unsigned long int)valor1Carta2, cidade2);
        break;
    case 2: // Área (float)
        printf("Atributo 1 - Área: %.2fKm2 (%s) vs %.2fkm2 (%s)\n", valor1Carta1, cidade1, valor1Carta2, cidade2);
        break;
    case 3: // PIB (long int)
        printf("Atributo 1 - PIB R$%ld (%s) vs R$%ld (%s)\n", (long int)valor1Carta1, cidade1, (long int)valor1Carta2, cidade2);
        break;
    case 4: // Pontos turísticos (int)
        printf("Atributo 1 - Pontos Turísticos: %d Pontos Turísticos (%s) vs %d Pontos Turísticos (%s)\n", (int)valor1Carta1, cidade1, (int)valor1Carta2), cidade2;
        break;
    case 5: // Densidade populacional (float)
        printf("Atributo 1 - Densidade Populacional: %.2f Hab/Km2 (%s) vs %.2f Hab/Km2 (%s)\n", valor1Carta1, cidade1, valor1Carta2, cidade2);
        break;
    case 6: // PIB per capita (float)
        printf("Atributo 1 - PIB Percapta R$%.2f (%s) vs R$%.2f (%s)\n", valor1Carta1, cidade1, valor1Carta2, cidade2);
        break;
    }

    // Verificação do vencedor da primeira rodada:
    if (valor1Carta1 > valor1Carta2) {
        resultado1++;
        printf("\n\n%s venceu a primeira rodada!\n\n" , cidade1);
    } else if (valor1Carta2 > valor1Carta1) {
        resultado2++;
        printf("\n\n%s venceu a primeira rodada!\n\n" , cidade2);
    } else {
        printf("\n\nEmpate!\n\n");
    }

    // Exibição do segundo atributo
    switch (atributo2) {
    case 1: // População (unsigned long int)
        printf("Atributo 2 - População: %lu Habitantes (%s) vs %lu Habitantes (%s)\n", (unsigned long int)valor2Carta1, cidade1, (unsigned long int)valor2Carta2, cidade2);
        break;
    case 2: // Área (float)
        printf("Atributo 2 - Área: %.2f Km2 (%s) vs %.2f Km2 (%s)\n", valor2Carta1, cidade1, valor2Carta2, cidade2);
        break;
    case 3: // PIB (long int)
        printf("Atributo 2 - PIB: R$%ld (%s) vs R$%ld (%s)\n", (long int)valor2Carta1, cidade1, (long int)valor2Carta2, cidade2);
        break;
    case 4: // Pontos turísticos (int)
        printf("Atributo 2 - Pontos Turísticos: %d Pontos Turísticos (%s) vs %d Pontos Turísticos (%s)\n", (int)valor2Carta1, cidade1, (int)valor2Carta2, cidade2);
        break;
    case 5: // Densidade populacional (float)
        printf("Atributo 2 - Densidade Populacional: %.2f Hab/Km2 (%s) vs %.2f Hab/Km2 (%s)\n", valor2Carta1, cidade1, valor2Carta2, cidade2);
        break;
    case 6: // PIB per capita (float)
        printf("Atributo 2 - PIB Percapta: R$%.2f (%s) vs R$%.2f (%s)\n", valor2Carta1, cidade1, valor2Carta2, cidade2);
        break;
    }

    // Verificação do vencedor da segunda rodada:
    if (valor2Carta1 > valor2Carta2) {
        resultado1++;
        printf("%s venceu a segunda rodada!\n\n" , cidade1);
    } else if (valor2Carta2 > valor2Carta1) {
        resultado2++;
        printf("%s venceu a segunda rodada!\n\n" , cidade2);
    } else {
        printf("Empate!\n\n");
    }

    // Critério de Desempate
    if (resultado1 == resultado2) {
        printf("Soma dos atributos: %.2f (%s) vs %.2f (%s)\n", somaCarta1, cidade1, somaCarta2, cidade2);

        // Determinação do vencedor
        if (somaCarta1 > somaCarta2) {
            printf("\n\n%s venceu a rodada!\n\n", cidade1);
        } else if (somaCarta2 > somaCarta1) {
            printf("\n\n%s venceu a rodada!\n\n", cidade2);
        } else {
            printf("\n\nEmpate!\n\n");
        }
    } else {
        if (resultado1 > resultado2) {
            printf("\n\n%s é a cidade VENCEDORA!!\n\n", cidade1);
        } else {
            printf("\n\n%s é a cidade VENCEDORA!!\n\n", cidade2);
        }
    }

    return 0;
}