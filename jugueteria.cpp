#include <iostream>
#include <string>
#include "producto.cpp"

using namespace std;

class Jugueteria : public Producto
{
private:
    string tipo;
    bool educativo;
    string marca;

public:
    Jugueteria(string _id, float _precio, string _nombre, string _tipo, string _marca) : Producto(_id, _precio, _nombre)
    {

        marca = _marca;
        tipo = _tipo;
    }

    string getDatos()
    {
        return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "Nombre: " + nombre + " - Tipo: " + tipo + " - Marca: " + marca;
    }
};