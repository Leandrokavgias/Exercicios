#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

Produto produtos[MAX_PRODUTOS];
int num_produtos = 0;

// Fun��o para adicionar um produto
void adicionarProduto() {
    if (num_produtos < MAX_PRODUTOS) {
        Produto novoProduto;
        printf("Digite o ID do produto: ");
        scanf("%d", &novoProduto.id);
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", novoProduto.nome);  // L� string com espa�os
        printf("Digite o pre�o do produto: ");
        scanf("%f", &novoProduto.preco);
        produtos[num_produtos++] = novoProduto;
        printf("Produto adicionado com sucesso!\n");
    } else {
        printf("Limite de produtos atingido.\n");
    }
}

void contarProdutosAbaixoDeUmValor(float valor) {
    int contador = 0;
    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].preco < valor) {
            contador++;
        }
    }
    printf("N�mero de produtos abaixo de %.2f: %d\n", valor, contador);
}

void buscarProdutoPorID(int id) {
    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].id == id) {
            printf("Produto encontrado: ID: %d, Nome: %s, Pre�o: %.2f\n", produtos[i].id, produtos[i].nome, produtos[i].preco);
            return;
        }
    }
    printf("Produto com ID %d n�o encontrado.\n", id);
}

void atualizarValorProduto(int id, float novoPreco) {
    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].id == id) {
            produtos[i].preco = novoPreco;
            printf("Pre�o do produto ID %d atualizado para %.2f\n", id, novoPreco);
            return;
        }
    }
    printf("Produto com ID %d n�o encontrado.\n", id);
}

float calcularMediaPrecos() {
    float soma = 0.0;
    for (int i = 0; i < num_produtos; i++) {
        soma += produtos[i].preco;
    }
    return num_produtos > 0 ? soma / num_produtos : 0.0;
}

void exibirProdutosAcimaDaMedia() {
    float media = calcularMediaPrecos();
    printf("Produtos acima da m�dia (%.2f):\n", media);
    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].preco > media) {
            printf("ID: %d, Nome: %s, Pre�o: %.2f\n", produtos[i].id, produtos[i].nome, produtos[i].preco);
        }
    }
}

int main() {
    int escolha;
    do {
        printf("\nEscolha uma op��o:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Contar produtos abaixo de um valor\n");
        printf("3. Buscar produto pelo ID\n");
        printf("4. Atualizar valor do produto\n");
        printf("5. Calcular m�dia de pre�os\n");
        printf("6. Exibir produtos acima da m�dia\n");
        printf("0. Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionarProduto();
                break;
            case 2: {
                float valor;
                printf("Digite o valor: ");
                scanf("%f", &valor);
                contarProdutosAbaixoDeUmValor(valor);
                break;
            }
            case 3: {
                int id;
                printf("Digite o ID do produto: ");
                scanf("%d", &id);
                buscarProdutoPorID(id);
                break;
            }
            case 4: {
                int id;
                float novoPreco;
                printf("Digite o ID do produto: ");
                scanf("%d", &id);
                printf("Digite o novo pre�o: ");
                scanf("%f", &novoPreco);
                atualizarValorProduto(id, novoPreco);
                break;
            }
            case 5: {
                float media = calcularMediaPrecos();
                printf("A m�dia dos pre�os �: %.2f\n", media);
                break;
            }
            case 6:
                exibirProdutosAcimaDaMedia();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}


