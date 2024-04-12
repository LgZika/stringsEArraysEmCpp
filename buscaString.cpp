#include <iostream>

using namespace std;

int main(){
    string str = "Hello, World!"; 
    string str2 = "lorld";
    int pos = str.find(str2);

    cout << pos << endl;
    if(pos != string::npos){ // std::string::npos
        cout << "Encontardo na posicao: " << pos << endl;
    } else {
        cout << "Não encontrado" << endl;
    }
return false;
}

