#include<iostream>
#include<string>
#include"producto.cpp"

using namespace std;

class Electronica:public Producto{
private: 

string cantidad_producto;
string tipo;
string nombre_del_producto;
bool educativo;
string marca;

public:
Electronica( string _cantidad_producto, string _tipo , string _marca, string _nombre_del_producto):Producto(_id,_precio){

cantidad_producto=_cantidad_producto;
marca=_marca;
tipo=_tipo;
nombre_del_producto=_nombre_del_producto;

}

string getDatos(){
return "ID: " + getId() + " | Precio: " + getPrecioString() + "\n" + "nombre del producto"+ nombre_del_producto +"\n"+ "Tipo: "+ tipo + "\n" + " cantidad de producto:" +cantidad_producto +"\n" + "marca del producto:" + marca + "\n"+ ;
}

};