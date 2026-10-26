# Respostas Teóricas – Lista de Exercícios (Capítulo 4)
 

---

## Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

### a) Efeito prático
* **if (x = 0):** Utiliza o operador de atribuição (=). A variável x recebe o valor 0, sobrescrevendo seu valor anterior. Como o resultado da expressão é 0 (avaliado como falso em C), o bloco de código associado não será executado.
* **if (x == 0):** Utiliza o operador de comparação de igualdade (==). O código apenas verifica se x é igual a 0 sem alterar o valor da variável. Se x for igual a 0, o bloco será executado.

### b) Interpretação de valores numéricos
 valores numéricos dentro de condições lógicas são interpretados da seguinte forma:
* O valor **0** (ou **0.0**) é interpretado estritamente como falso.
* **Qualquer valor diferente de zero** (seja positivo ou negativo, ex: 1, -5, 3.14) é interpretado como verdadeiro.

### c) Análise de if (x = -5)
O bloco de código associado será executado.  
 A instrução atribui o valor -5 à variável x. O resultado da expressão de atribuição é o próprio valor atribuído (-5). Como -5 é um valor diferente de zero, o padrão ANSI C o avalia como verdadeiro.

---

## Questão 02. Associação do Comando else e Aninhamento de Decisões

### a) Saída impressa e justificativa
* **Saída:** Opção B
* **Justificativa:** Na ausência de chaves de bloco, a cláusula else é associada ao if sem else mais próximo (if (y > 10)). Como x = 15 (x > 10 é verdadeiro), o fluxo entra no bloco interno. Como y = 5 (y > 10 é falso), a cláusula else vinculada ao if interno é executada, imprimindo "Opção B".

### b) Regra oficial para associação do else
Uma cláusula else é sempre vinculada ao comando if sem else mais próximo que esteja no mesmo nível de escopo (que não esteja delimitado por um bloco de chaves anterior).

### c) Reescrita com chaves
#include <stdio.h>
int main(){
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
return 0;
}

---

## Questão 03. Operador Condicional Ternário vs. Estrutura if-else

### a) Funcionamento e avaliação
O operador ternário avalia a expressão lógica (media >= 7.0). Se verdadeira, retorna o primeiro valor ('A'); se falsa, retorna o segundo ('R'). Para media = 6.8, a condição é falsa (6.8 >= 7.0), logo a variável situacao armazenará o caractere 'R'.

### b) Reescrita em estrutura if-else

```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

### c) Limitações do operador ternário
O operador ternário não pode substituir qualquer estrutura if-else. Ele foi projetado como uma expressão simples para retornar valores. Suas limitações incluem:
1. Incapacidade de executar blocos contendo múltiplos comandos de forma clara e legível.
2. Impossibilidade de uso quando os ramos contêm chamadas de procedimentos do tipo void (sem retorno) ou comandos de controle de fluxo (return, break, continue).

---

## Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through

### a) Saída exata no terminal

```text
Prata
Ouro
```

**Explicação:** A variável codigo tem valor 2, fazendo a execução saltar diretamente para o case 2:. Devido à ausência do comando break no case 2:, a execução continua ("cai") no case 3: subsequente, imprimindo também a mensagem "Ouro" antes de encontrar um break e encerrar a estrutura.

### b) Papel do break e efeito Fall-Through
* **Papel do break:** Interromper a execução do bloco switch e desviar o fluxo do programa para a instrução imediatamente após o fechamento do switch.
* **Nome do fenômeno:** Fall-through.

### c) Tipos de dados permitidos no switch
Permite apenas expressões que resultem em tipos inteiros ou enumerados (int, char, short, long, enum).  
**Uso de float ou double:** Não é permitido. O switch exige comparações de igualdade exata entre valores discretos, o que é incompatível com a representação binária e imprecisões de ponto flutuante no padrão ANSI C.

---

## Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos

### a) Saída exata do printf

```text
a=0 b=5, c=8
```

**Explicação:** A condição a != 0 (0 != 0) avalia como falsa. Por curto-circuito do operador &&, o segundo termo (++b > 5) é ignorado, mantendo b = 5. O programa executa a cláusula else (c -= 2), resultando em c = 8.

### b) Conceito de avaliação de curto-circuito
* **Operador E (&&):** Se a expressão à esquerda for falsa, a expressão inteira é falsa. O lado direito não é avaliado.
* **Operador OU (||):** Se a expressão à esquerda for verdadeira, a expressão inteira já é verdadeira. O lado direito é ignorado.

### c) Valores finais com if (a == 0 || ++b > 5)
* a == 0 (0 == 0) é verdadeiro.
* Por curto-circuito do ||, o termo ++b > 5 é ignorado, mantendo b = 5.
* O bloco do if é executado (c += 10), tornando c = 20.

---

## Questão 06. Construções else-if e Análise Lógica de Intervalos

### a) Saída para idade = 65

```text
Idoso
Adulto
Jovem
```

**Explicação:** Por serem múltiplos ifs independentes, todas as condições são avaliadas sequencialmente. Para idade = 65, as condições idade >= 60, idade >= 18 e idade >= 12 avaliam como verdadeiras, executando os três comandos.

### b) Diferença entre ifs independentes e a cadeia else-if
* **ifs independentes:** Todos os testes condicionais são obrigatoriamente avaliados, independentemente do resultado dos anteriores.
* **Cadeia else-if:** Avalia as condições sequencialmente até encontrar a primeira verdadeira. Ao executá-la, encerra a estrutura e ignora as demais.

### c) Reescrita correta utilizando else-if

```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```