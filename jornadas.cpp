#include "jornadas.hpp"

using namespace std;
jornadas::jornadas() {

}
jornadas::jornadas(equipos _equipo1,equipos _equipo2, int _goles1,int _goles2,bool _estado) {
	this->equipo1 = _equipo1;
	this->equipo2 = _equipo2;
	this->goles1 = _goles1;
	this->goles2 = _goles2;
	this->estado = _estado;
		
	
}
jornadas::~jornadas(){
	
}
equipos jornadas::getEquipo1(){
	return this->equipo1;
}
void jornadas::setEquipo1(equipos _equipo1){
	this->equipo1= _equipo1;
}

equipos jornadas::getEquipo2(){
	return this->equipo2;
}
void jornadas::setEquipo2(equipos _equipo2){
	this->equipo2= _equipo2;
}

int jornadas::getGoles1(){
	return this->goles1;
}
void jornadas::setGoles1(int _goles1){
	this->goles1=_goles1;
}
int jornadas::getGoles2(){
	return this->goles2;
}
void jornadas::setGoles2(int _goles2){
	this->goles2=_goles2;
}

bool jornadas::getEstado(){
	return this->estado;
}
void jornadas::setEstado(bool _estado){
	this->estado=_estado;
}

string jornadas::toString(){
	string retval = "";
	retval +="Equipo 1:"+this->getEquipo1().getNombre();
	retval += "Goles 1: "+to_string(this->getGoles1())+"\n";
	retval+="Equipo2 :"+this->getEquipo2().getNombre(); 
    retval+=" Goles 2: "+to_string(this->getGoles2())+"\n";
	if(this->getEstado()== true){
	retval += "Estado : por jugar ";
	}else{
	retval += "Estado : finalizado";
		
	}
	return retval;
	
}


