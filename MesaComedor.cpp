#include "MesaComedor.h"

string MesaComedor::usarMesa() const{
	return " estoy comiendo en la mesa de comedor";
}

string MesaComedor::usarMesaSilla(SillaAbstracta *puntSillaAbs) const{
	return puntSillaAbs->sentarse() + " y " + usarMesa();
}
