#ifndef JORNADAS_HPP
#define JORNADAS_HPP
#include <string>
#include "equipos.hpp"
using namespace std;
class jornadas{
	private:
		equipos equipo1;
		equipos equipo2;
		int goles1;
		int goles2;
		bool estado;
		
		public: 
		jornadas();
		jornadas(equipos,equipos,int,int,bool);
		~jornadas();
		equipos getEquipo1();
		equipos getEquipo2();
		int getGoles1();
		int getGoles2();
		bool getEstado();
		void setEquipo1(equipos);
		void setEquipo2(equipos);
		void setGoles1(int);
		void setGoles2(int);
		void setEstado(bool);
		string toString();
};
#endif