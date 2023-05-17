#include <string>

using namespace std;

class Cajero
{
protected:
    string c_codigo, c_apellido, c_nombre, c_contrasena;

public:
    Cajero(string _c_codigo = "", string _c_apellido = "", string _c_nombre = "", string _c_contrasena = "")
    {
        c_codigo = _c_codigo;
        c_apellido = _c_apellido;
        c_nombre = _c_nombre;
        c_contrasena = _c_contrasena;
    }

    // Metodos
    string getDatos()
    {
        return "Datos del cajero: \n " + c_codigo + " " + c_apellido + " " + c_nombre;
    }

    string getCodigo()
    {
        return c_codigo;
    }

    string getContrasena()
    {
        return c_contrasena;
    }
};