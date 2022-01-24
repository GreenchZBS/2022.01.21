#include "Freezer.h"
Freezer::Freezer() :
    GoodBasic{ 0, 1, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id) :
    GoodBasic{ id, 1, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id, int price) :
    GoodBasic{ id, price, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id, int price, string name) :
    GoodBasic{ 0, 1, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id, int price, string name, string descriprion, int cam) :
    GoodBasic{ id, price, name, descriprion } {
    fillProperties(cam, 5);
}

Freezer::Freezer(int id, int price, string name, string descriprion, int cam, int weight) :
    GoodBasic{ id, price, name, descriprion } {
    fillProperties(cam, weight);
}

Freezer::Freezer(int id, int price, string name, string descriprion, int cam, int weight, string newValue) :
    GoodBasic{ id, price, name, descriprion } {
    fillProperties(cam, weight , newValue);
}

Freezer::Freezer(int id, int price, string name, string description, int cam, int weight) :
    GoodBasic{ id, price, name, description } {
    _cameras = cam;
    _weight = weight;
}

void Freezer::fillProperties(int cam, int weight)
{
    _cameras = cam;
    _weight = weight;
}

void Freezer::fillProperties(int cam, int weight, string newVal)
{
    _cameras = cam;
    _weight = weight;
    _newProperty = newVal;
}


int Freezer::getCameras() {
    return _cameras;
}

int Freezer::getWeight() {
    return _weight;
}

void Freezer::setCameras(int cam) {
    if (cam > 0 && cam < 5)
    {
        _cameras = cam;
    }
    else
    {
        _cameras = 2;
    }
}

void Freezer::setWeight(int weight) {
    _weight = weight;
}

void Freezer::printHello() {
    std::cout << "Hello from class!\n";
}

void Freezer::printString(string dataToPrint) {
    std::cout << dataToPrint + "\n";
}

void Freezer::toString() {
    cout << "toString inside FreezeOld: id" << getItemId() << " Price:" << getPrice() << " Name:" << getName() << " Descr:" << getDescription() << " Sections:" << getCameras() << " Weight:" << getWeight() << "\n";
}