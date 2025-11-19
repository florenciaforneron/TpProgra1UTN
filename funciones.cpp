#include "funciones.h"
#include <limits>
#include <string>

void vaciarVectorProductos(
    int vCodProd[],
    string vNomProd[],
    float vPrecioVentaProd[],
    float vPrecioCompraProd[],
    int vStockProd[],
    int vCodMarcaProd[]){
    for (int i = 0; i < 20; i++) {
        vCodProd[i] = 0;
        vNomProd[i] = "";
        vPrecioVentaProd[i] = 0;
        vPrecioCompraProd[i] = 0;
        vStockProd[i] = 0;
        vCodMarcaProd[i] = 0;
    }
}

bool vectorIntLleno(int vec[], int tam){
    for(int i = 0; i < tam; i++){
        if(vec[i]==0) return false;
    }
    return true;
}

bool existeElementoVInt(int vec[], int tam, int valor){

    for(int i = 0; i < tam; i++){
        if(vec[i] == valor) {
            return true;
        }
    }

    return false;
}

void cargarLoteMarcas(int vCodMarca[], string vNombreMarca[]){
    cout << "Menu carga de lote de Marcas"<<endl;
    cout << "-------------------------------"<<endl;

    for(int i = 0; i<10; i++){
        int codMarca = 0;
        string nombreMarca;
        bool entradaValida;

        cout << "--- Ingrese datos del producto nro. " << i+1 << " ---" << endl;

        entradaValida = false;
        while (!entradaValida) {
            cout << "Codigo (1 a 10): ";

            if (cin >> codMarca) {
                if (codMarca >= 1 && codMarca <= 10) {
                    entradaValida = true;
                } else {
                    cout << "Error: El codigo debe ser un numero entero entre 1 y 10." << endl;
                }
            } else {
                cout << "Error: Debe ingresar un numero entero valido." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        entradaValida = false;
        while (!entradaValida) {
            cout << "Nombre: ";
            getline(cin, nombreMarca);

            if (nombreMarca.length() > 0) {
                entradaValida = true;
            } else {
                cout << "Error: El nombre no debe estar vacio. Intente de nuevo." << endl;
            }
        }

        cout << "-------------------------------"<<endl;
        vCodMarca[i] = codMarca;
        vNombreMarca[i] = nombreMarca;
    }
}

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
    int vCodMarcaProd[],
    int vCodMarca[]
    ) {
    if(!vectorIntLleno(vCodMarca, 10)){
        system("cls");
        cout << "Es necesario cargar el lote de marcas para usar este menu" << endl;
        return;
    }
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
        if(!existeElementoVInt(vCodMarca, 10, codMarca)){
            system("cls");
            cout << "El codigo ingresado no existe" << endl;
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
