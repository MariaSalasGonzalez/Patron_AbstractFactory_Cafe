#pragma once
#include <iostream>
#include <string>
#include "MesaAbstracta.h"
using namespace std;

class MesitaDeCafe : public MesaAbstracta{
private:
public:
	string usarMesa() const override;
	virtual string usarMesaSilla(SillaAbstracta *puntSillaAbs) const override;
};

