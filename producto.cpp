#include <string>

using namespace std;

class Producto
{
protected:
    string id;
    float precio;
public:
    Producto(string _id, float _precio)
    {
        id = _id;
        precio = _precio;
    }

    // Getter
    string getId(){
        return id;
    }

    float getPrecio(){
        return precio;
    }

    string getPrecioString(){
        return to_string(precio);
    }
};