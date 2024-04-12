#include <iostream>

using namespace std;

int main(){
    string word1, word2, word3;

    cout << "Entre com uma palavra: ";
    cin >> word1;
    cout << "Entre com outra palavra: ";
    cin >> word2;

    word3 = word1 + " " + word2;

    cout << "Nova palavra: " << word3.c_str() << endl;
    
return false;
}
