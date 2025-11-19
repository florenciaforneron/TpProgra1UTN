#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>

using namespace std;

void vaciarVectorProductos(int vCodProd[], string vNomProd[], float vPrecioVentaProd[], float vPrecioCompraProd[], int vStockProd[], int vCodMarcaProd[]);
bool vectorIntLleno(int vec[], int tam);
void cargarLoteMarcas(int vCodMarca[], string vNombreMarca[]);
bool esConsecutivo(int num);
void cargarLoteProductos(int vCodProd[], string vNomProd[], float vPrecioVentaProd[], float vPrecioCompraProd[], int vStockProd[], int vCodMarcaProd[], int vCodMarca[]);
void cargarLoteFP(string vCodFP[], string vNomFP[], int vPorcFP[]);

#endif // FUNCIONES_H_INCLUDED
