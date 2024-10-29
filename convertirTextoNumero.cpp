#include <iostream>

using namespace std;

int convertirTextoNumero(string);

int main(){
    string texto;
    while (true){

    cin >> texto;
    int numero = convertirTextoNumero(texto);
    cout << numero  << std::endl;
    }

    return 0;
}

int convertirTextoNumero(string cadena) {
    int numero = 0;
    int i = 0;
    int signo = 1;

    
    if (cadena.empty()) {
        cout<< "Error: La cadena está vacía." << endl;
        return 0; 
    }

    if (cadena[0] == '-') {
        i = 1;
        signo = -1;
    }

    while (i < cadena.length()) {
        if (!isdigit(cadena[i])) {
        cout << "Error: La cadena contiene caracteres no válidos." << endl;
        return 0; // Retorna 0 en caso de error
        }
        numero = numero * 10 + (cadena[i] - '0');
        i++;
    }

    return numero * signo;
}