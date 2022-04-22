# include <iostream>
using namespace std;
int main()
{
    char usuario;
    int clave;

    cout << "Ingrese Usuario :\n";
    cin >> usuario;

    cout << "Ingrese Clave :\n";
    cin >> clave;

    if (usuario=='A' and clave==123456) 
    {
        cout << "Acceso permitido";
    }
    else
    {
        cout << "Acceso denegado";
    }
    return 0;
}