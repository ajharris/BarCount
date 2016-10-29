#include "stdafx.h"
#include "BarLiquor.h"


BarLiquor::BarLiquor()
{


}


BarLiquor::~BarLiquor()
{
}

void BarLiquor::SetNumberOfBottles(int numberFull, float weightOfFullBottle, float weightOfPartialBottle)
{
	for (int n = 0; n < numberFull; n++){
		bottles.push_back(Bottle(true, weightOfFullBottle));
	}
	bottles.push_back(Bottle(false, weightOfFullBottle, weightOfPartialBottle));
}


float BarLiquor::GetSpareLiquor()
{
	return bottles.back().GetMassOfLiqour();
}
