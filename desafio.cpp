#include <iostream>

using namespace std;

void menu(){
    cout << "Arrays!" << endl;
    cout << "Opcoes:" << endl;
    cout << "\t1 - Preencher uma Array" << endl;
    cout << "\t2 - Exibir uma Array" << endl;
    cout << "\t0 - Fim Programa" << endl;
    cout << "escolha: ";
}

void preencheArray(int array[], int len, int opcao){
    cout << "Preencha o array "<< opcao << " com valores inteiros" << endl;
    for(int i = 0; i < len; i++){
        cout << "Posicao "<< i << ": ";
        cin >> array[i];
    }
    cout << endl;
}

void exibeArray(int array[], int len, int opcao){
    cout << "Array " << opcao << " = { ";
    for(int i = 0; i < len; i++){
        cout << array[i] << " ";
    }
    cout << "}" << endl;
    cout << endl;
}

int main() {
    int numeros1[5], numeros2[5], numeros3[5], opcao, escolha;
    int len1 = sizeof(numeros1) / sizeof(numeros1[0]);
    int len2 = sizeof(numeros2) / sizeof(numeros2[0]);
    int len3 = sizeof(numeros3) / sizeof(numeros3[0]);

    numeros3[2] = 999;

    while (escolha != 0) {
        menu();
        cin >> escolha;
        switch (escolha){
        case 1:
            cout << "Qual array gostaria de preecher? (1,2,3): ";
            cin >> opcao;
            cout << endl;
            switch (opcao){
            case 1:
                preencheArray(numeros1, len1, opcao);
                break;
            case 2:
                preencheArray(numeros2, len2, opcao);
                break;
            case 3:
                preencheArray(numeros3, len3, opcao);
                break;
            default:
                cout << "Array Inexistente!" << endl;
                break;
            }
            break;
        case 2:
            cout << "Qual array gostaria de Exibir? (1,2,3,0=all): ";
            cin >> opcao;
            cout << endl;
            switch (opcao){
            case 0:
                exibeArray(numeros1, len1, opcao);
                exibeArray(numeros2, len2, opcao);
                exibeArray(numeros3, len3, opcao);
                break;
            case 1:
                exibeArray(numeros1, len1, opcao);
                break;
            case 2:
                exibeArray(numeros2, len2, opcao);
                break;
            case 3:
                exibeArray(numeros3, len3, opcao);
                break;
            default:
                cout << "Array Inexistente!" << endl;
                break;
            }
            break;
        case 0:
            cout << "Fim Programa!" << endl;
            return 1;
            break;
        default:
            cout << "Opcao Invalida!\nSelecione novamente!" << endl;
            break;
        }
    }
    return 0;
}