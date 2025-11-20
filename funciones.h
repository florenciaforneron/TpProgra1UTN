#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>

using namespace std;

struct Marca
{
    int codigo;
    string nombre;
};
struct Producto
{
    int codigo;
    string nombre;
    double precioVenta;
    double precioCompra;
    int stock;
    int codigoMarca;
};
struct FormaPago
{
    string codigo;
    string nombre;
    int porcentaje;
};
struct Venta
{
    int nroDeCompra;
    int codigoDeProducto;
    string formaDePago;
    int cantidadVendida;
    int codCliente;
    int diaVenta;
};

void vaciarVectorProductos(int vCodProd[], string vNomProd[], float vPrecioVentaProd[], float vPrecioCompraProd[], int vStockProd[], int vCodMarcaProd[]);
bool vectorIntLleno(int vec[], int tam);
void cargarLoteMarcas(Marca vMarcas[]);
bool esConsecutivo(int num);
void cargarLoteProductos(
    Producto vProductos[],
    Marca vMarcas[]
);
void cargarLoteFP(FormaPago vFormasPago[]);
int buscarIndiceMarca(int vCodMarca[], int codMarca, int tam);
void cargarLoteVentas(int vCodProd[], string vCodFP[], int vStockProd[], float vPrecioVentaProd[], int vCantVendida[], float vTotalRecaudado[], int vContadorVentasFP[], int& contadorTotalTransacciones,
                      int vCodMarcaProd[], int vCodMarca[], int vCantVendidaMarcaFP[], int cantMarcas, int cantFP);
void mostrarReportes(int vCodProd[], string vNomProd[], float vPrecioVentaProd[], int vStockProd[], int vCantVendida[], float vTotalRecaudado[], string vCodFP[], string vNomFP[], int vContadorVentasFP[], int contadorTotalTransacciones,
                     int vCodMarca[], string vNombreMarca[], int vCantVendidaMarcaFP[], int cantMarcas, int cantFP);

#endif // FUNCIONES_H_INCLUDED
