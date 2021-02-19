#ifndef LIGA_HPP
#define LIGA_HPP
#include <string>
#include <vector>
#include "equipos.hpp"
#include "jornadas.hpp"
#include "tablas.hpp"

class liga{
	private:
	string nombre;
    vector <equipos> lista_e;
    vector <jornadas> lista_j;
    tablas ta1;
    public:
    	liga();
    	liga(string,vector<equipos>,vector<jornadas>,tablas);
    	~liga();
    	
    	string getNombre();
		vector<equipos>getLista_e();
		vector<jornadas>getLista_j();
		tablas getTa1();
		void setNombre(string);
		void setLista_e(vector<equipos>);
		void setLista_j(vector<jornadas>);
		void setTa1(tablas);
		toString();
};
#endif