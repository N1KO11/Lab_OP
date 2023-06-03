#include "FigureSystem.h"


namespace Figures {
    FigureSystem::FigureSystem() = default;

    void FigureSystem::addParallelogramm(int x, int y, int height, int length, int corner) {
        FigureSystem::p.emplace_back(x, y, height, length, corner);
    }

    void FigureSystem::addRectangle(int x, int y, int height, int length) {
        FigureSystem::r.emplace_back(x, y, height, length);
    }

    void FigureSystem::PrintP() {
        for (int i = 0; i < p.size(); ++i) {
            p[i].draw();
        }
    }

    void FigureSystem::PrintR() {
        for (int i = 0; i < r.size(); ++i) {
            r[i].draw();
        }
    }

    int FigureSystem::SP() {
        int summ = 0;
        for (int i = 0; i < p.size(); ++i) {
            summ += p[i].square();
        }
        return summ;
    }

    int FigureSystem::SR() {
        int summ = 0;
        for (int i = 0; i < r.size(); ++i) {
            summ += r[i].square();
        }
        return summ;
    }

    int FigureSystem::PP() {
        int summ = 0;
        for (int i = 0; i < p.size(); ++i) {
            summ += p[i].perimeter();
        }
        return summ;
    }

    int FigureSystem::PR() {
        int summ = 0;
        for (int i = 0; i < r.size(); ++i) {
            summ += r[i].perimeter();
        }
        return summ;
    }

    int FigureSystem::Cmass() {
        int summ;
        for (int i = 0; i < p.size(); ++i) {
            summ += p[i].mass();
        }
        for (int i = 0; i < r.size(); ++i) {
            summ += r[i].mass();
        }
        return 0;
    }

    int FigureSystem::SizeOfSystem() {
        return sizeof(r) + sizeof(p);
    }

    bool FigureSystem::FigureSort(int a, int b) {
        return a > b;
    }


} // Figures