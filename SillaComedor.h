#pragma once
#include <iostream>
#include <string>
#include "SillaAbstracta.h"
using namespace std;

class SillaComedor: public SillaAbstracta{
public:
	string sentarse() const override;
};

