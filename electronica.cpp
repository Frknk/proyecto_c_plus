#include <string>
#include "producto.cpp"

using namespace std;

class Electronica : public Producto{
    protected:
    string tipo, marca;

    public:
    Electronica(string _id, float _precio, string _nombre, string _tipo, string _marca): Producto(_id, _precio, _nombre){
        tipo = _tipo;
        marca = _marca;
    }

    string getDatos(){
        return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "Nombre: " + nombre + " - Tipo: " + tipo + " - Marca: " + marca;
    }
};