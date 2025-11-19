#include "funciones.h"
#include <string>

int main()
{

    const int TAMANIO_VEC_MARCAS = 10;
    int vCodMarca[TAMANIO_VEC_MARCAS];
    string vNombreMarca[TAMANIO_VEC_MARCAS];

    const int TAMANIO_VEC_PRODUCTOS = 20;
    int vCodProd[TAMANIO_VEC_PRODUCTOS], vStockProd[TAMANIO_VEC_PRODUCTOS], vCodMarcaProd[TAMANIO_VEC_PRODUCTOS];
    float vPrecioVentaProd[TAMANIO_VEC_PRODUCTOS], vPrecioCompraProd[TAMANIO_VEC_PRODUCTOS];
    string vNomProd[TAMANIO_VEC_PRODUCTOS];

    const int CANT_FORMASPAGO = 5;
    string vCodFP[CANT_FORMASPAGO], vNomFP[CANT_FORMASPAGO];
    int vPorcFP[CANT_FORMASPAGO];

    int vCantidadVendidaAcumulada[TAMANIO_VEC_PRODUCTOS] = {0};
    float vTotalRecaudadoAcumulado[TAMANIO_VEC_PRODUCTOS] = {0.0f};

    int vContadorVentasFP[CANT_FORMASPAGO] = {0};
    int contadorTotalTransacciones = 0;

    int vCantVendidaMarcaFP[TAMANIO_VEC_MARCAS * CANT_FORMASPAGO] = {0};

    // =================================================================
    //                        MOCK DE DATOS
    // =================================================================

    // ------ Marcas ------
    int codMarcas[10] = {1,2,3,4,5,6,7,8,9,10};
    string nomMarcas[10] = {"Samsung","Apple","Sony","Xiaomi","LG","Motorola","HP","Dell","Lenovo","Asus"};

    for(int i = 0; i < TAMANIO_VEC_MARCAS; i++){
        vCodMarca[i] = codMarcas[i];
        vNombreMarca[i] = nomMarcas[i];
    }

    // ------ Productos ------
    for(int i = 0; i < TAMANIO_VEC_PRODUCTOS; i++){
        vCodProd[i] = 200 + i;                   // Código correlativo
        vNomProd[i] = "Producto " + to_string(i + 1);
        vStockProd[i] = 10 + (i % 15);           // Stock variable
        vPrecioCompraProd[i] = 100 + i * 5;      // Precio base
        vPrecioVentaProd[i]  = vPrecioCompraProd[i] * 1.40; // 40% más caro
        vCodMarcaProd[i] = codMarcas[i % 10];    // Asignación ciclada de marcas
    }

    // ------ Formas de Pago ------
    string codFPs[5]  = {"EF", "TR", "TC", "MP", "CT"};
    string nomFPs[5]  = {"Efectivo","Transferencia","Tarjeta Credito","MercadoPago","Criptomoneda"};
    int porcFPs[5]    = {-10, 0, 10, 5, 3}; // recargo/ descuento

    for(int i = 0; i < CANT_FORMASPAGO; i++){
        vCodFP[i] = codFPs[i];
        vNomFP[i] = nomFPs[i];
        vPorcFP[i] = porcFPs[i];
    }

    cout << "Mock cargado correctamente. Ej marca: " << nomMarcas[0]  << endl;

    bool seguirProceso = true;
    while(seguirProceso) {
        int opcionElegida;
        cout << "Menu - Elija una opcion" << endl;
        cout << "------------------------------------" << endl;
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
                //cargarLoteMarcas(vCodMarca, vNombreMarca);
                break;
            case 2:
                system("cls");
                //cargarLoteProductos(vCodProd, vNomProd, vPrecioVentaProd, vPrecioCompraProd, vStockProd, vCodMarcaProd, vCodMarca);
                break;
            case 3:
                system("cls");
                //cargarLoteFP(vCodFP, vNomFP,vPorcFP);
                break;
            case 4:
                system("cls");
                cargarLoteVentas(vCodProd, vCodFP, vStockProd, vPrecioVentaProd, vCantidadVendidaAcumulada, vTotalRecaudadoAcumulado, vContadorVentasFP, contadorTotalTransacciones,
                    vCodMarcaProd, vCodMarca, vCantVendidaMarcaFP, TAMANIO_VEC_MARCAS, CANT_FORMASPAGO);
                break;
            case 5:
                system("cls");
                mostrarReportes(vCodProd, vNomProd, vPrecioVentaProd, vStockProd, vCantidadVendidaAcumulada, vTotalRecaudadoAcumulado, vCodFP, vNomFP, vContadorVentasFP, contadorTotalTransacciones,
                    vCodMarca, vNombreMarca, vCantVendidaMarcaFP, TAMANIO_VEC_MARCAS, CANT_FORMASPAGO);
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
