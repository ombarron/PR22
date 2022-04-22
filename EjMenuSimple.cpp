# include <iostream>  // Para utilizar cin y cout
# include <stdlib.h>  // Librería para poder usar comandos del sistema y funciones de conversion de datos

using namespace std; // Para no tener que usar el prefijo std antes de cin y cout

// Este programa es un ejemplo de manejo de validación de datos y de uso de menus 

int main()
{
    // Declaramos constantes para manejo de valores auxiliares
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";

    // Declaramos variables de entrada
    string opcion_str;
    int opcion;



    // Todo el código se va a repetir hasta que el usuario indique que quiere terminar
    do
    {
        /* code */
    
    
        // Vamos a desplegar el menu principal, entonces primero limpiamos la pantalla
        system("cls");
        // Hacemos primera linea del marco
        cout << "          "<<char(201);
        for (int i=1; i<=100;i++) 
        {
        cout << char(205); 
        }
        cout << char(187)<<endl;
        // Y ahora hacemos 3 lineas hacia abajo
        for (int i=1; i<=3;i++)
        {
            cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
        }
        // Ponemos el letrero principal
        cout << "          " << char(186) << "                                         MENU PRINCIPAL                                             "<< char(186) << endl;
        // Y ahora hacemos 3 lineas hacia abajo
        for (int i=1; i<=3;i++)
        {
            cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
        }
        // Ponemos las opciones
        cout << "          " << char(186) << "      01 Acceder como administrador" << linea_blanco_65 << char(186) << endl;
        cout << "          " << char(186) << "      02 Acceder como vendedor     " << linea_blanco_65 << char(186) << endl;
        cout << "          " << char(186) << "      03 Acceder como cliente      " << linea_blanco_65 << char(186) << endl;
        cout << "          " << char(186) << "      04 Salir del programa        " << linea_blanco_65 << char(186) << endl;
        // Y ahora hacemos 5 lineas hacia abajo
        for (int i=1; i<=5;i++)
        {
            cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
        }
        //Ponemos la linea de abajo
        cout << "          "<<char(200);
        for (int i=1; i<=100;i++) 
        {
        cout << char(205); 
        }
        cout << char(188)<<endl;

        //Pedimos la opción al usuario, la capturamos como string para no tener problemas si el usurio se equivoca
        cout << "                                  Opcion ";
        cin >> opcion_str;

        // Cambiamos de string a entero
        opcion = atoi(opcion_str.c_str());

        // Y utilizamos un switch para ejecutar las diferentes opciones
        switch (opcion)
        {
        case 1:
            cout << "Login administrador"<<endl;
            system("pause");
            break;
        case 2:
            cout << "Login vendedor"<<endl;
            system("pause");
            break;
        case 3:
            cout << "Login cliente"<<endl;
            system("pause");
            break;
        case 4:
            cout << "Vamos a salir"<<endl;
            system("pause");
            break;
        default:
            cout << "Por favor da una opcion valida (1, 2, 3 o 4)"<<endl;
            system("pause");
            break;
        }
    } while (opcion != 4);
    
    return 0;
}