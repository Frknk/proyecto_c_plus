#include <string>

using namespace std;

class Cajero
{
protected:
    string c_codigo, c_apellido, c_nombre;

public:
    Cajero(string _c_codigo = "", string _c_apellido = "", string _c_nombre = "")
    {
        c_codigo = _c_codigo;
        c_apellido = _c_apellido;
        c_nombre = _c_nombre;
    }

    // Metodos
    string getDatos()
    {
        return "Datos del cajero: \n " + c_codigo + " " + c_apellido + " " + c_nombre;
    }
};