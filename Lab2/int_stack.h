#ifndef LAB2_INT_STACK_H
#define LAB2_INT_STACK_H
#include <stack>
#include "StackInterface.h"

class int_stack : public StackInterface {
private:
    int *_mass;
    int _now = 0;
    int _size;

public:
    int_stack();

    explicit int_stack(int size);

    explicit int_stack(std::stack <int> mass);

    int_stack(int_stack & ref_stack);

    int get_size();

    int get_index();

    int* get_data();

    int add(int element) override;

    void pop();

    int size();

    bool empty();

    int top();

    void output();
};


#endif //LAB2_INT_STACK_H