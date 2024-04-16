#include <iostream>

using namespace std;

int main() { 
    int array[3];

    cout << "Digite 3 numeros inteiros: " << endl;
    for(int i = 0; i < 3; i++){
        cout << "Numero " << i+1 << ": "; 
        cin >> array[i];
    }
    cout << "Numeros Digitados: " << array[0] << " " << array[1] << " " << array[2] << endl;
    
    return 0;
    }