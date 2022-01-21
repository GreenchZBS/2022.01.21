#include "Freezer.h"
Freezer::Freezer() :
    GoodBasic{ 0, 1, "noname", "nodescription" } {
    _cameras = 1;
    _weight = 10;
}

Freezer::Freezer(int id, int price, string name, string description, int cam, int weight) :
    GoodBasic{ id, price, name, description } {
    _cameras = cam;
    _weight = weight;
}

int Freezer::getCameras() {
    return _cameras;
}

int Freezer::getWeight() {
    return _weight;
}

void Freezer::setCameras(int cam) {
    _cameras = cam;
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