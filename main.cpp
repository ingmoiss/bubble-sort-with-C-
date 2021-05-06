#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};//Declaracion del arreglo
    int aux = 0;

    cout << "Datos en el orden original\n" << endl;

    for(int i = 0; i < 10; i++){
        cout << setw(4) << a[i];
    }

    //Ordernamiento burbuja
    for(int i = 0; i < 10 - 1; i++){
        for(int j = 0; j < 10 - 1; j++){
            if(a[j] < a[j+1]){
                aux = a[j];
                a[j] = a[j + 1];
                a[j+1] = aux;
            }
        }
    }

    //Se imprime el arreglo con el nuevo orden
    cout << "\n\n\tNuevo orden de elementos\n";
     for(int i = 0; i < 10; i++){
        cout << setw(4) << a[i];
    }

    return 0;
}
