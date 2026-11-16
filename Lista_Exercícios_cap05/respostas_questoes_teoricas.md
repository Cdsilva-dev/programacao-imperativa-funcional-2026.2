# Respostas Teóricas – Lista de Exercícios (Capítulo 5)
**Disciplina:** Programação Imperativa e Funcional (PIF – 2026.2)  
**Instituição:** CESAR School  

---

## Questão 01. Anatomia de uma Função e o Papel do Protótipo

### a) Identificação e papel de cada etapa
* **Protótipo:** `float celsius (float);` — Informa ao compilador a assinatura da função (nome, tipo de retorno e tipos dos parâmetros) antes que ela seja chamada na `main()`.
* **Chamada:** `c = celsius(f);` — Invoca a execução da função passando o argumento `f` e atribui o valor retornado à variável `c`.
* **Definição:** `float celsius (float fahr) { return (fahr - 32.0)*5.0/9.0; }` — Contém a implementação real da função, especificando o nome do parâmetro formal (`fahr`) e o bloco de instruções que realiza o cálculo e devolve o resultado.

### b) Papel do protótipo para o compilador e consequências da omissão
O protótipo permite que o compilador verifique se a quantidade e os tipos dos argumentos passados na chamada coincidem com os parâmetros esperados pela definição, além de saber qual tipo de dado será retornado. Se o protótipo for omitido e a função for definida após a `main()`, o compilador assumirá implicitamente (no padrão C tradicional) que a função retorna `int` e não fará verificação de tipos nos parâmetros, gerando erros de compilação por conflito de tipos ao encontrar a definição real posteriormente ou comportamento indefinido na conversão dos valores.

### c) Tipo da função celsius()
O tipo da função é **float**. Em C, o tipo de uma função é determinado pelo tipo do dado que ela devolve através do comando `return`, pois uma chamada de função funciona como uma expressão que assume o valor e o tipo do seu retorno no local onde foi invocada (como em uma atribuição ou cálculo), independentemente dos tipos dos parâmetros recebidos.

---

## Questão 02. O Comando return e suas Limitações

### a) Quantidade de valores retornados e análise de calcular()
Uma função em C pode devolver **apenas um único valor** por meio do comando `return`. Na função `calcular()`, o programador pretendia retornar simultaneamente `soma` e `media`. Porém, em C, a vírgula em `return soma, media;` atua como o **operador vírgula**, que avalia a primeira expressão (`soma`), descarta seu resultado e retorna apenas o valor da expressão mais à direita (`media`).

### b) Efeito e obrigatoriedade de return; em funções void
Dentro de `void imprime_mensagem()`, o comando `return;` encerra imediatamente a execução da função quando `erro < 0`, devolvendo o controle para quem a chamou sem retornar nenhum valor (evitando a execução do segundo `printf`). Ele **não é obrigatório** ao final de uma função `void`, pois o fluxo encerrará naturalmente ao atingir a chave de fechamento `}` da função.

### c) Funções separadas e justificativa
Como o comando `return` transfere apenas um único valor escalar de volta para a expressão que chamou a função, sem o uso de ponteiros ou estruturas compostas (`struct`), é necessário dividir a lógica em duas funções distintas para obter dois resultados diferentes.

```c
int calcular_soma(int a, int b, int c) {
    return a + b + c;
}

float calcular_media(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}
```

---

## Questão 03. Funções void, Parâmetros e Assinaturas

### a) Classificação dos protótipos
* **void exibe_mensagem (char* msg);** — Possui parâmetro de entrada (`char* msg`) e não possui valor de retorno (`void`).
* **int obter_codigo(void);** — Não possui parâmetros de entrada (`void`) e possui valor de retorno (`int`).
* **void limpar_tela(void);** — Não possui parâmetros de entrada (`void`) e não possui valor de retorno (`void`).

### b) Diferença prática e exemplos de uso
* **Função com retorno:** Realiza um processamento e devolve um resultado para ser armazenado em uma variável ou usado em uma expressão. Exemplo: uma função `calcularIMC()` que recebe peso e altura e retorna o valor numérico do índice.
* **Procedimento (função void):** Executa uma tarefa ou efeito colateral (como exibir textos na tela ou alterar estados externos) sem produzir um dado de retorno. Exemplo: um procedimento `exibirCabecalho()` que apenas imprime o título do sistema no console.

### c) Validade da chamada x = limpar_tela();
**Não é válida** e resultará em erro de compilação. Como o tipo de retorno de `limpar_tela()` é `void` (ausência de valor), a chamada não produz nenhum dado que possa ser atribuído à variável `x`.

---

## Questão 04. Recursão: Caso Base, Passo Recursivo e Pilha de Execução

### a) Caso base, passo recursivo e remoção do caso base
* **Caso base:** `n == 0` (retorna `(long)1`).
* **Passo recursivo:** `(long)n * fatorial(n - 1)`.
* **Se o caso base fosse removido:** A função entraria em **recursão infinita**, chamando a si mesma continuamente com valores negativos (`-1`, `-2`, `-3`, ...) até esgotar a memória disponível e provocar o encerramento abrupto do programa.

### b) Rastreamento completo de fatorial(4)

**Fase de Empilhamento (chamadas):**
1. `fatorial(4)` aguarda `4 * fatorial(3)`
2. `fatorial(3)` aguarda `3 * fatorial(2)`
3. `fatorial(2)` aguarda `2 * fatorial(1)`
4. `fatorial(1)` aguarda `1 * fatorial(0)`
5. `fatorial(0)` atinge o caso base e devolve `1`

**Fase de Desempilhamento (retornos):**
1. `fatorial(0)` devolve `1`
2. `fatorial(1)` calcula `1 * 1` e devolve `1`
3. `fatorial(2)` calcula `2 * 1` e devolve `2`
4. `fatorial(3)` calcula `3 * 2` e devolve `6`
5. `fatorial(4)` calcula `4 * 6` e devolve `24`

### c) Comportamento da pilha de execução na memória
A cada chamada recursiva, um novo registro de ativação (*stack frame*) é alocado no topo da pilha de execução (*call stack*) para armazenar os parâmetros, variáveis locais e o endereço de retorno daquela instância específica. Esses quadros permanecem ocupando memória até que o caso base seja atingido e comecem a ser desempilhados. Sem um caso base, novos quadros são empilhados indefinidamente até ultrapassar o limite de memória reservado para a pilha, causando um erro fatal conhecido como **Stack Overflow** (estouro de pilha).

---

## Questão 05. Diretiva #define, Constantes e Macros com Argumentos

### a) Saída de cada printf e comportamento
* **Saída de SQR(2+3):** `25`
* **Saída de DOBRO(2+3):** `8`
* **Explicação:** O pré-processador realiza substituição textual literal antes da compilação. Em `SQR(2+3)`, os parênteses de proteção garantem a expansão `((2+3)*(2+3))`, resultando em `5 * 5 = 25`. Já em `DOBRO(2+3)`, a ausência de parênteses gera `2+3*2`; pela precedência da multiplicação sobre a soma, o compilador calcula `3 * 2 = 6` primeiro e depois soma `2`, resultando em `8`.

### b) Ausência de ponto e vírgula e convenção em maiúsculas
* **Sem ponto e vírgula:** Como `#define` faz substituição literal de texto, incluir `;` no final faria com que o ponto e vírgula fosse inserido no meio de expressões (por exemplo, `PI * r` viraria `3.14; * r`), causando erros de sintaxe.
* **Identificadores em maiúsculas:** É uma convenção para diferenciar visualmente constantes e macros de variáveis e funções comuns, alertando o programador de que não há verificação de tipos e que expressões passadas como argumento podem ser avaliadas múltiplas vezes.

### c) Erro em #define PRN (n) e diferença entre macro e função
* **Por que está incorreto:** Há um espaço em branco entre o nome `PRN` e `(n)`. Para o pré-processador, isso define uma constante simples chamada `PRN` cujo texto de substituição é `(n) printf("%d", n)`, invalidando a sintaxe da chamada.
* **Forma correta:** `#define PRN(n) printf("%d", n)` (sem espaço antes do parêntese).
* **Diferença entre macro e função:** A macro é expandida diretamente no código-fonte antes da compilação (sem custo de chamada na pilha, mas sem checagem de tipos e sujeita a efeitos colaterais como `SQR(x++)`), enquanto a função possui endereço próprio na memória, realiza verificação estrita de tipos dos parâmetros e avalia cada argumento apenas uma vez antes da execução.

---

## Questão 06. Diretivas #include, #undef e Compilação Condicional

### a) Diferença entre #include <stdio.h> e #include "areas.h"
* **`#include <stdio.h>`:** Os sinais `< >` instruem o pré-processador a buscar o arquivo apenas nos diretórios padrão do sistema e do compilador. É utilizado para bibliotecas padrão da linguagem.
* **`#include "areas.h"`:** As aspas duplas `" "` instruem o pré-processador a buscar o arquivo primeiramente no diretório atual do projeto (onde está o código-fonte) e, somente se não encontrar, nos diretórios do sistema. É utilizado para arquivos de cabeçalho criados pelo próprio programador.

### b) Efeito de #undef SOMA e erro em #undef SOMA(x,y)
A diretiva `#undef SOMA` remove a definição da macro `SOMA` a partir daquela linha, fazendo com que ela deixe de ser expandida ou permitindo que seja redefinida posteriormente. A escrita `#undef SOMA(x,y)` está incorreta porque `#undef` aceita apenas o identificador (nome) da macro, sem a lista de argumentos.

### c) Saída sem DEBUG definido e momento da decisão
* **Mensagem impressa:** `Modo normal`
* **Momento da decisão:** A decisão ocorre durante a etapa de **pré-processamento**, antes mesmo de o código ser traduzido para linguagem de máquina pelo compilador.
* **Por que não aparecem no executável:** O pré-processador avalia as diretivas `#ifdef`, `#else` e `#endif`, mantém apenas o trecho de código verdadeiro e descarta completamente as diretivas e o bloco falso (`printf("Modo de depuracao\n");`). Assim, o compilador recebe apenas o código C resultante limpo.