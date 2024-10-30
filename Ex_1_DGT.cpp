#include <iostream>
using namespace std;

//Léxico
struct Turismo { 
char marca[20]; 
char matricula[10];
int anoM;
char Modelo;
float tiempo;
};

//Acción que permite leer los datos del vehiculo y mostrarlos en pantalla
void leerCoche(Turismo &c){
    //Algoritmo
    cout << "Introduce la matricula : ";
	cin >> c.matricula;
	cout << "Introduce la marca : ";
	cin >> c.marca;
    cout << "Introduce el anio de matriculacion :";
    cin >> c.anoM;
    cout << "Introduce el modelo : ";
    cin >> c.Modelo;
    cout << "Introduce el tiempo de 0 a 100Km/h : ";
    cin >> c.tiempo;
    cout << "Tu matricula es : " << c.matricula << endl;
    cout << "La marca de tu coche es : " << c.marca << endl;
    cout << "Tu anio de matriculacion es : " << c.anoM << endl;
    cout << "El tiempo en segundos de 0 a 100Km/h es : " << c.tiempo << " segundos"<< endl;
}

//*Accion para calcular la aceleración y distancia del vehiculo
void leerAceDistan (Turismo &v){

    //Léxico
     float ace;
     float distancia; 
    
    //Algoritmo

    ace = 28 / v.tiempo;
    distancia = (ace*(v.tiempo*v.tiempo)/2);
    cout << "El tiempo que tarda en ponerse de 0 a 100km/h es : " << v.tiempo << endl;
    cout << "Por lo tanto la aceleracion del vehiculo es : " << ace << " m/s^2" << endl;
    cout << "Y la distancia recorrida en esa aceleracion es : " << distancia << " metros." << endl;

}

//*Función para poder determinar el distintivo ambiental
void escribirEtiq (Turismo t){
    if ((t.Modelo == 'E' ) || (t.Modelo == 'A' )){
    cout << "Tiene etiqueta Eco " << endl;
}else if ((t.Modelo == 'G') && (t.anoM >= 2001)){
    cout << "Tiene etiqueta B " << endl;
}else if ((t.Modelo == 'D') && (t.anoM >= 2006)){
    cout <<  "Tiene etiqueta B " << endl;
}else if ((t.Modelo == 'G') && (t.anoM >= 2006)){
    cout << "Tiene etiqueta C " << endl;
}else if ((t.Modelo == 'D') && (t.anoM >= 2015)){
    cout << "Tiene etiqueta C " << endl;
}else {
    cout << "Tiene etiqueta 0 emisiones " << endl;
}
}

//Funcion principal aplicando las dos acciones y la funcion que hemos establecido

int main(){
Turismo miCoche;

leerCoche(miCoche);

leerAceDistan(miCoche);

escribirEtiq(miCoche);

return 0;
}

