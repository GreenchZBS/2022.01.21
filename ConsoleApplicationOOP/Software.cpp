#include "Software.h"

Software::Software() :
        GoodBasic{ 0, 1, "noname", "nodescription" } {
        _licenseYears = 0;
        _computersQuantity = 0;
    }

Software::Software(int id, int price, string name, string description, int license, int quant) :
        GoodBasic{ id, price, name, description } {
        _licenseYears = license;
        _computersQuantity = quant;
    }

int Software::getLicenseYears() {
    return _licenseYears;
}

int Software::getComputersQuantity() {
    return _computersQuantity;
}

void Software::toString() {
    cout << "toString inside Software: id" << getItemId() << " Price:" << getPrice() << " Name:" << getName() << " Descr:" << getDescription() << " License years:" << getLicenseYears() << " Weight:" << getComputersQuantity() << "\n";
}