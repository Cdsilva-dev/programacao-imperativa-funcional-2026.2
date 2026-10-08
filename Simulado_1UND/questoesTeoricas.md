SIMULADO DE PROGRAMAÇÃO IMPERATIVA E FUNCIONAL (PIF) - LINGUAGEM C
PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS
Questão 01. Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1)
A linguagem C diferencia rigorosamente letras maiúsculas e minúsculas na formação de nomes de identificadores e palavras-chave. Com base nessa premissa, analise os pares de identificadores abaixo e assinale a alternativa correta:

a) Os nomes de variáveis 'numero' e 'Numero' referenciam o mesmo endereço de memória.

b) A palavra-chave 'Main' com 'M' maiúsculo é reconhecida pelo compilador como ponto de entrada válido.

c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.

d) A sensibilidade a caixa baixa/alta depende exclusivamente do sistema operacional utilizado na compilação.

Resposta:

c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.

Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os três erros sintáticos/estruturais presentes no código:
#include <stdio.h>
#include <stdlib.h>;
int Main()
{
int idade = 20
printf( A idade do aluno eh: %d anos.., idade);
cout << endl;
system("PAUSE");
return 0;
}
Resposta:
#include <stdlib.h>;  Presença de ponto e vírgula ; indevido ao final da diretiva.
int Main()  Nome da função principal com M maiúsculo; o C exige int main().
int idade = 20  Falta do ponto e vírgula ; ao término da declaração.
printf( A idade...  Ausência das aspas duplas delimitando o texto.
cout << endl;  Sintaxe exclusiva de C++, inexistente em C.

Questão 03. 
Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2)
Os operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da sequência abaixo:


int a = 2, b = 4, c = 5, d = 10;
a += b + c;        // Valor final de a = ?
b *= c = d - 2;    // Valores finais de b e c = ?
a += b += c += 5;  // Valores finais de a, b e c = ?
d %= a + 3;        // Valor final de d = ?
Resposta:


int a = 2, b = 4, c = 5, d = 10;
a += b + c;        // Valor final de a = 11
b *= c = d - 2;    // Valores finais de b = 32 e c = 8
a += b += c += 5;  // Valores finais de a = 16, b = 14 e c = 10
d %= a + 3;        // Valor final de d = 0

Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2)

Considere as variáveis inteiras i = 2, j = 3, k = 0 e as variáveis de ponto flutuante x = 2.5, y = 5.0. Avalie cada expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso):

a) i < j + 2 => Resultado: ?

b) 2 * i - 5 <= j - 4 => Resultado: ?

c) !k && (x + y >= 7.5) => Resultado: ?

d) !(i == j) || (y / x == 2.0) => Resultado: ?

e) i == 2 && j == -4 || k == 0 => Resultado: ?

Resposta:

a) i < j + 2 => Resultado: 1

b) 2 * i - 5 <= j - 4 => Resultado: 1

c) !k && (x + y >= 7.5) => Resultado: 1

d) !(i == j) || (y / x == 2.0) => Resultado: 1

e) i == 2 && j == -4 || k == 0 => Resultado: 1

Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3)
As estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de for, while e do-while e responda fundamentadamente:

a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?

b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?

c) O trecho de código while (condicao); (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?

Resposta:

a) O while testa a condição antes da execução (mínimo de 0 execuções). O do-while testa a condição no final, garantindo no mínimo 1 execução do bloco.

b) O laço for é preferível para repetições com contagem ou número determinado de passos, agrupando inicialização, condição e incremento no mesmo cabeçalho.

c) Trata-se de um erro de lógica. O ponto e vírgula encerra o laço com um bloco vazio, provocando um loop infinito caso a condição seja verdadeira.

Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3)
Analise o programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um comando de desvio e controle de escopo interno:


#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
a) Por que o compilador emitirá um erro de compilação na instrução printf final?

b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?

c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no console.

Resposta:

a) A variável soma foi declarada no escopo interno do laço for. Fora do laço, ela não existe, resultando em erro de compilação.

b) Executa de i = 1 a i = 7. Na iteração i = 5, o continue ignora o restante do bloco. Na iteração i = 8, o break interrompe a execução.

c) Código corrigido:


#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
Resultado impresso: Soma final = 115