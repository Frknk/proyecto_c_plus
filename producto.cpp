#include <string>

using namespace std;

class Producto
{
protected:
    string id, nombre;
    float precio;
public:
    Producto(string _id=" ", float _precio=0, string _nombre=" ")
    {
        id = _id;
        precio = _precio;
        nombre = _nombre;
    }

    // Getter
    string getId(){
        return id;
    }

    float getPrecio(){
        return precio;
    }

    string getNombre(){
        return nombre;
    }

    string getPrecioString(){
        return to_string(precio);
    }
};