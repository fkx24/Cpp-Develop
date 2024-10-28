#include <iostream>
using namespace std;

int main () {
   
    // Léxico 
    
    int ani;
    int cincuenta;
    int veinte;
    int cinco;
    int uno;
    int resto;

    //Algoritmo

    cout << "Cuantos animales vamos a transportar? " << endl;
    cin >> ani;
    cout << "Vamos a repartirlos " << endl;
    cincuenta = ani / 50;
    resto = ani % 50;
    veinte = resto / 25;
    resto = resto % 25;
    cinco = resto / 5;
    resto = resto % 5;
    uno = resto / 1;

    cout << "Necesitamos: " << cincuenta << " contenedores " << " de cincuenta" << endl;
    cout << veinte << " de vienticinco " << endl; 
    cout << cinco << " de cinco " << endl;
    cout << uno << " de uno "<< endl;
}