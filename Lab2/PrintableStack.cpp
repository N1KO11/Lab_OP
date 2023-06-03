#include "PrintableStack.h"
#include "int_stack.h"
#define ERR_NONE   0
#define ERR_OVERFLOW   1


PrintableStack::PrintableStack(int size)
{
    _size = size;
    stack = new int_stack(size);
}

void PrintableStack::new_add(int number)
{
    if(stack->add(number) == 1) {
        //trow
        return;
    }

    return;
}

int PrintableStack::add(int number)
{
    auto res = stack->add(number);

    if (res == ERR_OVERFLOW) {
        //trow

        return ERR_OVERFLOW;
    }

    return res;
}