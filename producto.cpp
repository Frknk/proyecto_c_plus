#include <string>

using namespace std;

class Producto
{
protected:
    // Estandar
    string id, categoria, nombre;
    float precio;
    int cantidad;

public:
    Producto(string _id=" ", string _categoria="", float _precio=0, string _nombre=" ", int _cantidad=0)
    {
        id = _id;
        precio = _precio;
        nombre = _nombre;
        cantidad = _cantidad;
    }

    // Setter
    void setId(string _id){
        id = _id;
    }

    void setPrecio(float _precio){
        precio = _precio;
    }

    void setNombre(string _nombre){
        nombre = _nombre;
    }

    void setCantidad(int _cantidad){
        cantidad = _cantidad;
    }

    void setCategoria(string _categoria){
        categoria = _categoria;
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

    int getCantidad(){
        return cantidad;
    }

    string getCategoria(){
        return categoria;
    }

    string getPrecioString(){
        return to_string(precio);
    }

    string getCantidadString(){
        return to_string(cantidad);
    }

    string getDatos(){
        return "ID: " + id + " Nombre: " + nombre + " Precio: " + to_string(precio) + " Cantidad: " + to_string(cantidad) + " Categoria: " + categoria;
    }
};