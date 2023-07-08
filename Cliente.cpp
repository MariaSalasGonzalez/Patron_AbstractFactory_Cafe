#include "Cliente.h"

void Cliente::codigoCliente(const FactoriaAbstracta & fabrica) {
	MesaAbstracta *mesaA = fabrica.construyeMesa();
	SillaAbstracta *sillaA = fabrica.construyeSilla();
	cout << mesaA->usarMesa() << endl;
	cout << mesaA->usarMesaSilla(sillaA) << endl;
	delete mesaA;
	delete sillaA;
}
