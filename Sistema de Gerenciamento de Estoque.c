#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define mfiliais 10
#define mprodutos 15

void inserirDados(int gerenc[][mprodutos], int tam, int tam1){
    int i, j;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam1; j++)
        {
            printf("\n\tDigite a quantidade do produto %d na filial %d: ", j++, i++);
            scanf("%d", &gerenc[i][j]);
        }
        system("cls");
    }
}

void atualizarEstoque(int gerenc[][mprodutos], int tam, int tam1)
{
    int filial, produto, valor, opcao;

    do {
        printf("\n===== ATUALIZA��O DE ESTOQUE =====\n");

        printf("\nInforme a filial (1 a %d): ", tam);
        scanf("%d", &filial);
        printf("Informe o produto (1 a %d): ", tam1);
        scanf("%d", &produto);

        if (filial < 1 || filial > tam || produto < 1 || produto > tam1)
        {
            printf("Dados inv�lidos! Tente novamente.\n");
        }
        else
        {
            printf("Digite o novo valor de estoque: ");
            scanf("%d", &valor);

            if (valor >= 0)
            {
                gerenc[filial - 1][produto - 1] = valor;
                printf("Estoque atualizado com sucesso!\n");
            }
            else
            {
                printf("N�o � permitido estoque negativo.\n");
            }
        }

        printf("\n1 - Atualizar outro produto");
        printf("\n0 - Voltar para o menu principal\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        system("cls");

    } while (opcao != 0);
}

void totalEstoquePorProduto(int gerenc[][mprodutos], int tam, int tam1)
{
    int i, j;
    int v[mprodutos] = {};

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam1; j++)
        {
            v[j] += gerenc[i][j];
        }
    }

    printf("\n--- Estoque Total por Produto ---\n");
    for (i = 0; i < tam1; i++)
    {
        printf("\tProduto %d : %d unidades\n", i + 1, v[i]);
    }
}

void totalEstoquePorFilial(int gerenc[][mprodutos], int tam, int tam1)
{
    int i, j;
    int v[mfiliais] = {};

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam1; j++)
        {
            v[i] += gerenc[i][j];
        }
    }

    printf("\n--- Estoque Total por Filial ---\n");
    for (i = 0; i < tam; i++)
    {
        printf("\tFilial %d : %d unidades\n", i + 1, v[i]);
    }
}

void produtoMaiorMenorEstoque(int gerenc[][mprodutos], int tam, int tam1)
{
    int i, j;
    int v[mprodutos] = {};
    int nmaior, nmenor;
    int idMaior = 0, idMenor = 0;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam1; j++)
        {
            v[j] += gerenc[i][j];
        }
    }

    nmaior = v[0];
    nmenor = v[0];

    for (i = 1; i < tam1; i++)
    {
        if (nmaior < v[i])
        {
            nmaior = v[i];
            idMaior = i;
        }
        if (nmenor > v[i])
        {
            nmenor = v[i];
            idMenor = i;
        }
    }
    printf("\nProduto com MAIOR estoque: Produto %d com %d unidades", idMaior + 1, nmaior);
    printf("\nProduto com MENOR estoque: Produto %d com %d unidades\n", idMenor + 1, nmenor);
}

void filialMaiorMenorEstoque(int gerenc[][mprodutos], int tam, int tam1)
{
    int i, j;
    int v[mfiliais] = {};
    int nmaior, nmenor;
    int idMaior = 0, idMenor = 0;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam1; j++)
        {
            v[i] += gerenc[i][j];
        }
    }

    nmaior = v[0];
    nmenor = v[0];

    for (i = 1; i < tam; i++)
    {
        if (nmaior < v[i])
        {
            nmaior = v[i];
            idMaior = i;
        }
        if (nmenor > v[i])
        {
            nmenor = v[i];
            idMenor = i;
        }
    }
    printf("\nFilial com MAIS estoque: Filial %d com %d unidades", idMaior + 1, nmaior);
    printf("\nFilial com MENOS estoque: Filial %d com %d unidades\n", idMenor + 1, nmenor);
}

void mediaEstoquePorFilial(int gerenc[][mprodutos], int tam, int tam1)
{
    int filial, i, j;
    int soma = 0;
    float media = 0;

    printf("\nDigite a filial para calcular a m�dia (1 a %d): ", tam);
    scanf("%d", &filial);

    if (filial < 1 || filial > tam)
    {
        printf("Filial inv�lida!\n");
        return;
    }

    i = filial - 1;
    for (j = 0; j < tam1; j++)
    {
        soma += gerenc[i][j];
    }

    if (tam1 > 0)
    {
        media = (float)soma / tam1;
    }

    printf("\nA m�dia de estoque na Filial %d � de %.2f produtos.\n", filial, media);
}

void mediaEstoquePorProduto(int gerenc[][mprodutos], int tam, int tam1)
{
    int produto, i, j;
    int soma = 0;
    float media = 0;

    printf("\nDigite o produto para calcular a m�dia (1 a %d): ", tam1);
    scanf("%d", &produto);

    if (produto < 1 || produto > tam1)
    {
        printf("Produto inv�lido!\n");
        return;
    }

    j = produto - 1;
    for (i = 0; i < tam; i++)
    {
        soma += gerenc[i][j];
    }

    if (tam > 0)
    {
        media = (float)soma / tam;
    }

    printf("\nA m�dia de estoque do Produto %d � de %.2f unidades.\n", produto, media);
}

void consultas(int gerenc[][mprodutos], int tam, int tam1) {
    int opcao;
    do {
        printf("\n===== CONSULTAS =====\n");
        printf("1 - Estoque total de cada produto\n");
        printf("2 - Estoque total de cada filial\n");
        printf("3 - Produto com maior e menor estoque\n");
        printf("4 - Filial com mais e menos estoque\n");
        printf("5 - M�dia de estoque em uma filial\n");
        printf("6 - M�dia de estoque de um produto\n");
        printf("0 - Voltar para o menu principal\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1: totalEstoquePorProduto(gerenc, tam, tam1); break;
            case 2: totalEstoquePorFilial(gerenc, tam, tam1); break;
            case 3: produtoMaiorMenorEstoque(gerenc, tam, tam1); break;
            case 4: filialMaiorMenorEstoque(gerenc, tam, tam1); break;
            case 5: mediaEstoquePorFilial(gerenc, tam, tam1); break;
            case 6: mediaEstoquePorProduto(gerenc, tam, tam1); break;
            case 0: printf("Voltando ao menu principal...\n"); break;
            default: printf("Op��o inv�lida!\n");
        }

        if (opcao != 0) {
            system("pause");
            system("cls");
        }

    } while (opcao != 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int gerenc[mfiliais][mprodutos];
    int tam = 0, tam1 = 0;
    int opcao;

    do {
        printf("\n===== SISTEMA DE GERENCIAMENTO DE ESTOQUE =====\n");
        printf("1 - Cadastro Inicial\n");
        printf("2 - Atualiza��o do Estoque\n");
        printf("3 - Consultas\n");
        printf("4 - Encerrar o Programa\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                printf("\n--- Cadastro Inicial do Estoque ---\n");
                printf("Digite a quantidade de filiais (m�ximo 10): ");
                scanf("%d", &tam);
                printf("Digite a quantidade de produtos (m�ximo 15): ");
                scanf("%d", &tam1);
                system("cls");
                inserirDados(gerenc, tam, tam1);
                break;

            case 2:
                atualizarEstoque(gerenc, tam, tam1);
                break;

            case 3:
                consultas(gerenc, tam, tam1);
                break;

            case 4:
                printf("\n====================================\n");
                printf(" Programa encerrado com sucesso! \n");
                printf("====================================\n");
                break;

            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }

        if (opcao != 4) {
            system("pause");
            system("cls");
        }

    } while (opcao != 4);

    return 0;
}
