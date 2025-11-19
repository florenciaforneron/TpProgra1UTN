#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>

using namespace std;


struct LoteDeVentas{
    int nroDeCompra;
    int codigoDeProducto;
    string formaDePago;
    int cantidadVendida;
    int codCliente;
    int diaVenta;
};

void vaciarVectorProductos(int vCodProd[], string vNomProd[], float vPrecioVentaProd[], float vPrecioCompraProd[], int vStockProd[], int vCodMarcaProd[]);
bool vectorIntLleno(int vec[], int tam);
void cargarLoteMarcas(int vCodMarca[], string vNombreMarca[]);
bool esConsecutivo(int num);
void cargarLoteProductos(int vCodProd[], string vNomProd[], float vPrecioVentaProd[], float vPrecioCompraProd[], int vStockProd[], int vCodMarcaProd[], int vCodMarca[]);
void cargarLoteFP(string vCodFP[], string vNomFP[], int vPorcFP[]);
void cargarLoteVentas();


#endif // FUNCIONES_H_INCLUDED
