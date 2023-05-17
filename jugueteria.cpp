#include <iostream>
#include <string>
#include "libreria.cpp"

using namespace std;

class Jugueteria : public Producto
{
private:
    string tipo;
    bool educativo;
    string marca;

public:
    Jugueteria(string _id, float _precio, string _nombre, string _tipo, string _marca, bool _educativo) : Producto(_id, _precio, _nombre)
    {
        marca = _marca;
        tipo = _tipo;
        educativo = _educativo;
    }

    string getEducativoString()
    {
        if (educativo)
        {
            return "Si";
        }
        else
        {
            return "No";
        }
    }

    string getDatos()
    {
        return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "Nombre: " + nombre + " - Tipo: " + tipo + " - Marca: " + marca + " - Es educativo: " + getEducativoString();
    }
};