#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    cout << "Tamanho desta array: "<< tamanho << endl;
    return 0;
}