#pragma once
#include <iostream>
using namespace std;
class GoodBasic
{
private:

	int _itemId;
	int _itemPrice;
	string _itemName;
	string _itemDescription;

public:

	GoodBasic();
	GoodBasic(int id, int price, string name, string description);

	int getItemId();

	void setItemId(int newId);

	void goodsPublicFunction();
	int getPrice();
	void setPrice(int newPrice);
	string getName();
	void setName(string name);
	string getDescription();
	void setDescription(string descr);

	void toString();
};

