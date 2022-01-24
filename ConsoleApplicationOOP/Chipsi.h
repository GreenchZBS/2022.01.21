#pragma once
#include "GoodBasic.h"

class Chipsi : public GoodBasic
{
private:
	int _weight;
	string _typeOfTaste;
public:
	Chipsi();
	Chipsi(int id, int price, string name, string description, int _weight, string _typeOfTaste);

	int getWeight();

	void setWeight(int newWeight);

	string getType();

	void setType(string newType);

	




};

