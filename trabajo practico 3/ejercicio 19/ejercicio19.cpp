/* 



19. En un comercio trabajan 6 vendedores. Defina la estructura principal vendedor se dese saber: nombre, legajo, sector.
Se guardan sus ventas clasificadas por rubro, por lo que debes hacer un array de estructuras ventas con códigos 01 al 04,
concepto: bazar, accesorios, indumentaria, calzados; y de cada una su total vendido. El vendedor asocia sus ventas_rubro
Realice un programa que permita:
a. Cargar los datos de un arreglo de 3 vendedores, con sus ventas en rubro
b. Mostrar por cada vendedor, las ventas en cada rubro (esta información debe ser almacenada en la segunda estructura) */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int NUM_VENDEDORES = 3;
const int NUM_RUBROS = 4;

enum Rubro
{
    BAZAR,
    ACCESORIOS,
    INDUMENTARIA,
    CALZADOS
};

struct Venta
{
    Rubro rubro;
    float totalVendido;
};

struct Vendedor
{
    string nombre;
    int legajo;
    string sector;
    Venta ventas[NUM_RUBROS];
};

string obtenerNombreRubro(Rubro rubro)
{
    switch (rubro)
    {
    case BAZAR:
        return "bazar";
    case ACCESORIOS:
        return "accesorios";
    case INDUMENTARIA:
        return "indumentaria";
    case CALZADOS:
        return "calzados";
    default:
        return "desconocido";
    }
}

void cargarDatos(Vendedor vendedores[])
{
    for (int i = 0; i < NUM_VENDEDORES; ++i)
    {
        cout << "Ingrese nombre del vendedor " << i + 1 << ": ";
        cin >> vendedores[i].nombre;
        cout << "Ingrese legajo del vendedor " << i + 1 << ": ";
        cin >> vendedores[i].legajo;
        cout << "Ingrese sector del vendedor " << i + 1 << ": ";
        cin >> vendedores[i].sector;

        for (int j = 0; j < NUM_RUBROS; ++j)
        {
            vendedores[i].ventas[j].rubro = static_cast<Rubro>(j);
            string nombreRubro = obtenerNombreRubro(vendedores[i].ventas[j].rubro);

            cout << "Ingrese total vendido por " << nombreRubro << " por el vendedor " << i + 1 << ": ";
            cin >> vendedores[i].ventas[j].totalVendido;
            vendedores[i].ventas[j].rubro = static_cast<Rubro>(j);
        }
        cout << endl;
    }
}

void mostrarVentas(Vendedor vendedores[])
{
    for (int i = 0; i < NUM_VENDEDORES; ++i)
    {
        cout << "Ventas del vendedor " << vendedores[i].nombre << ":" << endl;
        for (int j = 0; j < NUM_RUBROS; ++j)
        {
            string nombreRubro = obtenerNombreRubro(vendedores[i].ventas[j].rubro);

            cout << fixed << setprecision(2);
            cout << "Rubro: " << nombreRubro << ", Total Vendido: $" << vendedores[i].ventas[j].totalVendido << endl;
        }
        cout << endl;
    }
}

int main()
{
    Vendedor vendedores[NUM_VENDEDORES];

    cargarDatos(vendedores);
    mostrarVentas(vendedores);

    return 0;
}
