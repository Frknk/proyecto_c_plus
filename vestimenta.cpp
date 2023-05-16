#include <string>
#include <iostream>
#include <string>
using namespace std;

class Vestimenta {
    private:
    string nombre_vestimenta;
    string codigo_vestimenta;
    string talla;
    string precio_vestimenta;
    
    public:
    Vestimenta(string nombre, string codigo, string talla, string precio) {
        nombre_vestimenta = nombre;
        codigo_vestimenta = codigo;
        this->talla = talla;
        precio_vestimenta = precio;
    }
    
    string getNombreVestimenta() {
        return nombre_vestimenta;
    }
    
    void setNombreVestimenta(string nombre) {
        nombre_vestimenta = nombre;
    }
    
    string getCodigoVestimenta() {
        return codigo_vestimenta;
    }
    
    void setCodigoVestimenta(string codigo) {
        codigo_vestimenta = codigo;
    }
    
    string getTalla() {
        return talla;
    }
    
    void setTalla(string talla) {
        this->talla = talla;
    }
    
    string getPrecioVestimenta() {
        return precio_vestimenta;
    }
    
    void setPrecioVestimenta(string precio) {
        precio_vestimenta = precio;
    }
    
    string getDatosvestimenta() {
        string resumen;
        resumen="Nombre de la vestimenta: "+nombre_vestimenta+"Código de la vestimenta: "+codigo_vestimenta+"Talla: "+talla+"Precio de la vestimenta: "+precio_vestimenta+"\n";

    }
};