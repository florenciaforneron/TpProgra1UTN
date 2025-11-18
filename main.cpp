#include <iostream>
#include <string>

using namespace std;
bool esConsecutivo(int num) {
    string numString = to_string(num);
    for(int i = 1; i < numString.length(); i++){
        int numAnt = (int)numString[i-1];
        int numAct = (int)numString[i];
        if(numAct != numAnt+1){
            return false;
        }
    }
    return true;
}

void cargarLoteProductos(
    int vCodProd[],
    string vNomProd[],
    float vPrecioVentaProd[],
    float vPrecioCompraProd[],
    int vStockProd[],
    int vCodMarcaProd[]) {
    cout << "Menu carga de lote de Productos"<<endl;
    cout << "-------------------------------"<<endl;
    for(int i = 0; i<20; i++){
        int cod, stock, codMarca;
        float precioVenta, precioCompra;
        string nombre;
        cout << "Ingrese datos del producto nro. " << i+1 <<endl;
        cout << "Codigo: ";
        cin >> cod;
        if(cod == 0){
            system("cls");
            cout << "El codigo no debe estar vacio" << endl;
            return;
        }
        if(cod < 100 || cod > 999){
            system("cls");
            cout << "El codigo debe tener 3 digitos" << endl;
            return;
        }
        if(esConsecutivo(cod)){
            system("cls");
            cout << "El codigo no debe ser consecutivo" << endl;
            return;
        }

        cout << "Nombre: ";
        cin >> nombre;
        if(nombre.length() == 0){
            system("cls");
            cout << "El nombre no debe estar vacio" << endl;
            return;
        }

        cout << "Precio venta: ";
        cin >> precioVenta;
        if(precioVenta == 0){
            system("cls");
            cout << "El precio de venta no debe estar vacio" << endl;
            return;
        }

        cout << "Precio compra: ";
        cin >> precioCompra;
        if(precioCompra == 0){
            system("cls");
            cout << "El precio de compra no debe estar vacio" << endl;
            return;
        }

        cout << "Stock disponible: ";
        cin >> stock;
        if(stock == 0){
            system("cls");
            cout << "El stock no debe estar vacio" << endl;
            return;
        }

        cout << "Codigo de Marca: ";
        cin >> codMarca;
        if(codMarca == 0){
            system("cls");
            cout << "El codigo de marca no debe estar vacio" << endl;
            return;
        }
        cout << "-------------------------------"<<endl;

        vCodProd[i] = cod;
        vNomProd[i] = nombre;
        vPrecioVentaProd[i] = precioVenta;
        vPrecioCompraProd[i] = precioCompra;
        vStockProd[i] = stock;
        vCodMarcaProd[i] = codMarca;
    }
}

void cargarLoteFP(string vCodFP[], string vNomFP[], int vPorcFP[]){

}
int main()
{

    //variables lote productos
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
                cout << "Proximamente..." << endl;
                break;
            case 2:
                system("cls");
                cargarLoteProductos(vCodProd, vNomProd, vPrecioVentaProd, vPrecioCompraProd, vStockProd, vCodMarcaProd);
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
