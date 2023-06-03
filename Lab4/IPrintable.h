#ifndef LAB4_IPRINTABLE_H
#define LAB4_IPRINTABLE_H

namespace Figures {

    class IPrintable {
    public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
        virtual void draw() = 0;
    };

} // Figures

#endif //LAB4_IPRINTABLE_H
