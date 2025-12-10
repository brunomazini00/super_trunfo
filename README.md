🃏 Super Trunfo – Nível Mestre
Criado por Bruno Mazini de Almeida

📌 Projeto desenvolvido exclusivamente para fins acadêmicos.

Este projeto é a versão final e mais avançada do jogo Super Trunfo em C, integrando múltiplos conceitos fundamentais de lógica de programação, estruturas de decisão e manipulação de dados.

No jogo, o usuário cadastra duas cartas representando cidades brasileiras, escolhe dois atributos distintos e o programa determina qual carta vence com base em múltiplos critérios de comparação.

🚀 Objetivo do Projeto

Este projeto foi desenvolvido para fins acadêmicos, com o propósito de praticar:

Estruturas condicionais (if, else if, else)

Estruturas de seleção (switch)

Menus dinâmicos

Uso de operador ternário

Manipulação de strings

Cálculo de atributos derivados

Boas práticas de interface no terminal

Lógica de comparação com múltiplos atributos

🎮 Como o jogo funciona
1️⃣ Cadastro das Cartas

O usuário informa para duas cidades:

Nome da cidade

População

Área

PIB (em bilhões)

Pontos turísticos

O programa calcula automaticamente:

Densidade demográfica

PIB per capita

2️⃣ Escolha de Atributos

O jogador escolhe dois atributos diferentes dentre:

População

Área

PIB

Pontos turísticos

Densidade demográfica

✔ O menu do segundo atributo é dinâmico.
✔ O jogador não pode repetir atributos.
✔ O programa impede escolhas inválidas.

3️⃣ Comparação

Para cada atributo:

Maior valor vence, exceto:

Densidade demográfica → menor vence

Depois disso, o programa calcula a soma dos valores ajustados:

Soma maior → vitória

Soma igual → Empate

🧠 Lógica de Vitória
✔ Regra geral
Maior valor vence

✔ Exceção (densidade demográfica)
Menor valor vence


Isso é resolvido internamente com:

(opcao == 5) ? (1.0f / valor) : valor;


Garantindo que a comparação final sempre siga a mesma regra.

📝 Exibição dos Resultados

O programa apresenta:

Nomes das cidades comparadas

Atributos escolhidos

Valores de cada cidade nos dois atributos

Vencedor individual de cada atributo

Soma total

Vencedor final ou empate

A saída é clara, organizada e fácil de interpretar.

🛠️ Tecnologias Utilizadas

Linguagem C

stdio.h

string.h

Operadores ternários

Estruturas de decisão e seleção

📦 Como Compilar e Executar
Compilação:
gcc super_trunfo.c -o super_trunfo

Execução:
./super_trunfo

📚 Pontos de Aprendizado

Este projeto (para fins acadêmicos) fortalece:

Manipulação de entrada e saída

Criação de menus dinâmicos

Estratégias para evitar escolhas inválidas

Cálculo de atributos derivados

Uso inteligente de condicionais

Organização e clareza de código

⭐ Conclusão

Este projeto representa o desafio final do Super Trunfo acadêmico, integrando:

✔ Comparações avançadas
✔ Menus dinâmicos
✔ Atributos múltiplos
✔ Tratamento de erros
✔ Soma e desempate
✔ Exibição profissional

📌 Este programa foi criado apenas para fins educativos e de estudo.
