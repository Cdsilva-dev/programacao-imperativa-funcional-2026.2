Questão 01.
Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C
disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while.
Analise o funcionamento dessas estruturas e responda:

a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número
mínimo de execuções do bloco de código e ao momento em que a condição de teste é
avaliada?
b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se
apresenta como a escolha mais elegante, legível e adequada?
c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de
compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução
se condicao for verdadeira.

Resposta Questão 01 : 
A) A diferença é que o do-while executa o código pelo menos uma vez e depois checa a condição de repetição. Já o while ele checa a condição primeiro para depois executar o código.
B) For para quando sabemos a  quantidades de vezes que vamos repetir determinada instrução. While para quando não sabemos quantas vezes vamos repetir e do-while para quando precisamos executar determinado código pelo menos uma vez.
C) Erro de lógica. Pois o ';' indica fim de determinada instrução. Logo, se eu coloco ' 'while (condicao);' eu estou dizendo : enquanto (condição) fim de instrução. Logo, dá um erro de  lógica.

Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco — Um estudante escreveu o
programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9,
mas encontrou falhas durante a compilação e execução:

#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i < 10; i++) {
int soma = 0;
soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}
a) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?
b) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o
valor impresso para soma estaria conceitualmente incorreto a cada iteração?
c) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo
de vida de variáveis na linguagem C.

Resposta questão 02 :

A) Porque a variável soma só existe dentro do for. Logo, é uma variável de escopo local.
B) Porque ao final de cada iteração os valores serão substituidos, retorando apenas o valor da soma dos quadrados do número 09.
C) 
#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
int soma = 0 ; /* < - - Declaro a variável soma no escopo Global*/
for (i = 1; i < 10; i++) {
soma += i * i; /* <----- declaro a condição de soma */
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}

Questão 03. 
Flexibilidade do Laço for e Omissão de Expressões — A sintaxe do laço for em C
consiste em três expressões separadas por ponto-e-vírgulas: inicialização, teste e incremento.
Analise os três trechos de código abaixo:

// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
printf("%d\t", a);
// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
printf("%c", ch + 1);
// Trecho C: Omissão completa de expressões
for (;;)
printf("Laço Infinito\n");

a) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?
b) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os
parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?
c) Como o programa pode interromper a execução do laço infinito do Trecho C de forma
programática sem forçar o encerramento do processo pelo sistema operacional?

Resposta Questão 03 : 

A) Seria 36 18 9 4 1. Porém dará erro de sintaxe por não ter o tipo da variável 'a'
B)  A operação 'ch + 1' vai ler o caractere reservado em 'ch' e somar um caractere. Ficando, por exemplo : A + 1 = B. O getch() irá ler a primeira letra digitada sem a necessidade de apertar enter. Eles são necessários por causa dá ordem de precedência, pois ele tem prioridade sobre a atribuição. 
C) Adicionando um condição de teste, como  'numero<=10' e incremento, como 'i++'. Ou adicionarmos o comando 'break ' dentro do laço.

Questão 04.
 Comandos de Desvio de Fluxo: break vs. continue — Os comandos break e
continue são instruções de controle de desvio que alteram a execução normal de laços de
repetição:

a) Descreva a ação exata executada pelo programa quando o comando break é acionado
dentro de um laço for ou while.
b) Descreva a ação exata executada pelo programa quando o comando continue é acionado
dentro de um laço for. Qual das três expressões do cabeçalho do for é executada
imediatamente após o continue?
c) Em uma estrutura de laços aninhados (um laço for interno dentro de outro laço for externo),
qual laço é interrompido quando a instrução break é executada dentro do laço interno?

Resposta questão 04:

A) o comando irá sair da estrutura de repetição e sairá na condição que parou. Ex : 
for( int i = 0; i<=10;i++){
    if (i==5){
        break
    }
} 
O resultado será : 1 2 3 4

B) O 'continue' ele sempre irá pular para a próxima condição, caso não tenha, ele irá sair da estrutura de repetição e o código seguirá seu fluxo normalmente. O incremento é executado automaticamente após o continue e depois ele checa a condição ( isso tudo no for)
for(int i = 0; i < 10; i++){
    if (i==3){
        continue
    }
}
Saída : 1 2 4 5 

C) é interrompido o laço interno

Questão 05.
 Operador Vírgula e Múltiplas Variáveis de Controle — O operador vírgula (,)
permite agrupar múltiplas expressões em um único comando, garantindo a avaliação da esquerda
para a direita. Observe o trecho abaixo:

int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
a) Exatamente quantas iterações o laço acima executará antes de ser encerrado?
b) Escreva a saída exata produzida pelo comando printf em cada uma das iterações
executadas.
c) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while.

Respostas Questão 05:

A) 5 repetições.
B) 
1 -- >    i = 0, j = 10 | soma = 10
2 -- >    i = 1, j = 9 | soma = 10
3 -- >    i = 2, j = 8 | soma = 10
4 -- >    i = 3, j = 7 | soma = 10
5 -- >    i = 4, j = 6 | soma = 10

C)
int i = 0;
int j = 10;
while(i < j){
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j")
    i++;
    j--;
}

Questão 06.
 Laço Sem Corpo e Incremento Pós-fixado — Analise o trecho de código abaixo
que utiliza um laço de repetição com corpo vazio:

int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
a) Qual é o valor final da variável x que será impresso pela instrução printf?
b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem
durante a execução do teste 'x++ < 5'.
c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o
mesmo resultado final de x.

Resposta Questão 06:

A) 6
B) 1<5? true. 2<5? true. 3<5? true. 4<5? true. 5<5? false. Printf("Valor final de x = %d/n", x);
C)
int x = 0;
while (x<5){
    x++;
}
x++;
printf("Valor final de x = %d/n", x);