# include <iostream>  // Para utilizar cin y cout
# include <stdlib.h>  // Libreria para poder usar comandos del sistema y funciones de conversion de datos

using namespace std; // Para no tener que usar el prefijo std antes de cin y cout

// Este programa es un ejemplo de manejo de validacion de datos y de uso de menus 
// Y tambien usa funciones

void despliegaMenu()
{
    // Declaramos constantes para manejo de valores auxiliares
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";   

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
    cout << "                                  Opcion ";

}

bool leerAdmin()
{ 
    // Declaramos constantes para manejo de id y password
    const string usuario_administrador = "ID_del_administrador";
    const string pwd_administrador = "Password_1";
    const int numero_intentos = 3;

    // Esta variable es para validar que solamente se le den tres intentos
    int contador_intentos;

    // Y estas para leer el id y el password
    string id, password;

    // Esta variable es para el valor de retorno de la funcion
    bool valido;

    contador_intentos = 0;
    do
    {   
        cout << "Usuario :";
        cin >> id;
        cout << "Contrase??a :";
        cin >> password;
        contador_intentos++;

    } while ((id != usuario_administrador || password != pwd_administrador ) && contador_intentos < numero_intentos);
    if (contador_intentos == numero_intentos && (id != usuario_administrador || password != pwd_administrador))
    {
        cout << "Lo siento no tienes las credenciales correctas"<<endl;
        valido = false;

    }
    else
    {
        cout << "Si pudiste entrar como administrador"<<endl;
        valido = true;
     }
    return valido;
}
int main()
{

    // Declaramos variables de entrada
    string opcion_str;
    int opcion;



    // Todo el c??digo se va a repetir hasta que el usuario indique que quiere terminar
    do
    {
  
        // Llamamos a la funci??n que dibuja el menu
        despliegaMenu(); 
        //Pedimos la opci??n al usuario, la capturamos como string para no tener problemas si el usurio se equivoca
        cin >> opcion_str;

        // Cambiamos de string a entero
        opcion = atoi(opcion_str.c_str());

        // Y utilizamos un switch para ejecutar las diferentes opciones
        switch (opcion)
        {
        case 1:
            cout << "Login administrador"<<endl;
            if (leerAdmin())
            {
                cout << "Aqui ponemos todo el c??digo para las opciones que puede realizar el Admin";
            }
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