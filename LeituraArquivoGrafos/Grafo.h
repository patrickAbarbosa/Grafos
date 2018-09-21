#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include <fstream>

class Grafo
{
public:
    Grafo(string nomeArquivo);
    Grafo();
    ~Grafo();

private:
    fstream *arquivo;

};

#endif // GRAFO_H_INCLUDED
