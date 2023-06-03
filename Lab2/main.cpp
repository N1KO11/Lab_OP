#include <iostream>
#include "StackInterface.h"
#include "int_stack.h"

class Service {
private:
    StackInterface stack;

public:
    Service(StackInterface stack) {
        this->stack = stack;
    }
    void test() {
        auto res = stack.add(6);
    }
};

int main() {
    int size;
    std::cin >> size;
    int_stack *stack = new int_stack(size);
    stack->add(4);
//    auto s = new Service();
//    auto err = s->test();

//    if (err) {
//        exit(1);
//    }

    return 0;
}