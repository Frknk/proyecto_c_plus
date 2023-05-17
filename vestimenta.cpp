#include <string>
#include <iostream>
#include <string>
#include "electronica.cpp"
using namespace std;

class Vestimenta : public Producto{
    protected:
    string tipo, talla, marca;
    
    public:
    // Constructor
    Vestimenta(string _id=" ", float _precio=0, string _nombre=" ", string _tipo, string _talla, string _marca) : Producto(_id, _precio, _nombre) {
        tipo = _tipo;
        talla = _talla;
        marca = _marca;
    }

    string getDatos(){
        return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "Nombre: " + nombre + " - Tipo: " + tipo + " - Talla: " + talla + " - Marca: " + marca;
    }
};