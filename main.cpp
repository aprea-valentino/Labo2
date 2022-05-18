
#include "taller.h"
using namespace std;

int main()
{
    cout << "Hacer test en el main" << endl;
    vector<int> maximo (4,0);
    vector<int> rever (4,0);
    maximo[0]=1;
    maximo[1]=2;
    maximo[2]=3;
    maximo[3]=4;
    cout << mayor(maximo)<< endl;
    rever = reverso(maximo);
    rotar(maximo, 3);
    return 0;
}
