#include "FactoriaCafe.h"

SillaAbstracta* FactoriaCafe::construyeSilla() const{
	return new SillaMecedora();
}

MesaAbstracta* FactoriaCafe::construyeMesa() const{
	return new MesitaDeCafe();
}
