#ifndef LAB4_FIGURESYSTEM_H
#define LAB4_FIGURESYSTEM_H

#include "vector"
#include "algorithm"
#include "Parallelogram.cpp"
#include "Rectangle.h"

namespace Figures {

    class FigureSystem {
    private:
        std::vector<Parallelogram> p;
        std::vector<Rectangle> r;
    public:
        FigureSystem();
        void addParallelogramm(int x, int y, int height, int length, int corner);
        void addRectangle(int x, int y, int height, int length);

        void PrintP();
        void PrintR();

        int SP();
        int SR();

        int PP();
        int PR();

        int Cmass();

        int SizeOfSystem();

        bool FigureSort(int a, int b);
    };

} // Figures

#endif //LAB4_FIGURESYSTEM_H
