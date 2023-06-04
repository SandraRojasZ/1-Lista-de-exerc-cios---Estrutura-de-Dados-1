//retangulo.h

//Ponto A (xa, ya) inferior Direito
//Ponto B (xb, yb) superior Esquerdo

typedef struct ponto Ponto;

typedef struct retangulo Retangulo;

Ponto *criaPonto (float x, float y);

Retangulo* criaRetangulo(Ponto* pb, Ponto* pa);

void liberaPonto(Ponto* p);

void liberaRetangulo(Retangulo* r);

//Área do Retangulo
float aRetangulo(Retangulo* r);

//Perimetro do Retangulo
float pRetangulo(Retangulo* r);

//Comprimento da Diagonal do Retangulo
float cdiagonalRetangulo(Retangulo* r);
