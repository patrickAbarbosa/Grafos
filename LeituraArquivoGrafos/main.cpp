#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "Teste de Leitura" << endl;
    fstream file;

    cout << "Abrindo o arquivo txt" << endl;
    file.open("config.txt");

    cout << "Colocando texto no arquivo"<< endl;
    file << "Entrei ";

    fstream f;

    f.open("grafo.txt");

    if(f.is_open())
    {
        string linha;
        int i = -1;
        cout << "ler o arquivo linha por linha ate o fim do arquivo" << endl;
        while(!f.eof())
        {
            getline(f, linha);
            cout << endl << "+++ \t" << linha << endl;
            size_t tam;
            string aux = linha.find(" ", tam);
            cout << " --- Valor de aux " << aux << endl;

            //Jogando valor da string para uma variavel
            f >> i >> linha;

            cout << "Valor de i = " << i << endl;
        }


    }


    file.close();

    return 0;
}
