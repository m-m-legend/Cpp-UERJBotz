# 🤖 UERJBotz — Banco de 40 Exercícios de C++

Material de seleção e treinamento para os trainees de **Computação**. Este banco foi estruturado para avaliar **raciocínio lógico, capacidade de implementação e domínio progressivo da linguagem C++**, sem exigir formalismos matemáticos excessivos nos níveis iniciais.

> A senha da pasta com os gabaritos está com o gestor de Computação do PS e será enviada em tempo oportuno. Quando receberem a senha, extraiam a pasta utilizando WinRAR ou 7Zip.

> Como estratégia adicional de estudos da linguagem, acessem https://www.codewars.com/ e programem se divertindo.
---

## 📊 Distribuição dos Exercícios

| Nível | Qtd. | Foco Principal | Conhecimento Prévio Necessário |
| --- | --- | --- | --- |
| **🟢 Fáceis** | 15 | Lógica de programação e C++ básico/intermediário | Não exige algoritmos clássicos específicos |
| **🟡 Médios** | 15 | STL, Estruturas de Dados, Ordenação, Busca e Grafos | Domínio de biblioteca padrão e grafos básicos |
| **🔴 Difíceis** | 10 | Programação Dinâmica, Algoritmos Gulosos, Grafos e D&C | Modelagem e aplicação de paradigmas algorítmicos |

> 💡 **Observação:** Nos exercícios fáceis, o foco é a lógica pura. Nos difíceis, o objetivo é avaliar a capacidade de reconhecer, modelar e implementar algoritmos estruturados.

---

## 🟢 Exercícios Fáceis

### E01 — Painel de Bateria

Uma estação de robótica recebe a tensão de uma bateria em volts ($V$) e a corrente consumida em ampères ($I$). Leia os dois valores e calcule a potência elétrica:


$$P = V \times I$$


Informe se a potência está:

* **Abaixo de 20 W**
* **Entre 20 W e 50 W**
* **Acima de 50 W**

---

### E02 — Contagem de Peças

Uma bancada possui $N$ peças numeradas de $1$ a $N$. Leia $N$ e, em seguida, $N$ valores inteiros representando o tipo de cada peça.

* Conte quantas peças são do **Tipo 1**, **Tipo 2** e **Tipo 3**.
* Caso apareça qualquer outro tipo, conte-o como **Desconhecido**.

---

### E03 — Média de Sensores

Um robô realizou $N$ leituras de distância em centímetros.

* Leia as $N$ leituras.
* Calcule a média das distâncias.
* Informe quantas leituras ficaram **estritamente abaixo** da média calculada.

---

### E04 — Conversor de Velocidade

Leia uma velocidade em $\text{km/h}$ e converta para $\text{m/s}$ e $\text{cm/s}$. Mostre os dois resultados formatados com **duas casas decimais**.

---

### E05 — Validador de Senha

Leia uma string representando uma senha (sem espaços) e verifique se ela cumpre os critérios:

1. Pelo menos **8 caracteres**.
2. Pelo menos **uma letra maiúscula**.
3. Pelo menos **um dígito**.

*O programa deve informar quais requisitos foram atendidos e quais falharam.*

---

### E06 — Maior Sequência

Leia uma sequência de $N$ números inteiros e determine o tamanho da maior sequência de **valores iguais e consecutivos**.

---

### E07 — Temperatura da Oficina

Leia 24 valores de temperatura (correspondentes às 24 horas do dia). O programa deve processar e informar:

* A **maior** e a **menor** temperatura registrada.
* A **média** de temperatura do dia.
* Em **quantas horas** a temperatura ficou acima de $30^\circ\text{C}$.

---

### E08 — Simulador de Motor

Um motor possui velocidade inteira contida no intervalo $[-100, 100]$. Leia a velocidade inicial e, em seguida, $K$ comandos:

* `'A'` — Aumenta a velocidade em 10.
* `'B'` — Diminui a velocidade em 10.
* `'P'` — Reseta a velocidade para 0.

> ⚠️ A velocidade nunca pode ultrapassar os limites do intervalo $[-100, 100]$. Informe a velocidade final após os $K$ comandos.

---

### E09 — Vetor sem Repetição

Leia $N$ inteiros e construa um segundo vetor contendo apenas a **primeira ocorrência** de cada valor, preservando a ordem original de inserção.

---

### E10 — Estatísticas de Matriz

Leia uma matriz $N \times M$ de inteiros. Calcule e exiba:

* A soma dos elementos de **cada linha**.
* A soma dos elementos de **cada coluna**.
* A posição (linha e coluna) do **maior elemento** presente na matriz.

---

### E11 — Contador de Eventos

Leia uma string com uma sequência de eventos representados pelos caracteres `E`, `D` e `P`.

* Conte a frequência de ocorrência de cada evento.
* Determine qual evento foi o **mais frequente**. Em caso de empate, priorize na ordem de desempate: `E` > `D` > `P`.

---

### E12 — Troco da Oficina

Uma loja de componentes possui moedas de **1, 2, 5, 10, 20 e 50 centavos**. Para um determinado valor de troco menor que R$ 1,00, determine a combinação que utiliza o **menor número de moedas**.

---

### E13 — Busca Simples

Leia $N$ números inteiros e, em seguida, um valor $X$. Informe se $X$ está presente no vetor e, caso esteja, mostre o **índice da primeira ocorrência**.

---

### E14 — Robô no Grid

Um robô parte da origem $(0,0)$ em um plano cartesiano. Leia uma string de comandos contendo as direções:

* `'N'` — Incrementa $y$ ($y \leftarrow y + 1$)
* `'S'` — Decrementa $y$ ($y \leftarrow y - 1$)
* `'L'` — Incrementa $x$ ($x \leftarrow x + 1$)
* `'O'` — Decrementa $x$ ($x \leftarrow x - 1$)

Exiba as coordenadas finais $(x, y)$ do robô.

---

### E15 — Ordenação de Notas

Leia $N$ notas de candidatos e ordene-as em ordem crescente.

> ⛔ **Restrição:** Implemente seu próprio algoritmo de ordenação (ex: *Bubble Sort*, *Selection Sort*). **Não** utilize `std::sort`.

---

## 🟡 Exercícios Médios

### M01 — Compressão de Comandos

Dada uma string de comandos de robô (ex: `AAAABCCCDD`), gere a versão comprimida por corrida de caracteres (ex: `A4B1C3D2`).

> Caso a versão comprimida não seja estritamente menor que a original, mantenha e imprima a string original.

---

### M02 — Janela de Maior Soma

Dado um vetor de inteiros e um valor $K$, encontre a **maior soma de $K$ elementos consecutivos**.

> ⚡ O programa deve ser eficiente para $N$ grande. Evite recalcular do zero a soma de cada janela.

---

### M03 — Duas Somas

Dado um vetor de inteiros e um alvo $X$, determine se existem dois elementos distintos cuja soma seja exatamente $X$.

* Se existirem, imprima os índices desses dois elementos.
* Utilize estruturas da **STL** para evitar uma busca de complexidade $O(N^2)$.

---

### M04 — Frequência de Sensores

Leia $N$ valores inteiros fornecidos por sensores. Exiba todos os valores distintos em **ordem crescente**, acompanhados de suas respectivas frequências de aparição. Use coleções apropriadas da STL.

---

### M05 — Fila de Manutenção

Cada robô é identificado por um ID e possui um nível de prioridade. Leia $N$ robôs e processe-os conforme as regras:

* Prioridade maior é processada primeiro.
* Em caso de empate de prioridade, o de **menor ID** deve ter preferência.

*Simule o processamento usando uma estrutura de dados adequada da STL.*

---

### M06 — Intervalos de Manutenção

Receba $N$ intervalos de tempo no formato `[início, fim]`. Funda (*merge*) todos os intervalos que se sobrepõem e exiba a lista de intervalos resultantes organizados.

---

### M07 — Caminho em Labirinto

Dado um grid $N \times M$ com células livres e bloqueadas, encontre o **menor número de movimentos** para ir de uma posição de origem até um destino.

* Movimentos permitidos: Cima, Baixo, Esquerda e Direita.
* Modele o problema como uma busca em grafo implícito.

---

### M08 — Componentes Conectados

Dado um grafo não direcionado com $N$ vértices e $M$ arestas, determine a quantidade de **componentes conexos** e mostre o tamanho de cada um. Represente o grafo utilizando **lista de adjacência**.

---

### M09 — Verificação de Bipartição

Dado um grafo não direcionado, determine se ele é **bipartido** (colorível com 2 cores sem que vértices adjacentes tenham a mesma cor). Caso seja, imprima uma distribuição válida de cores para os vértices.

---

### M10 — Topologia de Tarefas

Existem $N$ tarefas e $M$ dependências da forma $A \to B$ (a tarefa $A$ deve terminar antes do início da tarefa $B$).

* Produza uma ordem válida de execução (*Ordenação Topológica*).
* Se houver dependência circular no sistema, informe a impossibilidade.

---

### M11 — Dijkstra Básico

Dado um grafo direcionado com pesos não negativos nas arestas, um vértice de origem $S$ e um destino $T$:

* Encontre a menor distância de $S$ até $T$.
* Reconstrua e imprima o caminho percorrido.
* Utilize `std::priority_queue`.

---

### M12 — Subarray de Maior Soma

Dado um vetor de inteiros (com valores positivos e negativos), encontre a maior soma de um subarray contíguo. Além do valor da soma, exiba os **índices inicial e final** desse subarray.

---

### M13 — Agendamento de Reuniões

Dada uma lista de reuniões com horários de `[início, fim]`, escolha o maior número possível de reuniões que não entrem em conflito de horário.

> 💬 Inclua um comentário no código explicando o motivo do critério guloso baseado no **horário de término**.

---

### M14 — MST com Algoritmo de Prim

Dado um grafo não direcionado, conexo e ponderado, encontre a **Árvore Geradora Mínima (MST)** aplicando o algoritmo de Prim com `std::priority_queue`. Mostre as arestas selecionadas e o custo total.

---

### M15 — União de Conjuntos (DSU)

Existem $N$ robôs isolados. Processe uma série de operações:

* `UNION(a, b)` — Une os grupos dos robôs $a$ e $b$.
* `QUERY(a, b)` — Responde se $a$ e $b$ pertencem ao mesmo grupo.

> Implemente uma estrutura **Disjoint Set Union (DSU)** com *compressão de caminho* e *união por tamanho/rank*.

---

## 🔴 Exercícios Difíceis

### D01 — Mochila 0/1 (Knapsack)

Você possui $N$ componentes, cada um com peso $w_i$ e valor $v_i$, e uma caixa de capacidade máxima $C$.

* Selecione um subconjunto de itens (máximo de 1 unidade por item) para maximizar o valor sem exceder a capacidade $C$.
* Implemente usando **Programação Dinâmica**.
* Reconstrua e exiba a lista de itens escolhidos.

---

### D02 — Troco Mínimo com DP

Dadas moedas de valores arbitrários e um valor alvo $V$, determine a **menor quantidade de moedas** necessária para formar $V$ (supondo quantidade ilimitada de cada moeda).

* Caso seja impossível, informe.
* Apresente a reconstrução das moedas utilizadas na solução ótima.

---

### D03 — Distância de Edição (Edit Distance)

Dadas duas strings, calcule o número mínimo de operações (inserção, remoção e substituição) necessárias para transformar a primeira string na segunda.

* Implemente a tabela de Programação Dinâmica.
* Reconstrua e imprima a sequência de operações realizadas.

---

### D04 — Maior Subsequência Crescente (LIS)

Dado um vetor de inteiros, encontre o tamanho da **maior subsequência estritamente crescente**.

* Implemente a solução de complexidade $O(N^2)$ via Programação Dinâmica.
* Reconstrua uma das subsequências resultantes utilizando um vetor de predecessores.

---

### D05 — Interval Scheduling Ponderado

Cada tarefa possui horário de início, término e um lucro associado. Escolha um conjunto de tarefas compatíveis (sem sobreposição) que maximize o lucro total.

* Ordene as tarefas.
* Calcule a última tarefa compatível anterior para cada elemento.
* Resolva aplicando Programação Dinâmica.

---

### D06 — Seleção de Atividades com Restrição

Há um conjunto de atividades (início, fim e custo de preparação) e uma quantidade limitada de $K$ equipes de trabalho. Uma equipe só pode realizar uma atividade por vez.

* Modele uma solução em **Programação Dinâmica** para maximizar o benefício total.
* Explique na documentação as dimensões do estado (equipes ativas vs. tempo).

---

### D07 — Kruskal + DSU

Dado um grafo não direcionado, conexo e ponderado, encontre a **Árvore Geradora Mínima (MST)** usando o algoritmo de Kruskal.

* Ordene as arestas por peso.
* Utiliza a estrutura DSU para detectar ciclos.
* Imprima no console o histórico de uniões realizadas ao longo da execução.

---

### D08 — Pontes em Grafo

Dado um grafo não direcionado (que pode conter múltiplos componentes conexos), identifique todas as **pontes** (arestas cuja remoção aumenta o número de componentes conexos).

* Implemente a busca baseada em DFS calculando os tempos de descoberta (`tin`) e os menores tempos alcançáveis (`low`).

---

### D09 — Caminhos Mínimos em DAG

Dado um Grafo Acíclico Direcionado (DAG) ponderado com peso nas arestas e uma origem $S$:

* Calcule as menores distâncias para todos os vértices utilizando **Ordenação Topológica**.
* Adicione um comentário no código comparando conceitualmente essa abordagem com o algoritmo de Dijkstra, explicando por que este modelo aceita **pesos negativos**.

---

### D10 — Divisão e Conquista: Maior Subarray

Dado um vetor de inteiros, encontre a maior soma de um subarray contíguo utilizando a técnica de **Divisão e Conquista**.

* A função deve resolver recursivamente a metade esquerda, a metade direita e o caso base do subarray que cruza a divisa central.
* Retorne o valor da maior soma e os índices limites correspondentes.

---

## 📌 Guia de Aplicação Recomendado

```
┌──────────────────────────────────────────────────────────┐
│              EXPECTATIVA DE DESENVOLVIMENTO              │
├───────────────┬──────────────────────────────────────────┤
│ Nível         │ Meta / Aplicação Recomendada             │
├───────────────┼──────────────────────────────────────────┤
│ 🟢 Fáceis     │ 13 a 15 exercícios                       │
│               │                                          │
├───────────────┼──────────────────────────────────────────┤
│ 🟡 Médios     │ 8 a 15 exercícios                        │
│               │                                          │
├───────────────┼──────────────────────────────────────────┤
│ 🔴 Difíceis   │ 4 a 10 exercícios                        │
│               │                                          │
└───────────────┴──────────────────────────────────────────┘

```

> 🎯 **Critérios globais de correção:** Além da corretude das saídas nos testes, avalia-se **complexidade temporal/espacial, organização do código, uso de boas práticas C++ (como `const`, passagem por referência e funções auxiliares) e tratamento de casos-limite**.