#pragma once
#include <iostream>
#include <string>
#include "FactoriaAbstracta.h"
#include "MesitaDeCafe.h"
#include "SillaMecedora.h"
using namespace std;

class FactoriaCafe : public FactoriaAbstracta{
public:
	SillaAbstracta *construyeSilla() const override;
	MesaAbstracta *construyeMesa() const override;
};

