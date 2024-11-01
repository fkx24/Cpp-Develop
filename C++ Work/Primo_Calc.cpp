#include <iostream>
using namespace std;

int main(){
int n; //numero
int d; //divisor
   
   cout << "Dime un numero " << endl;
    cin >> n; //leo el numero por teclado

    if (n == 1) { //si el numero es exactamente igual a 1 se que es primo
    cout << "1 es primo" << endl;
}       else if (d = 2){ //en otro caso, asigno al divisor el numero 2 
    while ((n % d) != 0) { //mientras que el resto de hacer la division del numero entre el divisor sea distinto de 0
         d++ ;}  // incremento de 1 en el divisor. d++ es quivalente a d = d + 1.
    if (d == n) { //si al final el divisor es exactamente igual a el valor del numero entonces podemos saber si es primo
    cout << "Tu numero es primo ";}
        else { cout << "Tu numero no es primo"; }
}
}
