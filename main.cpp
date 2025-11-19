#include "funciones.h"
#include <string>

int main()
{

    const int CANT_MARCAS = 10;
    const int CANT_NOMBRESMARCAS = 10;
    int vCodMarca[CANT_MARCAS];
    string vNombreMarca[CANT_NOMBRESMARCAS];
    int vCodProd[20], vStockProd[20], vCodMarcaProd[20];
    float vPrecioVentaProd[20], vPrecioCompraProd[20];
    string vNomProd[20];

    //variables lote formas de pago
    string vCodFP[5], vNomFP[5];
    int vPorcFP[5];

    bool seguirProceso = true;
    while(seguirProceso) {
        int opcionElegida;
        cout << "Menu - Elija una opcion" << endl;
        cout << "1. Cargar lote de marcas" << endl;
        cout << "2. Cargar lote de productos" << endl;
        cout << "3. Cargar lote de formas de pago" << endl;
        cout << "4. Cargar lote de ventas" << endl;
        cout << "5. Mostrar reportes" << endl;
        cout << "6. Salir"<< endl;
        cin >> opcionElegida;
        switch(opcionElegida){
            case 1:
                system("cls");
                cargarLoteMarcas(vCodMarca, vNombreMarca);
                break;
            case 2:
                system("cls");
                cargarLoteProductos(vCodProd, vNomProd, vPrecioVentaProd, vPrecioCompraProd, vStockProd, vCodMarcaProd, vCodMarca);
                break;
            case 3:
                system("cls");
                cout << "Proximamente..." << endl;
                break;
            case 4:
                system("cls");
                cout << "Proximamente..." << endl;
                break;
            case 5:
                system("cls");
                cout << "Proximamente..." << endl;
                break;
            case 6:
                cout << "Proceso finalizado exitosamente" << endl;
                seguirProceso = false;
                break;
            default:
                system("cls");
                cout << "Opcion incorrecta" << endl;
                break;
        }
    }
    return 0;
}
