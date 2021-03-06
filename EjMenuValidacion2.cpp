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

bool leerCredenciales(const string usuario, const string pwd, const int intentos)
{ 


    // Esta variable es para validar que solamente se le den los intentos especificados
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

    } while ((id != usuario || password != pwd ) && contador_intentos < intentos);
    if (contador_intentos == intentos && (id != usuario || password != pwd))
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
    // Declaramos constantes para manejo de id y password
    const string usuario_administrador = "ID_del_administrador";
    const string usuario_vendedor = "ID_del_vendedor";
    const string usuario_cliente = "ID_del_cliente";
    const string pwd_administrador = "Password_1";
    const string pwd_vendedor = "Password_2";
    const string pwd_cliente = "Password_3";
    const int numero_intentos = 3;

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
            if (leerCredenciales(usuario_administrador, pwd_administrador,numero_intentos))
            {
                cout << "Aqui ponemos todo el c??digo para las opciones que puede realizar el Admin";
            }
            system("pause");
            break;
        case 2:
            cout << "Login vendedor"<<endl;
            if (leerCredenciales(usuario_vendedor, pwd_vendedor,numero_intentos))
            {
                cout << "Aqui ponemos todo el c??digo para las opciones que puede realizar el Vendedor";
            }
            system("pause");
            break;
        case 3:
            cout << "Login cliente"<<endl;
            if (leerCredenciales(usuario_cliente, pwd_cliente,numero_intentos))
            {
                cout << "Aqui ponemos todo el c??digo para las opciones que puede realizar el Cliente";
            }
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