#ifndef LAB4_RECTANGLE_H
#define LAB4_RECTANGLE_H

#include "iostream"
#include "Figure.h"
#include "IPrintable.h"
#include "IPhysObject.h"

namespace Figures {

    class Rectangle : virtual Figure, virtual IPhysObject, virtual IPrintable {
    private:
        CVector2d _position;
        int height;
        int length;
    public:
        Rectangle(int x, int y, int height, int length);

        double square() override;
        double perimeter() override;

        double mass() override;
        Figures::CVector2d position() override;
        bool operator== (IPhysObject &ob ) override;
        virtual bool operator< (IPhysObject &ob ) override;

        void draw() override;
    };

} // Figures

#endif //LAB4_RECTANGLE_H
