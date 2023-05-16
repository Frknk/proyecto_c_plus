#include <string>
#include <iostream>
#include <string>
#include "producto.cpp" 
using namespace std;

class Vestimenta {
private:
    string nombre;
    Producto productosVestimenta[10];
    int numVestimenta;

public:
    Vestimenta(string nombres) 
    {
        nombre=nombres;
    }

    // Getter
    string getNombre() const {
        return nombre;
    }

    // Setter
    void setNombre(string nombre_) {
        nombre = nombre_;
    }

    void registrarLibro(Producto product){
        if (numVestimenta < 5){
            productosVestimenta[numVestimenta] = product;
            numVestimenta++;
        }
        else{
            cout << "No se puede registrar mas libros" << endl;
        }
    }

    void mostrarProductos(){
        cout << "Productos en la tienda de vestimenta " << nombre << ":" << endl;
        cout << "Nombre: " << productosVestimenta[numVestimenta].getNombre() << ", Precio: " << productosVestimenta[numVestimenta].getPrecio() << endl;
    }
};