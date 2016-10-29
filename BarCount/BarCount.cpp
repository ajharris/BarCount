// BarCount.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "BarLiquor.h"

char end = -1;
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	while (true){
		std::string name;
		std::cout << "Enter name of liquor: " << std::endl;
		getline(cin, name);

		int numberOfBottles;
		std::cout << "Enter number of full bottles:" << std::endl;
		std::cin >> numberOfBottles;

		float fullBottle;
		std::cout << "Enter weight of full bottle:" << std::endl;
		std::cin >> fullBottle;

		float partialBottle;
		std::cout << "Enter measured weight of partial bottle" << std::endl;
		std::cin >> partialBottle;

		BarLiquor count;
		count.SetNumberOfBottles(numberOfBottles, fullBottle, partialBottle);

		std::cout << "The remaining " << name << " is " << numberOfBottles << " bottles and " << count.GetSpareLiquor() << "oz. " << std::endl;
		getline(cin, name);
	}

	return 0;
}

