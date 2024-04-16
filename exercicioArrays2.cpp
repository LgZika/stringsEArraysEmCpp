#include <iostream>

using namespace std;

int main() {
    int numero[3];
    int len = sizeof(numero) / sizeof(numero[0]);
    int pesquisa;

    cout << "Insira 3 numeros" << endl;
    for(int i = 0; i < len; i++){
        cout << "Posicao "<< i << ": ";
        cin >> numero[i];
    }
    cout << endl;

    cout << "Pesquisa por indice (0 ou 1 ou 2): ";
    cin >> pesquisa;

    cout << "Valor contido no indice " << pesquisa << ": " << numero[pesquisa] << endl;
   
    return 0;
}