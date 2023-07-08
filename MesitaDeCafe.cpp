#include "MesitaDeCafe.h"

string MesitaDeCafe::usarMesa()const{
	return " estoy poniendo mis cosas en la mesita de cafe";
}

string MesitaDeCafe::usarMesaSilla(SillaAbstracta *puntSillaAbs) const{
	return puntSillaAbs->sentarse() + " y " + usarMesa();
}
