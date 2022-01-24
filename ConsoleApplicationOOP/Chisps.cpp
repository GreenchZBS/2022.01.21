#include "Chipsi.h"

Chipsi::Chipsi() :
	GoodBasic{ 0, 1, "noname", "nodescription" } {
	_weight = 42;
	_typeOfTaste = "Vanila";
}
Chipsi::Chipsi(int id, int price, string name, string description, int weight, string typeOfTaste) :
	GoodBasic{ id,price,name,description } {
	_weight = weight;
	_typeOfTaste = typeOfTaste;
}

int Chipsi::getWeight() {
	return _weight;
}

void Chipsi::setWeight(int newWeight)
{
	if (newWeight <= 0 || newWeight > 10000)
	{
		_weight = 42;
	}
	else 
	{
		_weight = newWeight;
	}
}

string Chipsi::getType()
{
	return _typeOfTaste;
}

void Chipsi::setType(string newType)
{
	_typeOfTaste = newType;
}



