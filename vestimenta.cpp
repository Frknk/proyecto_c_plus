#include <string>
#include <iostream>
#include <string>
using namespace std;

class Vestimenta {
    private:
    string talla;
    string marca;
    string color;
    string material_prenda;
    string diseño;

    public:
    Vestimenta( string _talla, string marca, string _color, string _material_prenda){
        talla = talla;
    }

    string getTalla() {
        return talla;
    }
    
    void setTalla(string talla) {
        talla = talla;
    }
    
    string getMarca() {
        return marca;
    }
    
    void setMarca(string _marca) {
        marca = _marca;
    }

     string getColor() {
        return color;
    }
    
    void setColor(string _color) {
        color = _color;
    }

    string getMaterial_prenda() {
        return material_prenda;
    }
    
    void setMaterial_prenda(string _Material_prenda) {
        color = _Material_prenda;
    }
    
    string getDatosvestimenta() {
        string resumen;
        resumen="Talla: "+talla+"Marca: "+marca+"Color: "+color+"Material de la prenda: "+material_prenda+"\n";

    }
};