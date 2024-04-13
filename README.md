<h1 align="center"/> Trabalho MinMax </h1>
<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>
<p> </p>
<p> </p>

# Introdução
Nesse Documento será apresentado:
- O trabalho Proposto:  [Proposto](#proposto)
- O MinMax1: [MinMax1](#minmax1)
- O MinMax2: [MinMax2](#minmax2)
- O MinMax3: [MinMax3](#minmax3)
- A Saída: [Saida](#saida)
- A Conclusão: [Conclusão](#conclusão)
- A Compilação e Execução: [Compilação e Execução](#compilação-e-execução)
## Proposto
<p align="justify">
1. **Implementação dos Algoritmos**
    - Implementar, utilizando C/C++ e seguindo as melhores práticas de programação, os três algoritmos apresentados em sala: MinMax1, MinMax2 e MinMax3.

2. **Avaliação dos Métodos**
    - Avaliar os métodos utilizando diferentes tamanhos de entrada: 1.000, 10.000, 100.000 e 500.000 elementos do tipo inteiro. Esses conjuntos de dados devem ser gerados com valores variando entre 0 a 1000.
    - Cada algoritmo MinMax deve ser executado 10 vezes para cada tamanho de entrada. O tempo de execução obtido será a média dessas 10 execuções.
    - É importante ressaltar que o mesmo conjunto de dados inicial deve ser utilizado para todas as avaliações de um determinado tamanho N de valores. Além disso, considere utilizar os mesmos dados para compor suas variações ordenadas, crescente e decrescente.

3. **Elaboração de Planilhas e Gráficos:**
    - Com base nos tempos obtidos, elaborar uma planilha no Excel para analisar as relações de tempo de forma gráfica.
    - Recomenda-se categorizar os dados por classe, como por exemplo, todos os conjuntos de dados avaliados de 1000 entradas. Outra abordagem é detalhar as comparações por algoritmo quando os dados mudam, considerando tanto conjuntos de dados em ordem crescente como decrescente.

4. **Disponibilização do Código no Git:**
    - Subir o código desenvolvido para um repositório Git.
    - No arquivo README.md, detalhar os experimentos realizados e relacioná-los com os conceitos de análise assintótica discutidos em sala.

<h2 align="center"/> Código </h2>

## MinMax1
O algoritimo MinMax1, apresentado abaixo, possui um custo computacional de 2n. Uma vez que apresenta um for que passa pelo vetor inteiro e dentro dele doi IF, os quais realizam duas verificações condicionais para descobrir o valor maximo e minimo. Dessa forma não importa o caso o custo computacional será O(n).

<p align="center">
<img src="https://github.com/serginnn/TrabalhoMInMax/assets/150479320/a6a4c245-f06f-4de3-9d5d-d2ed9cdd01f2"/> 
</p>

## MinMax2
O algoritimo MinMax2, apresentado abaixo, é constituido por uma estrutura FOR que percorre o vetor por completo e duas estruturas condicionais(IF e ELSE IF), para descobrir o minimo e o maximo valor que constitui no vetor. Assim sendo seu custo computacional varia conforme é necessario a utilização das estruturas condicionais. Portanto quando apenas uma estrutura é ativada o custo computacional passa a ser O(n), sendo n o tamanho do vetor. Quando uma estrutura é ativada com todos os elementos do vetores passando por ela e a outra estrutura é ativada com apenas metade dos elementos passando por ela, tem-se o custo computacional de (3n/2). Quando todos os elementos de n são passados nas duas estruturas condicionais, tem-se o pior caso possivel 2n.

<p align="center">
<img src="https://github.com/serginnn/TrabalhoMInMax/assets/150479320/4fc0eed2-34f4-4466-a72a-4befc30aa550"/> 
</p>

## MinMax3
O algoritimo MinMax3, apresentado abaixo, é um algoritimo mais complexo em que os elementos são analisados em pares. Sendo assim o custo computacional é (n/2), uma vez que se entraram no IF os dados não entraram no else, dessa forma quando os dados entrarem no ELSe eles não entraram no IF mantendo o custo computacional em (n/2). Portando seu custo computacional se mantera constante, sendo 3n/2 o pior, o caso medio e o melhor caso desse codigo.

<p align="center">
<img src="https://github.com/serginnn/TrabalhoMInMax/assets/150479320/3b29ba4d-7117-4a74-90b3-96c9e9e9d106"/> 
</p>

# Saida

Para realizar a saída dos tempos médios de execução, foi necessário executar cada tamanho de vetor 10 vezes para cada tipo de implementação MinMax, tempos esses medidos com a utilização da biblioteca 'ctime'. Para isso foi realizada a função abaixo que calcula o tempo para cada vez que o MinMax é executado, retornando assim a média. 

<p align="center">
<img src="https://github.com/serginnn/TrabalhoMInMax/assets/150479320/456d1c8c-32f2-490e-9746-e550065f1007"/> 
</p>

Para a saída do vetor crescente foi realizado o mesmo procedimento porém com o acréscimo da biblioteca 'algorithm', uma vez que o vetor é preenchido inicialmente com valores aleatorios pela bbiblioteca 'random'. Assim pela função sort() realizou a ordenação do vetor e suas 10 execuções subsequentes.

<p align="center">
<img src="https://github.com/serginnn/TrabalhoMInMax/assets/150479320/f5891831-23c4-414a-827a-88f94e309aa9"/> 
</p>

Por último foi realizado a inversão do vetor, colocando ele em ordem decrescente com a utilização da mesma biblioteca.

<p align="center">
<img src="https://github.com/serginnn/TrabalhoMInMax/assets/150479320/8e9bc956-97db-44e2-81ae-9bc45500e1fc"/> 
</p>

Após as diferentes formas de execução e implementação. Os resultados foram impressos para comparação no arquivo "Out.mps".

<p align="center">
<img src="https://github.com/serginnn/TrabalhoMInMax/assets/150479320/9c125d3a-bda2-4e51-982e-31084eae0ac8"/> 
</p>

# Conclusão
Com a realização desse Trabalho pode-se concluir que apesar dos diferentes tempos de execução para diferentes modelos de máquinas e ambientes:
 - O MinMax3 teve o melhor desempenho para os vetores ordenados crescentemente e decrescentemente.
 - O MinMax1 teve o melhor desempenho para os vetores aleatorios.
 - O MinMax2 no geral se manteve constante sendo um caso intermediário. 

# Compilação e Execução

Para a compilação e execução do programa foi utilizado um MakeFile. O qual segue esses procedimentos:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |




