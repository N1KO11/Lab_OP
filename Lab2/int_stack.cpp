#include "int_stack.h"
#include <stdexcept>
#define ERR_NONE 0;
#define ERR_OVERFLOW 1;

int_stack::int_stack() {}

int_stack::int_stack(int size) {
    _mass = new int[size];
}

int_stack::int_stack(std::stack<int> stack) {
    _size = stack.size();
    _mass = new int[_size];

    for (int i = 0; i < _size; i++) {
        _mass[i] = stack.top();
        stack.pop();
    }
}

int_stack::int_stack(int_stack &ref_stack) {
    _mass = new int[ref_stack.get_size()];
    int *ref_data = ref_stack.get_data();
    int n = ref_stack.get_index();
    for (int i = 0; i < n; i++)
        _mass[i] = ref_data[i];
}

int int_stack::get_size() {
    return _size;
}

int int_stack::get_index() {
    return _now;
}

int *int_stack::get_data() {
    return _mass;
}

int int_stack::add(int element) {
    if (_now >= _size) {
        return ERR_OVERFLOW;
    }
    _mass[_now] = element;
    ++_now;
    return ERR_NONE;
}

void int_stack::pop() {
    if (_now == 0) {
        //trow
        return;
    }
    --_now;
}

int int_stack::size() {
    return get_size();
}

bool int_stack::empty() {
    return _now != 0;
}

int int_stack::top() {
    if (_now == 0) {
        throw std::invalid_argument( "received negative value" );
        return -1;
    }
    return _mass[_now - 1];
}

void int_stack::output() {
    for (int i = 0; i < _now; i++) {
        //out
    }
    //\n
}