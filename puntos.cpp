#include "puntos.hpp"

puntos::puntos() {

}
puntos::puntos(equipos _equipo,int _golesA, int _golesC, int _partidos_perdidos,int _partidos_ganados, int _partidos_empatados,int _total ) {
	this->equipo = _equipo;
	this->golesA = _golesA;
	this->golesC= _golesC;
	this->partidos_perdidos = _partidos_perdidos;
	this->partidos_ganados = _partidos_ganados;
	this->partidos_empatados = _partidos_empatados;
	this->total = _total;

}

equipos puntos::getEquipo() {
	return this->equipo;
}
void puntos::setEquipo(equipos _equipo) {
	this->equipo = _equipo;
}

int puntos::getGolesA() {
	return this->golesA;

}
void puntos::setGolesA(int _golesA) {
	this->golesA=_golesA;

}

int puntos::getGolesC() {
	return this->golesC;
}
void puntos::setGolesC(int _golesC) {
	this->golesC=_golesC;
}

int puntos::getPartidos_empatados(){
	return this->partidos_empatados;	
}
void puntos::setPartidos_empatados(int _partidos_empatados){
	this->partidos_empatados = _partidos_empatados;
	
}
int puntos::getPartidos_ganados(){
	return this ->partidos_ganados;
}
void puntos::setPartidos_ganados(int _partidos_ganados){
	this->partidos_ganados=_partidos_ganados;
}
int puntos::getPartidos_perdidos(){
	return this->partidos_perdidos;
}
void puntos::setPartidos_perdidos(int _partidos_perdidos){
	this->partidos_perdidos = _partidos_perdidos;
}
int puntos::getTotal(){
	return this->total;
}
void puntos::setTotal(int _total){
	this->total=_total;
}
string puntos::toString(){
	string retval = "";
	retval=" ";
	retval += "Equipo: "+this->getEquipo().getNombre();
	retval+="Goles Favor: "+to_string(this->getGolesA())+"\n";
    retval+="Goles Contra: "+to_string(this->getGolesC())+"\n";
    retval+="Partidos Ganados: "+to_string(this->getPartidos_ganados())+"\n";
    retval+="Partidos Perdidos: "+to_string(this->getPartidos_perdidos())+"\n";
    retval+="Partidos Empatado: "+to_string(this->getPartidos_empatados())+"\n";
    retval +="Puntos totales: "+to_string(this->getTotal())+"\n";
	return retval;
}