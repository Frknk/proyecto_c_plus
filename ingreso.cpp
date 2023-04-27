#include <string>
#include <sqlite3.h>
#include <iostream>

using namespace std;

class Ingreso
{

    // Atributos
protected:
    string fecha, autor;
    string UID;

public:
    // Metodos
    // Constructor
    Ingreso(string _fecha, string _autor)
    {
        fecha = _fecha;
        autor = _autor;
    };

    // Getters
    string getFecha()
    {
        return fecha;
    }

    string getAutor()
    {
        return autor;
    }

    string getUID()
    {
        return UID;
    }

    // Setters
    void setFecha(string _fecha)
    {
        fecha = _fecha;
    }

    void setAutor(string _autor)
    {
        autor = _autor;
    }

    void setUID(string _UID)
    {
        UID = _UID;
    }

    // Funcion especial para ingresar datos a la base de datoss
    void ingreso(){
        sqlite3* db; // Declaro un puntero a la base de datos
        char* error; // Declaro un puntero a un char para los errores

        int result = 0; // Variable para controlar la salida del loop

        result = sqlite3_open("database.db", &db); // Abro la base de datos

        if (result != SQLITE_OK) { // Si no se pudo abrir la base de datos
            cout << "Error abriendo la base de datos" << endl;
            sqlite3_close(db); // Cierro la base de datos
            return; // Salgo de la funcion
        }

        // Crear tabla
        const char* crear_tabla = "CREATE TABLE IF NOT EXISTS ingreso(UID TEXT PRIMARY KEY, fecha TEXT NOT NULL, autor TEXT NOT NULL);"; // Creo la tabla ingreso
        result = sqlite3_exec(db, crear_tabla, NULL, 0, &error); // Creo la tabla ingreso

        if(result != SQLITE_OK){ // Si no se pudo crear la tabla
            cout << "Error creando la tabla ingreso" << endl;
            sqlite3_free(error); // Libero el puntero a char de error
        }

        // Insertar datos
        string insertar = "INSERT INTO ingreso VALUES('" + UID + "', '" + fecha + "', '" + autor + "');"; // Creo el string para insertar los datos
        result = sqlite3_exec(db, insertar.c_str(), NULL, 0, &error); // Inserto los datos

        if(result != SQLITE_OK){ // Si no se pudo insertar los datos
            cout << "Error insertando los datos en la tabla ingreso" << endl;
            sqlite3_free(error); // Libero el puntero a char de error
        }

        // Si todo se hizo correctamente
        sqlite3_close(db); // Cierro la base de datoss
        cout << "Ingreso registrado con exito" << endl;
    }
};