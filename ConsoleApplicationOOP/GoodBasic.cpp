#include "GoodBasic.h"

GoodBasic::GoodBasic() {
	_itemId = 0;
	_itemPrice = 1;
	_itemName = "name";
	_itemDescription = "description";
}

GoodBasic::GoodBasic(int id, int price, string name, string description) {
		_itemId = id;
		_itemPrice = price;
		_itemName = name;
		_itemDescription = description;
	}

int GoodBasic::getItemId() {
		return _itemId;
	}

void GoodBasic::setItemId(int newId)
{
	_itemId = newId;
}

void GoodBasic::goodsPublicFunction() {
		std::cout << "Message from parent class\n";
	}

int GoodBasic::getPrice() {
	return _itemPrice;
}

void GoodBasic::setPrice(int newPrice) {
	_itemPrice = newPrice;
}

string  GoodBasic::getName() {
    return _itemName;
}

void  GoodBasic::setName(string name) {
    _itemName = name;
}

string  GoodBasic::getDescription() {
    return _itemDescription;
}

void  GoodBasic::setDescription(string descr) {
    _itemDescription = descr;
}

void  GoodBasic::toString() {
	cout << "toString:" << getItemId() << " " << getPrice() << " " << getName() << " " << getDescription() << "\n";
}