#include <iostream>
#include "libreria.cpp"

using namespace std;

int main(){
    Libreria libro1("001", 15, "Libro 1", "Yo", "Editorial Si");
    Ferreteria ferre1("002", 15, "Herramienta", "Yo");

    cout << libro1.getDatos() << endl;
    cout << ferre1.getDatos();
}