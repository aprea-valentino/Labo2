
#include "taller.h"
using namespace std;

int main()
{
    cout << "Hacer test en el main" << endl;
    vector<int> maximo (6,0);
    vector<int> rever (4,0);
    fstream Datos;
	Datos.open("datos.txt", ios::out | ios::app);
    maximo[0]=1;
    maximo[1]=2;
    maximo[2]=3;
    maximo[3]=849384;
    maximo[4]=5;
    maximo[5]=6;
    //cout << mayor(maximo)<< endl;
    //rever = reverso(maximo);
    //rotar(maximo, 2);
    //cout<<estaOrdenado(maximo);
    //mostrarVector(maximo, cout);
    //sumaTodo(maximo);
    //cout << maximo[0] << endl;
    //guardarVector(maximo, "vector.txt");
    //cantidadApariciones("vector.txt", "numero.txt", 10);
    return 0;
}
