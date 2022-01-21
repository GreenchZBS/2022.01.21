#pragma once
#include "GoodBasic.h"
class Freezer : public GoodBasic
{
private:
    int _cameras;
    int _weight;
public:
    Freezer();

    Freezer(int id, int price, string name, string description, int cam, int weight);

    int getCameras();

    int getWeight();

    void setCameras(int cam);

    void setWeight(int weight);

    void printHello();

    void printString(string dataToPrint);

    void toString();
};

