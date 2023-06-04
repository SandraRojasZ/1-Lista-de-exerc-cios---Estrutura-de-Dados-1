#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro {
    char nome[40];
    int idade;
    char endereco[40];
} CADASTRO;

CADASTRO* aloc_memoria(int n);
void coleta_dados(CADASTRO* cad, int n);
void salvar_dados(CADASTRO* cad, int n);
CADASTRO* carregar_dados(int* n);

int main() {
    int n;
    printf("Insira o numero de cadastros: ");
    scanf("%d", &n);
    getchar();
    printf("\n");

    CADASTRO* p;
    int opcao;

    p = carregar_dados(&n);

    printf("\n");

    if (p == NULL) {
        p = aloc_memoria(n);

        printf("\tInsira os dados cadastrados\n");
        coleta_dados(p, n);

        salvar_dados(p, n);
    } else {
        printf("Dados carregados com sucesso:\n");
        for (int i = 0; i < n; i++) {
            printf("Cadastro %d:\n", i + 1);
            printf("Nome: %s\n", p[i].nome);
            printf("Idade: %d\n", p[i].idade);
            printf("Endereco: %s\n", p[i].endereco);
            printf("\n");
        }

        printf("\n");

        printf("Deseja adicionar mais cadastros? (1 - Sim / 0 - Não) ");
        scanf("%d", &opcao);
        getchar();

        if (opcao) {
            int novos_cadastros;
            printf("Quantos cadastros deseja adicionar? ");
            scanf("%d", &novos_cadastros);
            getchar();

            CADASTRO* novos_p = realloc(p, (n + novos_cadastros) * sizeof(CADASTRO));
            if (novos_p == NULL) {
                printf("Erro ao alocar memoria para os novos cadastros!");
            } else {
                p = novos_p;
                printf("Insira os dados dos novos cadastros:\n\n");
                coleta_dados(p + n, novos_cadastros);
                n += novos_cadastros;
                salvar_dados(p, n);
            }
        }

        free(p);
    }

    return 0;
}

CADASTRO* aloc_memoria(int n) {
    CADASTRO* p = (CADASTRO*) malloc(n * sizeof(CADASTRO));
    if (p == NULL) {
        printf("Nao foi possivel fazer a alocação de memoria!");
        return NULL;
    }
    return p;
}

void coleta_dados(CADASTRO* cad, int n) {
    for (int i = 0; i < n; i++) {
        printf("Cadastro %d\n", i + 1);

        printf("Nome: ");
        fgets(cad[i].nome, 40, stdin);

        printf("Idade: ");
        scanf("%d", &cad[i].idade);
        getchar();

        printf("Endereco: ");
        fgets(cad[i].endereco, 40, stdin);

        printf("\n");
    }
}

void salvar_dados(CADASTRO* cad, int n) {
    FILE* arquivo = fopen("dados.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita!");
        return;
    }

    fwrite(&n, sizeof(int), 1, arquivo);

    for (int i = 0; i < n; i++) {
        fwrite(&cad[i], sizeof(CADASTRO), 1, arquivo);
    }

    fclose(arquivo);
}

CADASTRO* carregar_dados(int* n) {
    FILE* arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Arquivo de dados nao encontrado.\n");
        return NULL;
    }

    fread(n, sizeof(int), 1, arquivo);
    CADASTRO* p = aloc_memoria(*n);

    for (int i = 0; i < *n; i++) {
        fread(&p[i], sizeof(CADASTRO), 1, arquivo);
    }

    fclose(arquivo);
    return p;
}
