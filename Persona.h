#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <string>

class Persona{
protected:
	string nom;
	string dire; //confused sounds porque no se marca como string?
	int telefono;
	int nac;
	string sexo;
	int rfc; //No segura porque solo afecta a clientes (se crearía un nuevo .h para ellos?)
public:
	Persona();
	Persona(string nom, string dire, int telefono, Fecha nac, string sexo);
	getNom(); //Al rato completo, tengo clase xd
	getDire();//No se como funciona github, cualquier error ahorita lo arreglo

}
#endif
