#include <iostream>

using namespace std;

int main(){
    string word;
    int i = 0;
    cout << "Entre com uma palavra: ";
    cin >> word;

    for(i;i<word.size();i++){
        if(word[i]=='a'){
            word[i] = 'a';
        }
        cout << i << endl;
    }
    cout << word << endl;
return false;
}
