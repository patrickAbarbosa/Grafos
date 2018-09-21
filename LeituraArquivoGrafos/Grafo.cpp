#include "Grafo.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Grafo::Grafo()
{

}

Grafo::Grafo(string nomeArquivo)
{
    arquivo = new ifstream (nomeArquivo);
}
