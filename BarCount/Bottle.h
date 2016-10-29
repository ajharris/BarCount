#pragma once
#include <iostream>

class Bottle
{
public:
	Bottle();
	Bottle(bool isFull, float fullMass);
	Bottle(bool isFull, float fullMass, float measuredMass);
	float Bottle::GetMassOfLiqour();


	~Bottle();

private:
	bool full; //is this a full bottle?	
	float liquorMass;
};

