#include <iostream>

using namespace std;

int main() {
    int numero[4];
    int len = sizeof(numero) / sizeof(numero[0]);
    int valor;

    cout << "Insira 4 numeros" << endl;
    for(int i = 0; i < len; i++){
        cout << "Posicao "<< i << ": ";
        cin >> numero[i];
    }
    cout << endl;

    cout << "Pesquisa por valor no array para substituir: ";
    cin >> valor;
    for(int i = 0; i < len; i++){
        if(numero[i] == valor){
            numero[i] = -1;
        }
        cout << "Posicao "<< i << ": " << numero[i] << endl;
    }
    return 0;
}