//
//  abstract.cpp
//  ComputerProgrammingCPP
//
//  Created by Rafael Ferreira on 4/14/16.
//  Copyright © 2016 Swift Yah. All rights reserved.
//

#include "prototype.hpp" // Ignorar essa linha na sua implementação padrão

// Leia-se como includes:
#include <stdio.h> // Standard Input Output
#include <string.h> // String

// Neste método passarei os parâmetros por referência, significa que estaremos mudando os valores no endereço de memória.
// Ou seja, o que mudarmos dentro do método, vai afetar a variável em si.
// Se a passagem não for por referência, o que mudassemos na variável dentro do método não afetaria o valor da mesma quando saíssemos do método.
void trocaValoresPassagemPorReferencia(int &a, int &b) {
    int temporario = a;
    a = b;
    b = temporario;
}

// Troca de valores sem passage por referência.
void trocaValores(int a, int b) {
    int temporario = a;
    a = b;
    b = temporario;
    // O código interno é o mesmo.
    // E a troca dos valores realmente acontece, mas, essa troca não afeta as variáveis externas, ou seja, quando este método acabar, essa troca não terá ocorrido.
}

// Todo método recursivo tem uma chamada a si mesmo, é uma condição básica de saída.
void recursivo(int numeroLimite) {
    // Essa é a condição básica de saída.
    if (numeroLimite == 0) {
        return; // Esse return somente diz que o método acabou.
    }
    
    printf("%d, \n", numeroLimite);
    
    // Chamando a si mesmo.
    recursivo(numeroLimite - 1);
}

// Ordena um array em ordem crescente.
void ordenaArray(int *numeros, int numeroDeItens) {
    for (int i = 0; i < (numeroDeItens - 1); i++) { // Percorrerá o array de números até a penúltima posição, não pode percorrer até a última por que mais abaixo estamos somando esse valor no índice, se tentarmos acessar um indice maior que o tamanho do array, dará um erro em tempo de programação.
        for (int j = 0; j < (numeroDeItens - i - 1); j++) {
            if (numeros[j] > numeros[j + 1]) { // < Ordem Descendente; > Ordem Ascendente
                int temporario = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporario;
            }
        }
        
    }
}

// Leia-se: int main() {
void abstractMain() {
    // Declarando um array de char de 80 posições.
    char alfabeto[94] = "aA0bB1cC2dD3eE4fF5gG6hH7iI8jJ9k!K lL!mMnN#oO$pP&qQ'rR(sS)tT*uU+vV,wW-xX.yY/zZ:;<=>?@[]^_`{|}~";
    
    // Declarando um array e inicializando ele.
    int fibonnacci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    
    // Número de elementos de um array.
    int quantidadeDeElementos = sizeof(alfabeto) / sizeof(alfabeto[0]); // Essa operação funciona pois, estamos pegando o número de bytes do array todo, pelo valor de bytes de uma posição, no caso, todas as posições tem o mesmo tamanho.
    
    // Número de elementos de um array (menos confiável, mas, certamente mais exato).
    int elementosFibonnacci = sizeof(fibonnacci) / 4;
    
    // Variáveis que servem como contadores.
    int caracteresEspeciais = 0;
    int letrasMaiusculas = 0;
    int letrasMinusculas = 0;
    int numeros = 0;
    int caracteresDesconhecidos = 0;
    
    // Percorrendo os itens.
    for (int i = 0; i < quantidadeDeElementos; i++) {
        // Converto o caractere no correspondente ASCII.
        int ascii = alfabeto[i];
        
        if ((ascii >= 32 && ascii <= 47) || (ascii >= 91 && ascii <= 96) || (ascii >= 123 && ascii <= 127)) {
            // É um caracter especial.
            caracteresEspeciais += 1;
        } else if (ascii >= 48 && ascii <= 57) {
            // É um número.
            numeros++; // ++ É o mesmo que: numeros += 1 ou ainda: numeros = numeros + 1
        } else if (ascii >= 65 && ascii <= 90) {
            // É uma letra maiúscula.
            letrasMaiusculas = letrasMaiusculas + 1;
        } else if (ascii >= 97 && ascii <= 122) {
            // É uma letra minúscula.
            letrasMinusculas++;
        } else {
            // Se não for nenhum dos if's anteriores, significa que eu não sei qual de que tipo é o caractere.
            caracteresDesconhecidos++;
        }
    }
    
    // Posso facilmente imprimir os resultados agora.
    printf("Resultados: \n");
    printf("Caracteres especiais: %d \n", caracteresEspeciais);
    printf("Caracteres númericos: %d \n", numeros);
    printf("Letras maiúsculas: %d \n", letrasMaiusculas);
    printf("Letras minúsculas: %d \n", letrasMinusculas);
    printf("Caracteres desconhecidos: %d \n", caracteresDesconhecidos);
    
    // Sempre que fazemos uso de uma variável, que não seja para escrevermos nela, temos que nos certificar, que ela já possua um valor.
    int pares = 0;
    int impares = 0;
    
    // Percorre o array de fibonnaci.
    for (int i = 0; i < elementosFibonnacci; i++) {
        if ((fibonnacci[i] % 2) == 0) { // A condição é: Se o elemento na posição i ao ser dividido por 2 tem resto 0, então retorna TRUE (verdadeiro, é um número par).
            pares++;
        } else { // Se não é par, então é ímpar.
            impares++;
        }
    }
    
    // Imprimindo os resultados de uma vez, com quebra de linha.
    printf("Resultados: \nNúmeros pares: %d\nNúmeros ímpares: %d\n", pares, impares);
    
    // Cria um array de duas dimensões.
    // Array de 2 linhas e 80 colunas.
    char nomes[2][80] = {
        "Rafael da Silva Ferreira", // 1º linha, um array de char completa as colunas formando assim o array de 80 colunas.
        "Cleís Aurora Silveira Pereira"
    };
    
    // Array de duas dimensões, com 2 linhas e 2 colunas.
    int anos[2][2] = {
        {1984, 31}, // Cada coluna possui o ano de nascimento e a idade.
        {1995, 20}
    };
    
    int numeroLinhas = sizeof(nomes) / sizeof(nomes[0]);
    int numeroColunasAnos = sizeof(anos[0]) / sizeof(anos[0][0]);
    
    // Percorrendo um array multidimensional.
    // Para cada dimensão do array temos um for.
    // Se tivermos 3 dimensões teremos 3 for para podermos acessar as três posições do array.
    for (int i = 0; i < numeroLinhas; i++) {
        // Primeiro for, acessa as linhas.
        for (int j = 0; j < numeroColunasAnos; j++) {
            // Segundo for, acessa as colunas, mas estamos acessando as colunas da matriz de anos.
            printf("i = %d, j = %d\n", i, j);
        }
        printf("\n");
    }
    
    // O for acima é só para exibir um loop pelos índices do array.
    // Exibindo os dados das duas matrizes.
    for (int i = 0; i < numeroLinhas; i++) {
        printf("Nome: %s, Ano de Nascimento: %d, Idade Atual: %d\n", nomes[i], anos[i][0], anos[i][1]);
    }
    
    char seuNome[80];
    
    // Usando algumas funções de string.
    strcpy(seuNome, nomes[1]); // Copiando o valor da variável 2, para a variável 1.
    strlwr(nomes[0]); // Converte para minúsculo.
    strupr(nomes[1]); // Converte para maiúsculo.
    
    printf("Cópia do Nome 1: %s\n", seuNome);
    printf("Nome 0: %s\n", nomes[0]);
    printf("Nome 1: %s\n", nomes[1]);
    
    strcat(seuNome, nomes[0]); // Concatena (junta), as duas variáveis e guarda na variável 1.
    printf("Nome 1 + Nome 0: %s\n", seuNome);
    
    // Criaremos duas variáveis com valores quaisquer.
    int x = 0;
    int z = 2016;
    
    printf("Troca de valores\n");
    
    printf("x = %d; z = %d\n", x, z);
    
    trocaValores(x, z);
    printf("x = %d; z = %d\n", x, z); // Após a troca, sem a passagem de referência, os valores continuam os mesmos.
    
    trocaValoresPassagemPorReferencia(x, z);
    printf("x = %d; z = %d\n", x, z); // Após a troca, com a passagem de referência, os valores são alterados.
    
    printf("Recursivo: \n");
    
    // Exemplo de método recursivo.
    recursivo(11); // Estou recursivamente imprimindo 11 números.
    // Um método recursivo é uma forma de repetir uma operação um determinado número de vezes, sem usarmos loops.
    // Em certos casos, o recursivo é mais indicado.
    // Mas o consumo de memória é maior.
    
    // Exemplo de maior, menor e média.
    const int numeroItensArray = 10; // Declaração de uma constante, o que significa, que este valor não pode ser modificado.
    int numerosArray[] = {4, 5, 6, 3, 0, 2, 1, 7, 8, 9};
    int maior = numerosArray[0];
    int menor = numerosArray[0];
    int soma = 0;
    int mediaInteira = 0;
    
    for (int i = 0; i < numeroItensArray; i++) {
        if (numerosArray[i] > maior) {
            maior = numerosArray[i];
        }
        
        menor = (numerosArray[i] < menor) ? numerosArray[i] : menor; // Operador ternário: (condição) ? (valor para caso verdadeiro da condição) : (valor caso falso);
        
        soma += numerosArray[0];
    }
    
    mediaInteira = soma / numeroItensArray; // Como só estamos usando valores inteiros, se a média der um valor quebrado, ou seja, com pontos flutuantes, esse valores fracionários são perdidos, somente ficaremos com a parte inteira.
    
    printf("Resultados: \n");
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Soma: %d\n", soma);
    printf("Media inteira: %d\n", mediaInteira);
    
    int itens = sizeof(numerosArray) / 4;
    
    ordenaArray(numerosArray, itens);
    
    // Percorre o array, para imprimí-lo já ordenado.
    for (int i = 0; i < itens; i++) {
        printf("%d, ", numerosArray[i]);
    }
    
    printf("\n\n");
    
    // Exemplo de leitura de valor.
    char opcao;
    printf("Digite uma opção de [a-u]: ");
    scanf("%s", &opcao);
    
    // Controla se o usuário digitou a opção correta.
    bool opcaoCorreta;
    
    // Exemplo de switch.
    switch (opcao) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            opcaoCorreta = true;
            break;
            
        default:
            opcaoCorreta = false;
            break;
    }
    
    // Exemplo de if else.
    
    if (opcaoCorreta) {
        printf("Você digitou a opção correta!");
    } else {
        printf("Você digitou a opção incorreta!");
    }
    
    printf("\n\n"); // Faz duas quebras de linhas.
    
    int limiteNumeros;
    printf("Quantos números que exibir? ");
    scanf("%d", &limiteNumeros);
    
    // Exemplo de while.
    int k = 0;
    while (k < limiteNumeros) {
        printf("%d, ", k);
        k++; // Incrementa a varíavel de entrada, para evitar loops infinitos.
    }
    
    printf("\n\n");
    
    // Exemplo de do while.
    char u;
    
    do {
        printf("Digite a letra u: ");
        scanf("%s", &u);
    } while (u != 'u');
    
    printf("\n\n");
    
    printf("Acabou o resumão...");
}
