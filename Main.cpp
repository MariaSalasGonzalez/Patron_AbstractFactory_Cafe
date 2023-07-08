#include "Factoria.h"
#include "FactoriaCafe.h"
#include "Cliente.h"

int main() {
	Cliente *c = new Cliente;
	cout << endl;
	cout << " E J E M P L O - A B S T R A C T  F A C T O R Y " << endl;
	cout << endl;
	cout << " Probando la fabrica de muebles de comedor con el codigo del cliente" << endl;
	Factoria *f1 = new Factoria();
	c->codigoCliente(*f1);
	delete f1;
	std::cout << endl;
	std::cout << " Probando la fabrica de muebles de cafe con el codigo del cliente" << endl;
	FactoriaCafe *f2 = new FactoriaCafe();
	c->codigoCliente(*f2);
	delete f2;
	delete c;

	return 0;
}

