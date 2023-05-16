#include <string>
#include "producto.cpp"

using namespace std;

class Ferreteria : public Producto{
    protected:
    string nombre, tipo, marca;

    public:
    Ferreteria(string _id, float _precio, string _nombre, string _tipo, string _marca): Producto(_id, _precio){
        tipo = _tipo;
        marca = _marca;
    }

    string getDatos(){
        return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "Nombre: " + nombre + " - Tipo: " + tipo + " - Marca: " + marca;
    }
};