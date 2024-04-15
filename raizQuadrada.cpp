#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double x = 2, y = 4;

    cout.precision(2);
    cout << fixed << "A raiz quadrada de x + y eh: " << sqrt(x +y) << endl;

    cout << setprecision(2) << "A raiz quadrada de x + y eh: " << sqrt(x +y) << endl;
    
return false;
}
