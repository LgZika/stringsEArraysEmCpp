#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    
    cout << "Entre com uma palavra: ";
    cin >> word;

    for(int i = 0; i < word.size() ; i++){ // loop do tamanho da palavra inserida para percorrer a string
        if(word[i] == 'a'){ // verifica se a letra na posição atual é igual a letra 'a'
            //cout << word[i] << endl;
            word[i] = 'e'; // a posição atual recebe a letra 'e' se a letra for 'a'
        } else if(word[i] == 'A'){
            word[i] = 'E';
        }
    }
    cout << "Palavra modificada: " + word << endl;
return false;
}