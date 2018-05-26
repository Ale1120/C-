#ifndef _tanque_H_
#define _tanque_H_
#include <iostream>
using namespace std;
class tanque{
private:
	int capacidad;
	int contenido;
	int diferencia=capacidad-contenido;

public:
	tanque();
	tanque(int cap);
	void agregarLiquido(int con);
	void sacarLiquido(int con);
	int chequearliquido();
	int chequearcapacidad();


};
#endif
