#ifndef LAB4_IPHYSOBJECT_H
#define LAB4_IPHYSOBJECT_H

#include "CVector2d.h"

namespace Figures {

    class IPhysObject : public CVector2d {
    public:
        virtual double mass() = 0;
// Координаты центра масс, м.
        virtual Figures::CVector2d position() = 0;
// Сравнение по массе.
        virtual bool operator== (IPhysObject &ob) = 0;
// Сравнение по массе.
        virtual bool operator< (IPhysObject &ob) = 0;
    };

} // Figures

#endif //LAB4_IPHYSOBJECT_H
