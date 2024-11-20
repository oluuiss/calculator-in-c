<h1>🛠️ Hello, world!</h1>
<p>Primeiramente iniciei puxando algumas bibliotecas essencias e definindo as linhas e colunas para 2 (Matriz 2x2). <br>
Em seguida criei algumas funçõs para que o código não fique tão bagunçado. Realizei todas as funções em um código só pois achei mais prático (para mim, somente neste projeto). <br>
Nas funções temos 5 no total. Em primeiro temos a void do menu, seguido do fatorial, binomial, permutação e arrajo. Utilizei long long para números mais distantes, pois facilita o código e há menos chances de dar erro.
</p>

<h1>📍 Explicando cada função</h1>
<p>
  Inicialmente temos a função do fatorial (n!, um número que multiplica pelo seu antecessor até chegar em 1). Em seguida realizei a função do binomial (n! / n! - (n-k)!) utilizando a fórmula do fatorial e adicionando um elemento K para realizar a conta. Após isso, fiz a função da permutação (n! / n1! * n2! * n3!...) que utiliza também o fatorial, porém, se for sem repetição utiliza-se apenas o n!, caso ao contrário ele realiza o fatorial de todos os números repetidos, por exemplo: a palavra 🐘 ELEFANTE - possui 8 elementos com 1 que se repete 3 vezes (E), então ficaria: 8! / 3!. E por fim, a função de arranjo (n! / (n-p)!).
</p>

<h1>📌 Explicando a Main</h1>
<p>
  Iniciei com while para que o código fique sempre em loop, em seguida puxei a função do menu com um scanf para armazenar a resposta do usuário. Após isso utilizei swith case para todos os números que o usuário digitar seguindo os números disponíveis no menu. <br>
Resumindo: Dentro de cada case eu puxei a função de cada número correspondente ao menu. Somente na matriz que fiz o código sem utilizar função mas é bem simples. Na matriz de subtração e adição muda-se apenas o sinal (+ e -), agora na multiplicação tive que adicionar um elemento K que seleciona o elemento de a[i] e de b[j], multiplica esses dois valores e adiciona o resultado à posição c[i][j]. <br>
E para finalizar o código para sair do loop, basta o usuário digitar 0.
</p>


<h2>📂 Questions</h2>
<p>1º Porque eu escolhi a linguagem C? Escolhi C principalmente por conta da graduação, pois estávamos utilizando C na época (2º período).<br>
2º Tem algum motivo por não ter feito em outra linguagem? Inicialmente pensei em fazer em Java por ser uma linguagem que eu tenho mais fidelidade. Porém, resolvi fazer em C mesmo por conta da graduação.
3º Algum motivo por nao ter feito uma interface? Sim, pois foi um trabalho feito para graduação e não tive tempo. Como eu disse antes, gostaria de ter feito em outra linguagem para adquirir mais conhecimento e criar uma interface interativa, porém, fiquei em C mesmo.
</p>
