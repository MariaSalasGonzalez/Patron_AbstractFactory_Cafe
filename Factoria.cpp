#include "Factoria.h"

SillaAbstracta* Factoria::construyeSilla() const{
	return new SillaComedor();
}

MesaAbstracta* Factoria::construyeMesa() const{
	return new MesaComedor();
}
