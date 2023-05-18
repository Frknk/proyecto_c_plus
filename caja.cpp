#include <string>
#include <fstream>
#include "cliente.cpp"
#include "cajero.cpp"
#include "producto.cpp"

using namespace std;

class Caja
{
protected:
    Producto productos[99];
    int contadorFerreteria = 0;
    int contadorElectronica = 0;
    int contadorLibreria = 0;
    int contadorJugueteria = 0;
    int contadorVestimenta = 0;
    int totalProductos = 0;
    string carrito = "";

public:
    // Constructor
    Caja()
    {
    }
    // Funcion para agregar al arreglo
    void agregarCarrito(Producto producto_item)
    {
        productos[contadorFerreteria] = producto_item;
        totalProductos++;
        if (producto_item.getCategoria() == "ferreteria" || producto_item.getCategoria() == "Ferreteria"){
            contadorFerreteria++;
        }
        else if (producto_item.getCategoria() == "electronica" || producto_item.getCategoria() == "Electronica"){
            contadorElectronica++;
        }
        else if (producto_item.getCategoria() == "libreria" || producto_item.getCategoria() == "Libreria" ){
            contadorLibreria++;
        }
        else if (producto_item.getCategoria() == "jugueteria" || producto_item.getCategoria() == "Jugueteria"){
            contadorJugueteria++;
        }
        else if (producto_item.getCategoria() == "vestimenta" || producto_item.getCategoria() == "Vestimenta"){
            contadorVestimenta++;
        }
        else {
            cout << "Categoria no encontrada" << endl;
        }
    }

    void mostrarTienda(){
        int lista = 0;
        for (int i = 0; i < 99; i++){
            cout << lista++ << productos[i].getDatos();
        }

    }

    // Funcion para mostrar el carrito
    string mostrarCarrito(){
        for (int i = 0; i < totalProductos; i++){
            carrito += productos[i].getDatos();
        }
        return carrito;
    }

        // Funcion para el ingreso en la base de datos (TXT)
    void ingresoBD(Cajero cajero, Cliente cliente)
    {
        ofstream bd;             // Variable ofstream
        bd.open("registro.txt"); // Abrir el archivo txt
        bd << "Compra registrada \n"
           << cajero.getDatos() << "\n"
           << cliente.getDatos() << "\n" // Formato para el guardado
           << mostrarCarrito();            // Guardar el carrito
        bd.close();                       // Cerrar el archivo txt
    }

};