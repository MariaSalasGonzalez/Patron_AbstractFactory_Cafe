#pragma once
#include "SillaAbstracta.h"
using namespace std;

class MesaAbstracta{
public:
	virtual ~MesaAbstracta() {}
	virtual string usarMesa() const = 0;
	virtual string usarMesaSilla(SillaAbstracta*) const = 0;
};

