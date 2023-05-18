#include <string>

using namespace std;

class Producto
{
protected:
    // Estandar
    string id, categoria, nombre;
    float precio;
    int cantidad;
    // Vestimenta
    string talla, color, material;
    // Jugueteria
    bool es_educativo;
    // Libreria
    string autor, editorial;
    // Ferreteria , Electronica
    string tipo, marca, modelo;

public:
    Producto(string _id = " ", string _categoria = "", float _precio = 0, int _cantidad = 0, string _nombre = " ")
    {
        id = _id;
        precio = _precio;
        nombre = _nombre;
        cantidad = _cantidad;
    }

    // Estas funciones no se usan mas que para el primer inicio, pero se dejan por si acaso
    void setDatosVestimenta(string _talla, string _color, string _material)
    {
        talla = _talla;
        color = _color;
        material = _material;
    }

    void setDatosElectronica(string _marca, string _modelo)
    {
        marca = _marca;
        modelo = _modelo;
    }

    void setDatosFerreteria(string _tipo, string _marca, string _modelo)
    {
        tipo = _tipo;
        marca = _marca;
        modelo = _modelo;
    }

    void setDatosJuguetes(string _marca, bool _es_educativo)
    {
        marca = _marca;
        es_educativo = _es_educativo;
    }

    void setDatosLibreria(string _autor, string _editorial)
    {
        autor = _autor;
        editorial = _editorial;
    }

    // Setter
    void setId(string _id)
    {
        id = _id;
    }

    void setPrecio(float _precio)
    {
        precio = _precio;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    void setCantidad(int _cantidad)
    {
        cantidad = _cantidad;
    }

    void setCategoria(string _categoria)
    {
        categoria = _categoria;
    }

    // Getter
    string getId()
    {
        return id;
    }

    float getPrecio()
    {
        return precio;
    }

    string getNombre()
    {
        return nombre;
    }

    int getCantidad()
    {
        return cantidad;
    }

    string getCategoria()
    {
        return categoria;
    }

    string getPrecioString()
    {
        return to_string(precio);
    }

    string getCantidadString()
    {
        return to_string(cantidad);
    }

    // Metodos
    string esStringEducativo()
    {
        if (es_educativo == true)
        {
            return "Si";
        }
        else
        {
            return "No";
        }
    }

    string getDatos()
    {
        if (getCategoria() == "Vestimenta" || getCategoria() == "vestimenta")
        {
            return id + "," + categoria + "," + "," + getPrecioString() + nombre + "," + getCantidadString() + "," + talla + "," + color + "," + material;
        }
        else if (getCategoria() == "Electronica" || getCategoria() == "electronica")
        {
            return id + "," + categoria + "," + "," + getPrecioString() + nombre + "," + getCantidadString() + "," + marca + "," + modelo;
        }
        else if (getCategoria() == "Ferreteria" || getCategoria() == "ferreteria")
        {
            return id + "," + categoria + "," + "," + getPrecioString() + nombre + "," + getCantidadString() + "," + tipo + "," + marca + "," + modelo;
        }
        else if (getCategoria() == "Jugueteria" || getCategoria() == "jugueteria")
        {
            return id + "," + categoria + "," + "," + getPrecioString() + nombre + "," + getCantidadString() + "," + marca + "," + esStringEducativo();
        }
        else if (getCategoria() == "Libreria" || getCategoria() == "libreria")
        {
            return id + "," + categoria + "," + "," + getPrecioString() + nombre + "," + getCantidadString() + "," + autor + "," + editorial;
        }
        else
        {
            return "Categoria no valida";
        }
    }
};