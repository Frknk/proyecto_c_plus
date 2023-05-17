#include <string>
#include <fstream>
#include "cliente.cpp"
#include "cajero.cpp"
#include "vestimenta.cpp"

using namespace std;

class Caja
{
protected:
    Ferreteria ferreteria[99];
    Electronica electronica[99];
    Libreria libreria[99];
    Jugueteria jugueteria[99];
    Vestimenta vestimenta[99];
    int contadorFerreteria = 0;
    int contadorElectronica = 0;
    int contadorLibreria = 0;
    int contadorJugueteria = 0;
    int contadorVestimenta = 0;
    int totalProductos = 0;
    string carrito = "";

public:
    // Funcion sobrecargada
    void agregarCarrito(Ferreteria ferreteria_item)
    {
        ferreteria[contadorFerreteria] = ferreteria_item;
        contadorFerreteria++;
        totalProductos++;
    }

    void agregarCarrito(Electronica electronica_item)
    {
        electronica[contadorElectronica] = electronica_item;
        contadorElectronica++;
        totalProductos++;
    }

    void agregarCarrito(Libreria libreria_item)
    {
        libreria[contadorLibreria] = libreria_item;
        contadorLibreria++;
        totalProductos++;
    }

    void agregarCarrito(Jugueteria jugueteria_item)
    {
        jugueteria[contadorJugueteria] = jugueteria_item;
        contadorJugueteria++;
        totalProductos++;
    }

    void agregarCarrito(Vestimenta vestimenta_item)
    {
        vestimenta[contadorVestimenta] = vestimenta_item;
        contadorVestimenta++;
        totalProductos++;
    }

    // Funcion para mostrar el carrito
    string mostrarCarrito(){
        for (int i = 0; i < contadorFerreteria; i++)
        {
            carrito += ferreteria[i].getDatos() + "\n";
        }
        for (int i = 0; i < contadorElectronica; i++)
        {
            carrito += electronica[i].getDatos() + "\n";
        }
        for (int i = 0; i < contadorLibreria; i++)
        {
            carrito += libreria[i].getDatos() + "\n";
        }
        for (int i = 0; i < contadorJugueteria; i++)
        {
            carrito += jugueteria[i].getDatos() + "\n";
        }
        for (int i = 0; i < contadorVestimenta; i++)
        {
            carrito += vestimenta[i].getDatos() + "\n";
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