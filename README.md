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

<p align="center">
<img src="imagens/input.png"/> 
</p>

<p align="justify">
	Nessa Figura 1 é possivel ver como seria a entrada correta do programa.
</p>

<p align="center">
<img src="imagens/output.png"/> 
</p>

<p align="justify">
	Nessa Figura 2 é possivel ver como seria a saida para a entrada da matriz da primiera figura.
</p>

# Regras
<p align="justify">
	As Regras do jogo são:<br/>
	- Uma célula viva com menos de dois vizinhos vivos morre (solidão).<br/>
	- Uma célula viva com mais de três vizinhos vivos morre (superpopulação).<br/>
	- Uma célula viva com dois ou três vizinhos vivos sobrevive.<br/>
	- Uma célula morta com exatamente três vizinhos vivos se torna viva (reprodução).<br/>

	Sendo que os vizinhos são considerados todas as casas ao redor da célula, inclusive na sua diagonal.
</p>

<p align="center">
<img src="imagens/FuncionamentoJogo.png"/> 
</p>

<p align="justify">
	Nessa Figura 3 é possivel se ter uma ideia de como o jogo funciona.
</p>



# Compilação e Execução

Para a compilação e execução do programa foi utilizado um MakeFile. O qual segue esses procedimentos:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |




