#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3};

    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[3] = 4;
    arr[4] = 5;
    cout << "Último elemento: "<< arr[4] << endl;

    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}