#pragma once
#include <iostream>
#include <string>
#include "FactoriaAbstracta.h"
#include "MesaComedor.h"
#include "SillaComedor.h"
using namespace std;

class Factoria : public FactoriaAbstracta{
public:
	SillaAbstracta* construyeSilla() const override;
	MesaAbstracta* construyeMesa() const override;
};

