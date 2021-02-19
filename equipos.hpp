#ifndef EQUIPOS_HPP
#define EQUIPOS_HPP
#include<string>
#include <cmath>

using namespace std;
class equipos{
	private: 
	string nombre;
	int skills;
	public:
		equipos();
		equipos(string,int);
		~equipos();
		string getNombre();
		void setNombre(string);
		int getSkills();
		void setSkills(int);	
		string toString();	
	
}; 
#endif