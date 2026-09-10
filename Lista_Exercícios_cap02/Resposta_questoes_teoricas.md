Questão 01. Truncamento de Tipos e Coerção Implícita — 

Um estudante do curso de ADS escreveu o programa em C abaixo visando entender o comportamento de variáveis e atribuições
de tipos incompatíveis. Analise o código, compile mentalmente ou em seu ambiente de
desenvolvimento e responda às questões indicadas.

#include <stdio.h>
#include <stdlib.h>
int main() {
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);
system("PAUSE");
return 0;
}

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?

Resposta - Questão 01

A) 2

B) Porque a variável é do tipo inteiro e não lê casas decimais.Trucamento de tipo.

C)O programador pode fazer um tratamento de exceção com while, onde enquanto o usuário não informar o valor do tipo inteiro, o programa ficará em loop infinito. Ou ele pode mudar o tipo do valor para float e fazer uma estrutura condicional, onde se o valor_inteiro>= valor_inteiro + (valor_inteiro*1/2) ele arrendodaria para o número maior. Caso quissesse manter a precisão, quando for no printf ele coloca %.2f (ou a quantiade de casas decimais que desejar!).

Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas — 

Historicamente, literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-
padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que o

usuário pressione [ENTER]. Sob a perspectiva da portabilidade moderna da linguagem e do padrão
ANSI C:
a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos
(Linux, macOS, servidores)?
b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h>
para entrada e saída de caracteres?
c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira
robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.

Resposta -  Questão 02 

A) Porque aas funções getch() e getche() são especifícas para ambientes Windows.

B) Printf();
   Scanf();

C) #include <stdio.h>
int main(){
    char teste;
    printf("Digite um caractere : ");
    teste = getche();
    return 0;
}

Questão 03.

    Formatação de Saída em Bases Numéricas e ASCII —

A função de saída printf() oferece controle total sobre a representação dos dados na tela através de especificadores de
formato de base numérica. Desenvolva as instruções em C necessárias para realizar a seguinte
tarefa:
Leia um único número inteiro fornecido pelo usuário e exiba uma única mensagem no console
que mostre esse mesmo valor nas seguintes representações simultâneas: base decimal (%d), base
hexadecimal em caixa baixa (%x), base octal (%o) e o caractere correspondente à tabela ASCII (%c).

Resposta 03 - 

#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número inteiro : ");
    scanf("%d", &numero);
    printf("Em base decimal : %d \n Hexadecimal  : %x \n Octal : %o \n ASCII : %c \n", numero, numero, numero, numero);
    return 0;
}

Questão 04.
    Operadores de Atribuição Composta e Precedência     

Os operadores de atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição
simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução
sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus
cálculos apresentando a ordem de avaliação passo a passo:

int a = 1, b = 2, c = 3, d = 4;

a += b + c; // Valor final de a = 6
b *= c = d + 2; // Valores finais de b e c = 12 e 6
d %= a + a + a; // Valor final de d = 1
d -= c -= b -= a; // Valor final de d, c e b = 2, 2 e  1
a += b += c += 7; // Valor final de a, b e c = 13, 12 e 10

Questão 05.

        Avaliação de Expressões Lógicas e Relacionais    
        
Determine o resultado lógico (1 para verdadeiro, 0 para falso) de cada uma das expressões relacionais e lógicas a seguir,
assumindo que as variáveis foram inicializadas como: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y
= 4.4;. Consulte a tabela de precedência do Capítulo 2 de Viviane.

a) i < j + 3 => Resultado: 1
b) 2 * i - 7 <= j - 8 => Resultado: 0
c) -x + y >= 2.0 * y => Resultado: 0
d) x == y => Resultado: 0
e) !(n - j) => Resultado: 1
f) !n - j => Resultado: 1
g) i && j && k => Resultado: 1
h) i || j - 3 && k => Resultado: 1
i) i < j && 2 >= k => Resultado: 0
j) i == 2 || j == 4 || k == 5 => Resultado: 0

Questão 06.
     Comportamento e Precedência dos Incrementos    

O comportamento de incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros sutis na
Linguagem C. Analise os dois trechos de código independentes abaixo e responda:

// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);
// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);

a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o
pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?

b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas
vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique
por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do
compilador adotado (comportamento indefinido).

Respostas  : 

A) O operador pré-fixado (++n) faz com que o incremento seja realizado primeiro, depois que ele vai ser utilizado para alguma coisa.
   Já o operador pós-fixado(n++) é o contrário. Primeiro ele é utilizado para realizar alguma coisa, depois é incrementado.
   O resultado no trecho A será : 6 e 6
   O resultado no trecho B será  : 6 e 5

B) Porque cada compilador meio que tem sua própria ordem de  precedência, gerando inconsistências entre cada um, fazendo com que não seja possível afimar qual é o resultado!