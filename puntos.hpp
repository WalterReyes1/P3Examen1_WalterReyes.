/*Los
puntos por equipo tienen un equipo, goles a favor, goles en contra, partidos ganados, partidos,
perdidos y partidos empatados.
*/

#ifndef PUNTOS_HPP
#define PUNTOS_HPP
#include<string>
#include "equipos.hpp"

using namespace std;

class puntos {
	private: 
	equipos equipo;
	int golesA;
	int golesC;
	int partidos_perdidos;
	int partidos_ganados;
	int partidos_empatados;
	int total; 
	public:
		puntos();
		puntos(equipos,int,int,int,int,int,int);
		~puntos();
		equipos getEquipo();
		int getGolesA();
		int getGolesC();
		int getPartidos_perdidos();
		int getPartidos_ganados();
		int getPartidos_empatados();
		int getTotal();
		void setGolesA(int);
		void setGolesC(int);
		void setPartidos_perdidos(int);
		void setPartidos_ganados(int);
		void setPartidos_empatados(int);
		void setTotal(int);
		void setEquipo(equipos);
		string toString();
};
#endif