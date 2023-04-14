#include <stdio.h>
#include <stdlib.h>

/**
*sb: salario bruto
*sf: salario familia
*v:  vantagens
*d:  deduções
*nh: número hora
*sh: salário hora
*vp: valor por filho
*nf: número filhos
**/

//Atividade  2 - Calculo de vantagens e deduções com passagem por referência

//Adicionar o cálculo de ponteiros antes da função principal
void vantagem(float *sb, float *sf, float *v, float nh, float sh, int nf, float vp)
{
    *sb = nh *  sh;
    *sf = nf *  vp;
    *v  = *sb +  *sf;

}
//Adicionar o cálculo de ponteiros antes da função principal
void deducoes(float *inss, float *irpf, float *d, float sb, float taxair)
{
    *inss = sb   *  0.08;
    *irpf = sb   *  taxair;
    *d    = *inss +  *irpf;

}


int main()
{
 //declarando as variáveis
    float sb, sf, v, inss, irpf, d;
    float nh, sh, vp, taxair;
    int nf;

//solicita o usuario digitar os dados
    printf("Insira numero hora: ");
    scanf("%f", &nh);

    printf("Insira numero salario hora: ");
    scanf("%f", &sh);

    printf("Insira numero filho: ");
    scanf("%d", &nf);

    printf("Insira valor por filho: ");
    scanf("%f", &vp);

    printf("Insira a taxa de ir: ");
    scanf("%f", &taxair);

     printf("\n");

    //chamando os valores para mostrar o resultado do ponteiro vantagem
    vantagem(&sb, &sf, &v, nh,  sh, nf, vp);
    printf("Vantagens = %.2f", v);
    printf("\n");

    //chamando os valores para mostrar o resultado do ponteiro deducoes
    deducoes(&inss, &irpf, &d, sb, taxair) ;
    printf("Deduções = %.2f", d);


}

