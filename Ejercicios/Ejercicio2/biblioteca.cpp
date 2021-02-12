  
#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][2];
string autor[39][3];
void cargarLibros() {
    // Arreglo con categoria, descripcion y autor
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)";autor[0][2]="Brayan Raudales";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos";autor[1][2]="celene suazo";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos";autor[2][2]="Janio Lezama";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion";autor[3][2]="Jonathan Mejia";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos";autor[4][2]="Patricia pineda";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos";autor[5][2]="bill gate";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1";autor[6][2]="jose perez";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)";autor[7][2]="bill bautista";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)";autor[8][2]="mario murcia";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)";autor[9][2]="John Cena";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos";autor[10][2]="Carlos Ubeda";
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes";autor[11][2]="Tony Portillo";
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion";autor[12][2]="Edwin Raudales";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software";autor[13][2]="Maria Mejia";
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD";autor[14][2]="Greyci Rios";
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";autor[15][2]="Ada Ponce";
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores)";autor[16][2]="Brianny Suazo";
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras";autor[17][2]="Monserrath Suazo";
	libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber";autor[18][2]="Amy Arteaga";
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker";autor[19][2]="Rosalia Rodezno";
	libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador";autor[20][2]="Capulina buena Parte";
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker";autor[21][2]="Macabro Lopez";
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL";autor[22][2]="Dionisio Herrera";
	libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural";autor[23][2]="Dennis Carranza";
	libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos";autor[24][2]="Antonio Martinez";
	libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP";autor[25][2]="Juan Pinel";
	libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial";autor[26][2]="Ariel suazo";
	libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva";autor[27][2]="Claudia Figueroa";
	libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial";autor[28][2]="Mirna Perez";
	libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python)";autor[29][2]="Yillian Pineda";
	libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python";autor[30][2]="Valentina Rosario";
	libros[31][0] = "Python"; libros[31][1] = "Inmersion en Python";autor[31][2]="Aminta lainez";
	libros[32][0] = "Python"; libros[32][1] = "Inmersion en Python 3";autor[32][2]="Norma Giron";
	libros[33][0] = "Python"; libros[33][1] = "Introduccion a la programacion con Python";autor[33][2]="Jessica Paz";
	libros[34][0] = "Python"; libros[34][1] = "Introduccion a Programando con Python";autor[34][2]="Rosamalia Sanchez";
	libros[35][0] = "Python"; libros[35][1] = "Python instantaneo (1999)";autor[35][2]="Franklin Sarmiento";
	libros[36][0] = "Python"; libros[36][1] = "Python para ciencia e ingenieria";autor[36][2]="Gerson Matute";
	libros[37][0] = "Python"; libros[37][1] = "Python para principiantes";autor[37][2]="Eduardo Pikokre";
	libros[38][0] = "Python"; libros[38][1] = "Python para todos";autor[38][2]="Peter la Anguila";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca o el autor que desee: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 39; i++)
        {
            string libro = libros[i][1];
            string autors = autor[i][2];
            string libroEnminuscula = libro;
            string autorEnminuscula = autors;
           

            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
          
            
            if (libroEnminuscula.find(buscar) != string::npos) {
            
                cout << "Libro encontrado: " << libro ; cout <<" El autor es: "<<autors<< endl;
                
                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1];cout << " Del autor: " << autor[sugerencia1][2]<<endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1];cout << " Del autor: " << autor[sugerencia2][2]<<endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1];cout << " Del autor: " << autor[sugerencia3][2]<<endl;

                salir = true;
            }
            else
            if(autorEnminuscula.find(buscar) != string::npos)
            {
                cout << "autor encontrado: " << autors ; cout <<" El libro es: "<<libro<< endl;
                
                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1];cout << " Del autor: " << autor[sugerencia1][2]<<endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1];cout << " Del autor: " << autor[sugerencia2][2]<<endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1];cout << " Del autor: " << autor[sugerencia3][2]<<endl;

                salir = true; 
                break;
            }
                break;
            
            
        }
        
        
        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro o autor que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    


    return 0;
}

