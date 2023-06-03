#ifndef LAB2_PRINTABLESTACK_H
#define LAB2_PRINTABLESTACK_H
#include "int_stack.h"
#include "StackInterface.h"

class PrintableStack : public StackInterface {
public:
    PrintableStack(int size);
    void new_add(int number);
    int add(int number) override;
private:
    int _size;
    int_stack *stack;
};


#endif //LAB2_PRINTABLESTACK_H