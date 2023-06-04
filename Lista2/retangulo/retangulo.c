#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

//Ponto A (xa, ya) inferior Direito
//Ponto B (xb, yb) superior Esquerdo


typedef struct ponto{
    float x;
    float y;
}Ponto;

typedef struct retangulo{
     Ponto superiorB;
     Ponto inferiorA;
}Retangulo;

Ponto *criaPonto (float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;

    return p;
}

Retangulo* criaRetangulo(Ponto* pb, Ponto* pa){
    Retangulo* r = (Retangulo*)malloc(sizeof(Retangulo));
    r->superiorB = *pb;
    r->inferiorA = *pa;

    return r;
}

void liberaPonto(Ponto* p){
    free(p);
}

void liberaRetangulo(Retangulo* r){
    liberaPonto(&r->superiorB);
    liberaPonto(&r->inferiorA);

    free(r);
}

float aRetangulo(Retangulo* r){
    //h: altura     b: base
   // float h, b;
    float b = fabs(r->superiorB.x - r->inferiorA.x);
    float h = fabs(r->superiorB.y - r->inferiorA.y);

    return b * h;
}

float pRetangulo(Retangulo* r){
    //h: altura     b: base
    float h, b;
    b = fabs(r->superiorB.x - r->inferiorA.x);
    h = fabs(r->superiorB.y - r->inferiorA.y);

    return h + h + b + b;
}

float cdiagonalRetangulo(Retangulo* r){
    //h: altura     b: base
     float h, b;
     b = fabs(r->superiorB.x - r->inferiorA.x);
     h = fabs(r->superiorB.y - r->inferiorA.y);

     //hipotenusa = raiz quadrada (base * 2 + altura * 2)
     return sqrt(pow(b, 2) + pow(h, 2));
}
