#include <iostream>
#include <fstream>
#include "libreria.cpp"
#include "cajero.cpp"
#include "cliente.cpp"
#include "caja.cpp"
#include "producto.cpp"

using namespace std;

int main(){
    Libreria libro1("001", 15, "Libro 1", "Yo", "Editorial Si");
    Ferreteria ferre1("002", 15, "Algo", "Herramienta", "Yo");

    cout << libro1.getDatos() << endl;
    cout << ferre1.getDatos();
}