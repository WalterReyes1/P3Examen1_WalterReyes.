#include "tablas.hpp"
#include "jornadas.hpp"
#include "equipos.hpp"
#include "liga.hpp"
#include <string>
#include <vector>
using namespace std;
liga::liga(){
	
}
liga::liga(string _nombre,vector<equipos> _lista_e,vector<jornadas> _lista_j,tablas _ta1){
	this->nombre=_nombre;
	this->lista_e=_lista_e;
	this->lista_j=_lista_j;
	this->ta1=_ta1;
}
string liga::getNombre(){
	return this->nombre;
}
void liga::setNombre(string _nombre){
	this->nombre=_nombre;
}
vector<equipos>liga::getLista_e(){
	return this->lista_e;
}

void liga::setLista_e(vector<equipos>_lista_e){
	this->lista_e = _lista_e;
	
}

vector<jornadas> liga::getLista_j(){
	return this->lista_j;
}

void liga::setLista_j(vector<jornadas> _lista_j){
	this->lista_j=_lista_j;
}

tablas liga::getTa1(){
	return this->ta1;
}
void liga::setTa1(tablas _ta1){
	this->ta1=_ta1;
}
	




