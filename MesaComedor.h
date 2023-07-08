#pragma once
#include <iostream>
#include <string>
#include "MesaAbstracta.h"
using namespace std;

class MesaComedor : public MesaAbstracta{
private:
public:
	virtual string usarMesa() const override;
	virtual string usarMesaSilla(SillaAbstracta *puntSillaAbs) const override;
};

