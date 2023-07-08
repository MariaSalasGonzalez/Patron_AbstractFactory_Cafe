#pragma once
#include <iostream>
#include <string>
#include "SillaAbstracta.h"
using namespace std;

class SillaMecedora : public SillaAbstracta{
private:
public:
	string sentarse() const override;
};

