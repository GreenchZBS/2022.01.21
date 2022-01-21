#pragma once
#include "GoodBasic.h"
class Software : public GoodBasic
{
private:
    int _licenseYears;
    int _computersQuantity;
public:
    Software();

    Software(int id, int price, string name, string description, int license, int quant);

    int getLicenseYears();

    int getComputersQuantity();

    void toString();
};

