#include <iostream>

using namespace std;

int main(){
    string str = "Hello, World!"; 
    string substr = str.substr(7, 5); 

    cout << "Substrings: " << substr.c_str() << endl;
    // ou
    printf("Substrings: %s\n", substr.c_str());

return false;
}

