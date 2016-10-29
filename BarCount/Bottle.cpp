#include "stdafx.h"
#include "Bottle.h"


Bottle::Bottle(bool fullBottle, float fullMass)
{
	full = fullBottle;
	liquorMass = fullMass;

}

Bottle::Bottle(bool fullBottle, float fullMass, float massMeasured)
{
	full = fullBottle;
	liquorMass = fullMass - massMeasured;

}

Bottle::~Bottle()
{
}

float Bottle::GetMassOfLiqour()
{
	return liquorMass;
}
