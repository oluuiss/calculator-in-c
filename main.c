#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#define LINHAS 2
#define COLUNAS 2

void menu(){
    printf("--- Escolha as seguintes opções ----\n");
    printf("| 1⁰ - Fatorial                     |\n");
    printf("| 2⁰ - Binominal                    |\n");
    printf("| 3⁰ - Permutação                   |\n");
    printf("| 4⁰ - Arranjo                      |\n");
    printf("| 5⁰ - Combinação                   |\n");
    printf("| 6⁰ - Matriz                       |\n");
    printf("| 0⁰ - Sair                         |\n");
    printf("------------------------------------\n");
    printf("Opção desejada: ");
}

// FUNÇÃO CALCULANDO FATORIAL DE UM NÚMERO
long long fatorial(int fat){
    long long resfatorial = 1;
    // se o fatorial for menor ou igual a 0, nao é definido.
    if (fat < 0){
                printf("| Fatorial não utiliza números negativos.\n");
                printf("------------------------------------------\n\n");
                return -1; // retorna -1 como valor de erro.
            } else if (fat == 0){
                return 1;
            } else {
                    for (int i = 1; i <= fat; i++){
                    resfatorial *= i;
                }
            return resfatorial;
    }
}

// FUNÇÃO  COMBINAÇÃO (binomial) Cn,k
// Formula: n3! / n! - (n-k)!
long long combinacao(int n, int k){
    long long resk = 1;
    
    if (k > n) {
        return 0; // Usuário não podera escolher mais elementos doque o total disponível.
    }
    return fatorial(n)/(fatorial(k) * fatorial(n-k));

}

// FUNÇÃO PERMUTAÇÃO
// Formula: n! / n1! * n2! * n3!...
long long permutacao(int n, int k, int i){
    int repetidos[i];
    for (i = 0; i < k; i++) {
        printf("| Digite a quantidade de elementos repetidos para o grupo %d: ", i + 1);
        scanf("%d", &repetidos[i]);
    }
    long long permutacao = fatorial(n);
    for (int i = 0; i < k; i++) {
        permutacao /= fatorial(repetidos[i]);
    }
    printf("| Número de permutações com repetição: %lld.\n", permutacao);
    printf("---------------------------------------------------------\n\n");
    return 1;
}

// FUNÇÃO ARRANJO
long long arranjo(int n, int p) {
    return fatorial(n) / fatorial (n-p);
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    /* opções, numero do fatorial, resultado, n, k, i, p, com/sem repetição, adiçao ou subtracao
     */
int opcoes, f, resultado, n, k, i, j, c, p, cs, as;
    while(1){
    // Puxo o a void do menu e respondo com o scanf na linha abaixo.
    menu();
    scanf("%d", &opcoes);

    switch (opcoes) {
        // CASO USUARIO DIGITE 1, SERÁ FATORIAL.
        case 1:
        // Formula: n!, n = 10!, n = 10 * 9 * 7 * 6...
            printf("\n\n--- Opção escolhida: Fatorial ----\n");
            printf("| Por favor, digite valores abaixo de 12.\n");
            printf("| Digite um número: ");
            scanf("%d", &f);
            
            // chama a função fatorial e armazena o resultado
            resultado = fatorial(f);

            if (resultado != -1) {
                printf("| O fatorial de %d é: %d\n", f, resultado);
                printf("-----------------------------------------------\n\n");
            }
            break;

        // CASO USUARIO DIGITE 2, SERÁ BINOMIAL.
        case 2:
        // Formula: Cn,k = n! / k! (n-k)!
            printf("\n\n--- Opção escolhida: Binomial ----\n");
            printf("| Por favor, digite valores abaixo de 12.\n");
            printf("| Digite o número de n!: ");
            scanf("%d", &n);
            printf("| Agora, digite o número de k!: ");
            scanf("%d", &k);

            resultado = combinacao(n,k);
            if (resultado != -1) {
                printf("| O binomial de C(%d,%d) é: %d\n", n, k, resultado);
                printf("----------------------------------\n\n");
            }
            break;

        // PERMUTAÇÃO
        case 3:
            // PERMUTAÇÃO COM OU SEM REPETIÇÃO?
            printf("\n\n--- Opção escolhida: Permutação ----\n");
            printf("| Por favor, digite valores abaixo de 12.\n");
            printf("| Com ou sem repetição? (1 = Com repetição, 2 = Sem repetição)\n");
            printf("| Resposta: ");
            scanf("%d", &cs);
            // COM REPETIÇÃO
            if (cs == 1) {
                printf("| Digite o número total de elementos (n): ");
                scanf("%d", &n);
                printf("| Digite o número total de elementos repetidos (k): ");
                scanf("%d", &k);
                permutacao(n,k,i);
            // SEM REPETIÇÃO
            } else if (cs == 2) {
                printf("| Digite um número: ");
                scanf("%d", &n);
                resultado = fatorial(n);

            if (resultado != -1) {
                printf("| A permutação sem repetição de %d letras e/ou números é: %d.\n", n, resultado);
                printf("------------------------------------------------------------------\n\n");
            }
            }
            break;

        // ARRANJO
        // Formula: n! / (n-p)!
        case 4:
            printf("\n\n--- Opção escolhida: Arranjo ----\n");
            printf("| Por favor, digite valores abaixo de 12.\n");
            printf("| Digite o número total de elementos: ");
            scanf("%d", &n);
            printf("| Digite o número de elementos a ser organizado: ");
            scanf("%d", &p);

            if (p > n) {
                printf("| Erro: p não pode ser maior que n.\n");
                printf("----------------------------------------\n\n");
            } else {
                resultado = arranjo(n,p);
                printf("| Número de arranjos A(%d, %d) = %d.\n", n, p, resultado);
                printf("-------------------------------------------------------\n\n");
            }
            break;

        // COMBINAÇÃO
        case 5:
        // Formula: Cn,k = n! / k! (n-k)!
            printf("\n\n--- Opção escolhida: Combinação ----\n");
            printf("| Por favor, digite valores abaixo de 12.\n");
            printf("| Digite o número de n!: ");
            scanf("%d", &n);
            printf("| Agora, digite o número de k!: ");
            scanf("%d", &k);

            resultado = combinacao(n,k);
            if (resultado != -1) {
                printf("| A combinação de C(%d,%d) é: %d\n", n, k, resultado);
                printf("----------------------------------\n\n");
            }
            break;

            // MATRIZ
            case 6:
            printf("\n\n--- Opção escolhida: Matriz ----\n");
            printf("| Adição ou Subtração de matriz? (1 = Adição, 2 = Subtração, 3 = Multiplicação)\n");
            printf("| Resposta: ");
            scanf("%d", &as);
            
            int a[LINHAS][COLUNAS], b[LINHAS][COLUNAS], c[LINHAS][COLUNAS];

            // ADIÇÃO DA MATRIZ
            if (as == 1) {
                // MATRIZ A
                printf("| Adição de matriz. Digite os elementos da matriz A(2x2):\n");
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        printf("| A[%d][%d]: ", i+1, j+1);
                        scanf("%d", &a[i][j]);
                    }
                }
                // MATRIZ B
                printf("| Digite os elementos da matriz B (%d x %d):\n", LINHAS,COLUNAS);
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        printf("| B[%d][%d]: ", i+1, j+1);
                        scanf("%d", &b[i][j]);
                    }
                }

                // Adição das matrizes
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        c[i][j] = a[i][j] + b[i][j];
                    }
                }

                // Resultado
                printf ("| Matriz A + B:\n");
                for (i=0; i<LINHAS; i++) {
                    printf("| ");
                    for (j=0; j<COLUNAS; j++) {
                        printf("%d ", c[i][j]);
                    }
                    printf("\n");
                }
                printf("----------------------------------------\n\n");
            }
            // SUBTRAÇÃO
            else if (as == 2) {
                // MATRIZ A
                printf("| Subtração de matriz. Digite os elementos da matriz A(2x2):\n");
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        printf("| A[%d][%d]: ", i+1, j+1);
                        scanf("%d", &a[i][j]);
                    }
                }
                // MATRIZ B
                printf("| Digite os elementos da matriz B (%d x %d):\n", LINHAS,COLUNAS);
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        printf("| B[%d][%d]: ", i+1, j+1);
                        scanf("%d", &b[i][j]);
                    }
                }

                // Subtração das matrizes
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        c[i][j] = a[i][j] - b[i][j];
                    }
                }

                // Resultado
                printf ("| Matriz A - B:\n");
                for (i=0; i<LINHAS; i++) {
                    printf("| ");
                    for (j=0; j<COLUNAS; j++) {
                        printf("%d ", c[i][j]);
                    }
                    printf("\n");
                }
                printf("----------------------------------------\n\n\n");
            } 
            // MULTIPLICAÇÃO
            else if (as == 3){
                // MATRIZ A
                printf("| Multiplicação de matriz. Digite os elementos da matriz A(2x2):\n");
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        printf("| A[%d][%d]: ", i+1, j+1);
                        scanf("%d", &a[i][j]);
                    }
                }
                // MATRIZ B
                printf("| Digite os elementos da matriz B (%d x %d):\n", LINHAS,COLUNAS);
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        printf("| B[%d][%d]: ", i+1, j+1);
                        scanf("%d", &b[i][j]);
                    }
                }

                // Multiplicando as matrizes = LINHAS * COLUNA
                for (i=0; i<LINHAS; i++) {
                    for (j=0; j<COLUNAS; j++) {
                        c[i][j] = 0;
                        /*  k seleciona o elemento de a[i] e de b[j],
                        multiplica esses dois valores e adiciona o resultado à posição c[i][j]
                        que faz a soma dos valores obtidos. */
                        for (k=0; k<LINHAS;k++) {
                            c[i][j] = c[i][j] + a[i][k] * b[k][j];
                        }
                        
                    }
                }

                // Resultado
                printf ("| Matriz A * B:\n");
                for (i=0; i<LINHAS; i++) {
                    printf("| ");
                    for (j=0; j<COLUNAS; j++) {
                        printf("%d ", c[i][j]);
                    }
                    printf("\n");
                }
                printf("---------------------------------------\n\n\n");
            }
            break;

            case 0:
            printf("\n\n---------- Opção escolhida: Sair -----------\n");
            printf("| Código encerrado com êxito. Volte sempre!\n");
            printf("--------------------------------------------\n\n\n");
            return 0;
        }
        }
    }
