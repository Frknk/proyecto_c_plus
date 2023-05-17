#include <iostream>
#include "caja.cpp"

using namespace std;

void titulo_centrado(string titulo)
{
    int i;                       // Contador
    int largo = titulo.length(); // Largo del titulo
    largo = largo + 20;          // Total de 20 espacios, 10 por lado

    for (i = 0; i < largo; i++)
    {
        cout << "*";
    }
    cout << "\n";
    for (i = 0; i < largo; i++)
    {
        cout << " ";
        if (i == 5)
        { // 5*2 = 10, Centro del titulo
            cout << titulo;
        }
        cout << " ";
    }
    cout << "\n";
    for (i = 0; i < largo; i++)
    {
        cout << "*";
    }
    cout << "\n\n";
}

int main()
{

    // Atributos
    string codigo,nombre, tipo,marca;
    float precio;
    int cantidad;

    // Cajero por defecto
    Cajero cajero1("PJ001", "Perez", "Juan", "12345");

    // Productos
    Producto electronica1("E001", "Electronica", 1000, "Laptop", 10);
    Producto ferreteria1("F001", "Ferreteria", 100, "Martillo", 10);
    Producto libreria1("L001", "Libreria", 10, "Lapicero", 10);
    Producto jugueteria1("J001", "Jugueteria", 100, "Pelota", 10);
    Producto vestimenta1("V001", "Vestimenta", 100, "Camisa", 10);
    

    // Registrando 
    Caja principal; // Para la tienda
    Caja cliente; // Para el cliente
    int contadorProductos = 0;

    principal.agregarCarrito(electronica1);
    principal.agregarCarrito(ferreteria1);
    principal.agregarCarrito(libreria1);
    principal.agregarCarrito(jugueteria1);
    principal.agregarCarrito(vestimenta1);

    // Caja
    int opcion = 0; // Opcion del men
    int admin_opcion = 0;
    string usuario, contrasena;
    do
    {
        system("cls"); // Limpiar pantalla
        titulo_centrado("Tienda de Denis");
        cout << "1. Comprar en la tienda \n";
        cout << "2. Ver carrito \n";
        cout << "3. Pagar \n\n";
        cout << "4. Administrar\n\n";
        cout << "5. Salir \n\n";

        cout << "Ingrese opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            system("cls");
            principal.mostrarTienda();
            system("pause");
            break;
        case 2:
            system("cls");
            cliente.mostrarCarrito();
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "algo";
            system("pause");
            break;
        case 4:
            do
            {
                system("cls");
                titulo_centrado("Admin Denis");
                cout << "Si se ha equivocado escriba: salir\n\n";
                cout << "Usuario: "; cin >> usuario;
                cout << "Contrasena: "; cin >> contrasena;
                if (usuario != cajero1.getCodigo() || contrasena != cajero1.getContrasena()){
                    cout << "\nDatos ingresados incorrectos\n";
                    system("timeout 2 >nul");
                }
                system("cls");
                titulo_centrado("Admin Denis");
                cout << "1. Agregar producto \n";
                cout << "2. Eliminar producto \n";
                cout << "3. Modificar producto \n";
                cout << "4. Ver productos \n\n";
                cout << "5. Salir \n\n";
                cout << "Ingresar opcion: "; cin >> admin_opcion;
                switch (admin_opcion)
                {
                case 1:
                    system("cls");
                    titulo_centrado("Admin Denis");
                    cout << "Tipos de productos: \n";
                    cout << "1. Electronica \n";
                    cout << "2. Ferreteria \n";
                    cout << "3. Libreria \n";
                    cout << "4. Jugueteria \n";
                    cout << "5. Vestimenta \n\n";
                    cout << "Ingresar opcion: "; cin >> admin_opcion;
                }
                
            } while (admin_opcion != 2 && usuario != "salir" && contrasena != "salir");
            break;
        case 5:
            cout << "\nHasta pronto!";
            system("timeout 2 >nul");
            break;
        default:
            cout << "\nOpcion invalida";
            system("timeout 2 >nul"); // Dormir por 2 segundos
            break;
        }

    } while (opcion != 5);
}