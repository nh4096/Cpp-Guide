// Move operators
#include <memory>
#include <iostream>

class A
{
private:
    int data;
public:
    // move constructor
    A(A&& other) : data(move(other.data)) {}
    // move assignment
    A& operator=(A&& other) {
        data = move(other.data);
        return *this;
    }
};

int main()
{
    A a;
}
