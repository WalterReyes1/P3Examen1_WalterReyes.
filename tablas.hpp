#ifndef TABLAS_HPP
#define TABLAS_HPP
#include <string>
#include <vector>
#include "equipos.hpp"

using namespace std;

class tablas {
	private : 
	vector<equipos> equiposs;	
	public:
	tablas();

	tablas(vector<equipos>);
	~tablas();
	vector<equipos>getEquiposs();
	void setEquiposs(vector<equipos>);
	string toString();
	
};
#endif