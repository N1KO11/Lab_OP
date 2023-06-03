#ifndef LAB4_PARALLELOGRAM_H
#define LAB4_PARALLELOGRAM_H

#include "iostream"
#include "Figure.h"
#include "IPhysObject.h"
#include "IPrintable.h"

namespace Figures {

    class Parallelogram : virtual Figure, virtual IPhysObject, virtual IPrintable {
    private:
        CVector2d _position;
        int height;
        int length;
        int corner;
    public:
        Parallelogram(int x, int y, int height, int length, int corner);

        double square() override;
        double perimeter() override;

        double mass() override;
        Figures::CVector2d position() override;
        bool operator== ( IPhysObject &ob ) override;
        bool operator< ( IPhysObject &ob ) override;

        void draw() override;
    };

} // Figures

#endif //LAB4_PARALLELOGRAM_H
