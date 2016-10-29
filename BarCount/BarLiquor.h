#pragma once
#include <vector>
#include "Bottle.h"
class BarLiquor
{
public:
	BarLiquor();
	~BarLiquor();
	void BarLiquor::SetName();
	void BarLiquor::SetNumberOfBottles(int numberFull, float bottleWeight, float emptyWeight);
	void BarLiquor::SetBottleWeight(float measuredWeight);

	float BarLiquor::GetSpareLiquor();
	int BarLiquor::GetNumberOfBottles();

private:
	std::string name;
	std::vector<Bottle> bottles;
	float fullBottleMass;
};

