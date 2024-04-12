#include <iostream>

using namespace std;

int main(){
    string str1 = "Hello"; 
    string str2 = "World";
    string result;

    result = str1 + str2;
    cout << "Concatenacao das Strings: " << result.c_str() << endl;
    // ou
    printf("Concatenacao das Strings: %s\n", result.c_str());

return false;
}

// alias enviaGit="git add . && git commit -m 'update' && git push"