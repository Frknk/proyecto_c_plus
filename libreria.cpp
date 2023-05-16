#include <string>
#include "ferreteria.cpp"

using namespace std;

class Libreria : public Producto{
    protected:
    string titulo, autor, editorial;

    public:
    Libreria(string _id, float _precio, string _nombre = "", string _autor = "", string _editorial = "") : Producto (_id, _precio, _nombre)
    {
        titulo = _nombre;
        autor = _autor;
        editorial = _editorial;
    }

    string getDatos(){
        return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "Titulo: " + titulo + " - Autor: " + autor + " - Editorial: " + editorial;
    }
};