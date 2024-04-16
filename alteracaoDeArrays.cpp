#include <iostream>

using namespace std;

int main() {
    int arr[3] = {1, 2, 3};

    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[1] = 10;
    cout << "Elemento Alterado: "<< arr[1] << endl;

    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}