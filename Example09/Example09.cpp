// Stack VS Heap
#include <iostream>
using namespace std;

void allocate_on_stack()
{
    constexpr size_t size = 50;
    
    // allocate on stack
    // initialize first two elems, others set to zero
    double data[size] { 0.125, 0.25 }; 

    // access
    for (size_t i = 2; i < size; ++i) {
        data[i] = data[i-1]*0.8 + data[i-2]*0.2;
    }

    // pass to function
    operate_on_array(data, size);
}

void allocate_on_heap(size_t size)
{
    double* data = new double[size];
    
    // access using pointer arithmetics
    double* p = data;
    for (size_t i = 0; i < size; ++i) {
        *p++ = i*0.1;
    }

    // deallocate!
    delete[] data;
}

void operate_on_array(double* p, const size_t len)
{
    for (size_t i = 0; i < len; ++i) {
        *p += (len - i) * 0.25;
    }
}

int main()
{
    allocate_on_stack();
    allocate_on_heap(60);
    
}
