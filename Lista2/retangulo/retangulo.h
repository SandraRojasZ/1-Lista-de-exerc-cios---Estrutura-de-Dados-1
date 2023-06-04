//#include "retangulo.h"

//Ponto A (xa, ya) inferior Direito   2
//Ponto B (xb, yb) superior Esquerdo  1

typedef struct ponto Ponto;

typedef struct retangulo Retangulo;

Ponto *criaPonto (float x, float y);

Retangulo* criaRetangulo(Ponto* pb, Ponto* pa);

void liberaPonto(Ponto* p);

void liberaRetangulo(Retangulo* r);

//Área do Retangulo
float aretangulo(Retangulo* r);

//Perimetro do Retangulo
float pretangulo(Retangulo* r);

//Comprimento da Diagonal do Retangulo
float cdiagonalretangulo(Retangulo* r);
