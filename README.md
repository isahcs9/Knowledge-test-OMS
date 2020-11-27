# Knowledge-test-OMS

*Teste do arquivo Exe1.c:

Logo que executar o programa, serão apresentados os números de 1 a 100 um em cada linha, exceto as linhas que têm números múltiplos de 3, 5 ou 3 e 5 ao mesmo tempo.

*Teste do arquivo Exe2.c:

Irão aparecer 3 linhas, uma de cada vez, para que o usuário escreva as entradas:
s: string inicial
t: string desejada
k: um número inteiro que representa o número de operações

Após escrever o prográma retornará em uma nova linha a resposta "Sim" ou "Não". 
Foi usada a função strlen para verificar se o tamanho das strings estão de acordo com o solicitado no exercício e também dentro da função para fazer a análise das strings entre si. 
Na função, inicialmente o código verifica quantos 'char' existem a mais na variável inicial e se a variável inicial for maior que a variável desejada, o contador referente ao número de operações é incrementado. Nessa mesma verificação, é incrementado o contador caso o 'char' das palavras (na mesma posição dentro da palavra) também seja diferente entre eles.
Em seguida, na função, são apagados os 'char' da string inicial caso ela tenha um tamanho maior do que a string desejada.
Posteriormente, é feita uma conferência para trocar o 'char' das posições em que o char não é igual nas strings e conforme a string inicial tem um char alterado, o contador também é incrementado. No fim da função, é feita uma verificação de n para saber se o valor é igual ao indicado pelo usuário e mostrar a resposta adequada.

*Teste do arquivo exe5.c

O programa inicia pedindo para que o usuário escreva uma string. Após digitar a entrada, o código verifica todos os 'char' da string por meio de um contador até que chegue no último elemento, ou seja, quando o vetor mostra '\0'.
Após a verificação, é printado na tela uma mensagem com o número de caracteres da string.

