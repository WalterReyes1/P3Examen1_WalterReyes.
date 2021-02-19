#include "equipos.hpp"

equipos::equipos(){
	
}
equipos::equipos(string _nombre, int _skills){
	this->nombre = _nombre;
	this->skills = _skills;
}
equipos::~equipos(){
	
}

string equipos::getNombre(){
	return this->nombre; 
}
void equipos::setNombre(string _nombre){
	this->nombre=_nombre;
}
int equipos::getSkills(){
	return this->skills;
}
void equipos::setSkills(int _skills){
	this->skills=_skills;
}
string equipos::toString(){
	string retval = "";
	retval += "Equipo: "+this->getNombre()+"\n";
	retval += "Skills: "+to_string(this->getSkills())+"\n";	
	return retval;
	
}