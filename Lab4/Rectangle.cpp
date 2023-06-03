#include "Rectangle.h"

namespace Figures {
    Rectangle::Rectangle(int x, int y, int height, int length)
    {
        this->_position.x = x;
        this->_position.y = y;
        this->height = height;
        this->length = length;
    }

    double Rectangle::square() {
        return Rectangle::length * Rectangle::height;
    }

    double Rectangle::perimeter() {
        return (Rectangle::height + Rectangle::length) * 2;
    }

    double Rectangle::mass() {
        return this->_position.x + this->length / 2 + this->_position.y + this->height / 2;
    }

    Figures::CVector2d Rectangle::position() {
        return _position;
    }

    bool Rectangle::operator==(IPhysObject &ob) {
        return false;
    }

    bool Rectangle::operator<(IPhysObject &ob) {
        return false;
    }

    void Rectangle::draw() {
        std::cout << "this is Rectangle ;)";
    }
} // Figures