#include <iostream>

using namespace std;

int main() {
    int array[5];
    int i = 0;
    int tamanho = sizeof(array) / sizeof(array[0]);

    cout << "Preencha a array com 5 numeros:" << endl;
    for(i; i < tamanho; i++){
        cout << i+1 << "° Posicao: ";
        cin >> array[i];
    }
    cout << endl;

    cout << "Mesma array de tras para frente:" << endl;

    i = tamanho - 1;
    for(i; i > -1; i--){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}