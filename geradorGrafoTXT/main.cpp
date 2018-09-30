#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    arquivo.open("grafoStainer.txt");
    if(arquivo.is_open())
        cout << "Hello world!" << endl;
    int tam = rand()%3000;
    int n = rand()%9000;
    arquivo << tam << endl;
    for(int i = 0; i<n; i++)
    {
        if(i < tam)
            arquivo << rand()%tam <<" " << rand()%500 << endl;
        else
            arquivo << rand()%tam <<" "<< rand()%tam <<" " << rand()%500 << endl;
    }
    return 0;
}
