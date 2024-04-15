#include <iostream>

using namespace std;

int main(){

    //Lendo um inteiro:
    int valor;
    cout << "Digite um valor inteiro: ";
    cin >> valor;
    cout << "Valor digitado: " << valor << endl;

    //Lendo um número real:
    double temperatura;
    cout << "Digite a temperatura: ";
    cin >> temperatura;
    cout << "Temperatura digitada: " << temperatura << "°" << endl;

    //Lendo uma string:
    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Olá, " + nome + "!" << endl;

return false;
}
