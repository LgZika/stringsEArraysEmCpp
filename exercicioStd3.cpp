#include <iostream>

using namespace std;

int main(){
    double x, y;

    cout << "Entre com um valor para x: ";
    cin >> x;
    cout << "Entre com um valor para y: ";
    cin >> y;
    cout.precision(2);
    cout << fixed << "Resultados:" << endl << "Soma: " << (x + y) << endl << "Subtracao: " << (x - y) << endl << "MUltiplicacao: " << (x * y) << endl << "Divisao: " << (x / y) << endl;
return false;
}
