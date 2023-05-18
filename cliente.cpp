#include <string>
#include "persona.cpp"

using namespace std;

class Cliente : public Persona
{
    // Atributos
    // cliente_codigo para registrar multiples compras con diferentes codigos a una sola persona
protected:
    string nombre, apellido, direccion, telefono, DNI;
    string cliente_codigo;

public:
    // Metodos
    // Constructor
    Cliente(string _cliente_codigo = "", string _apellido = "", string _nombre = "" , string _direccion = "", string _telefono = "", string _DNI = "") : Persona(_nombre, _apellido, _direccion, _telefono, _DNI)
    {
        cliente_codigo = _cliente_codigo;
    }

    // Getters
    string getClienteCodigo(){
        return cliente_codigo;
    }

    // Setters
    void setClienteCodigo(string _cliente_codigo){
        cliente_codigo = _cliente_codigo;
    }

    string getDatos(){
        return "Datos del cliente: \n " + cliente_codigo + " " + getApellido() + " " + getNombre();
    }
};