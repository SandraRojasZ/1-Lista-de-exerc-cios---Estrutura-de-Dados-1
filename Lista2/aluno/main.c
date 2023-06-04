#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct aluno{
    int matricula;
    char nome[40];
    float n1;
    float n2;
    float n3;
    }ALUNO;

void main()
{
    int i = 0, n = 5, l = 0;
    float m = 0, maiorM = 0;

    setlocale(LC_ALL,"");

    ALUNO *alunos;
    alunos =(ALUNO*)malloc(n*sizeof(ALUNO));

//Entrada de dados
    for(i = 0; i < n; i++){
        printf("\nAluno %d\n", i);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        getchar();
        gets(alunos[i].nome);
        //scanf("%s", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].n1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].n2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].n3);

    }

    for(i = 0; i < n; i++){
         m = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
        if (m > maiorM){
            maiorM = m;
            l = i;
        }
    }
    printf("\nAluno com media: %s\n", alunos[l].nome);
    printf("Media: %.2f\n", maiorM);

    free(alunos);

    system("pause");
}
