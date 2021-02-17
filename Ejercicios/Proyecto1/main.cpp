#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

 int opcion = 0;

    while(true) {
        system("cls");

        cout << "Menu de videos Juegos"; 
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        cout<<"ingrese un numero para jugar"<<endl;
        cout << "1 - Starship" << endl;
        cout << "2 - Snake" << endl;
        cout << "0 - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: 
           starShip();            
            break;
        case 2:
             snake();
            break;
        default:
            break;
        }

        system("pause");
        cout << endl;

        if (opcion == 0) {
            break;
        }
    }

    return 0;
}
