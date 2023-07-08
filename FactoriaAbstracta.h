#pragma once
#include "SillaAbstracta.h"
#include "MesaAbstracta.h"
using namespace std;

class FactoriaAbstracta{
public:
	virtual SillaAbstracta *construyeSilla() const = 0;
	virtual MesaAbstracta *construyeMesa() const = 0;
};

