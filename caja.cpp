#include <string>
#include <fstream>
#include "cliente.cpp"
#include "cajero.cpp"
#include "producto.cpp"

using namespace std;

class Caja
{
public:
    // Funcion para el ingreso en la base de datos (TXT)
    void ingresoBD(Cajero cajero, Cliente cliente)
    {
        ofstream bd;             // Variable ofstream
        bd.open("registro.txt"); // Abrir el archivo txt
        bd << "Compra registrada \n"
           << cajero.getDatos() << "\n"
           << cliente.getDatos() << "\n"; // Formato para el guardado
        bd.close();                       // Cerrar el archivo txt
    }

    void carrito(){
        
    }

    // Funcion sobrecargada
    void agregarCarrito()
    {
   
    }
};