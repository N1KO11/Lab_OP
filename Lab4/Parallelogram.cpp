#include "Parallelogram.cpp"
#include "cmath"

namespace Figures {
    Parallelogram::Parallelogram(int x, int y, int height, int length, int corner)
    {

        this->_position.x = x;
        this->_position.y = y;
        this->height = height;
        this->length = length;
        this->corner = corner;
    }

    double Parallelogram::square() {
        return Parallelogram::height * Parallelogram::length * std::sin(Parallelogram::corner);
    }

    double Parallelogram::perimeter() {
        return (Parallelogram::length + Parallelogram::height) * 2;
    }

    double Parallelogram::mass() {

        return this->_position.x + this->length / 2 + this->_position.y + this->height / 2;
    }

    Figures::CVector2d Parallelogram::position() {
        return _position;
    }

    bool Parallelogram::operator==(IPhysObject &ob) {
        return this->mass() == ob.mass();
    }

    bool Parallelogram::operator<(IPhysObject &ob) {
        return this->mass() < ob.mass();
    }

    void Parallelogram::draw() {
        std::cout << "This is Parallelogram ;)";
    }

} // Figures