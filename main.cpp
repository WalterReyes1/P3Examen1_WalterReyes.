#include <iostream>
#include "equipos.hpp"
#include "liga.hpp"
#include "equipos.hpp"
#include "jornadas.hpp"
#include "tablas.hpp"
#include "puntos.hpp"
#include <string>
#include <vector>
#include <random>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

	vector<equipos*> lista_equipos;
	int opcion = -1;
	int opcion2 = 0 ;
	while(opcion != 5) {
		cout << "Liga SalvaVida" << endl << "ingrese una opcion \n 1) Mantenimiento de equipos \n 2) Generar jornada de partidos\n 3) Simular partidos\n 4)Tabla de posiciones  \n 5) salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;
		switch(opcion) {
			case 1: {
				cout  << "ingrese una opcion \n 1) crear\n 2) modificar\n 3) listar\n 4) eliminar \n 5)"  << endl;
				cout << "Opcion: ";
				cin >> opcion2;
				if(opcion2 == 1) {
					string nombre;
					int skills;

					cout<<"Ingrese nombre del equipo: ";
					cin>>nombre;
					skills = 1+(rand()%99);
					equipos *e = new equipos(nombre,skills);
					lista_equipos.push_back(e);
				}

				if(opcion2 == 2) {
					for(int i = 0; i < lista_equipos.size(); i++) {
						equipos *e = lista_equipos[i];
						cout <<"------" << "Equipo#" << i <<"------"<<endl;
						cout << "Nombre: "<< e->getNombre() << endl;
						cout << "Skills: "<< to_string(e->getSkills())<<"%"<< endl;
					}
					int i = -1;
					cout << "Ingrese el indice del equipo  que eliminara: ";
					cin >> i;
					equipos *e =lista_equipos[i];
					string n_nombre;
					int n_skills;
					cout << "Ingrese el nuevo nombre: " << endl;
					cin >> n_nombre;
					n_skills = 1+(rand()%99);
					e->setNombre(n_nombre);
					e->setSkills(n_skills);
				}
				if(opcion2==3) {
					for(int i = 0; i < lista_equipos.size(); i++) {
						equipos *e = lista_equipos[i];
						cout <<"------" << "Equipo#" << i <<"------"<<endl;
						cout << "Nombre: "<< e->getNombre() << endl;
						cout << "Skills: "<< to_string(e->getSkills())<<"%"<< endl;
					}
				}

				if(opcion2==4) {
					for(int i = 0; i < lista_equipos.size(); i++) {
						equipos *e = lista_equipos[i];
						cout <<"------" << "Equipo#" << i <<"------"<<endl;
						cout << "Nombre: "<< e->getNombre() << endl;
						cout << "Skills: "<< to_string(e->getSkills())<<"%"<< endl;
					}
					int equip = -1;
					cout << "Ingrese el indice del equipo que eliminara: ";
					cin >> equip;
					delete lista_equipos[equip];
					lista_equipos.erase(lista_equipos.begin()+equip);
				}

			}
		/*	case 2: {
			int equipo1 =1+(rand()%lista_equipos.size());
			int equipo2 =1+(rand()%lista_equipos.size());
			bool aiuda = false;
			if(equipo1 == equipo2){
				aiuda = false;
			}else{
				equipos *e = lista_equipos[equipo1];
				equipos *E = lista_equipos[equipo2];
				
				cout<<e->getNombre() <<" contra "<< E->getNombre()<<endl;
			
			}
				break;
			}*/

		}
	}
	return 0;
}