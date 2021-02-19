#include "tablas.hpp"
#include <string>
#include <vector>
#include "equipos.hpp"
tablas::tablas(){
	
}
tablas::tablas(vector<equipos>_equiposs){
this->equiposs=_equiposs;
}

vector<equipos> tablas::getEquiposs(){
	return this->equiposs;	
}
void tablas::setEquiposs(vector<equipos>_equiposs){
	this->equiposs=_equiposs;
}
/*string tablas::toString(){
	string retval = "";
	for(int i = 0; i <this->getEquiposs().size();i++){
		retval += this->getEquiposs.at(i);
	}
	return retval;
}*/