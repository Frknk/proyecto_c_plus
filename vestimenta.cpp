#include <string>
#include <iostream>
#include <string>
#include "electronica.cpp"
using namespace std;

class Vestimenta : public Producto{
    protected:
    string tipo, talla, marca, color, material;
    
    public:
    // Constructor
    Vestimenta(string _id=" ", float _precio=0, string _nombre=" ", string _tipo, string _talla, string _marca, string _color, string _material) : Producto(_id, _precio, _nombre) {
        tipo = _tipo;
        talla = _talla;
        marca = _marca;
        color = _color;
        material = _material;
    }

    string getDatos(){
        return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "Nombre: " + nombre + " - Tipo: " + tipo + " - Talla: " + talla + " - Marca: " + marca + " - Color: " + color + " - Material: " + material;
    }
};