#include <iostream>
#include <string>

using namespace std;

// sizeof(A) = 16
struct A {
    char c; // 1 byte
    bool b; // 1 byte
    // ... pad 6 bytes
    double d; // 8 bytes
} bar[3];

// sizeof(B) = 8
struct B {
    char c; // 1 byte
    bool b; // 1 byte
    // ... pad 2 bytes
    long l; // 4 bytes
};

// sizeof(C) = 12
struct C {
    char c; // 1 byte
    // ... pad 3 bytes
    long l; // 4 bytes
    bool b; // 1 byte
    // ... pad 3 for alignment of C[]
};

// ?
struct alignas(8) Ca {
    char c; // 1 byte
    // ... pad 3 bytes
    long l; // 4 bytes
    bool b; // 1 byte
};

int main()
{    
    cout << "sizeof(char)=" << sizeof(char) << ", min=" << CHAR_MIN << ", max=" << CHAR_MAX << endl;
    cout << "sizeof(wchar_t)=" << sizeof(wchar_t) << ", min=" << WCHAR_MIN << ", max=" << WCHAR_MAX << endl;
    cout << "sizeof(short)=" << sizeof(short) << ", min=" << SHRT_MIN << ", max=" << SHRT_MAX << endl;
    cout << "sizeof(int)=" << sizeof(int) << ", min=" << INT_MIN << ", max=" << INT_MAX << endl;
    cout << "sizeof(long)=" << sizeof(long) << ", min=" << LONG_MIN << ", max=" << LONG_MAX << endl;
    cout << "sizeof(long long int)=" << sizeof(long long int) << ", min=" << LLONG_MIN << ", max=" << LLONG_MAX << endl;
    cout << "sizeof(bool)=" << sizeof(bool) << endl;
    cout << "sizeof(float)=" << sizeof(float) << endl;
    cout << "sizeof(double)=" << sizeof(double) << endl;    
    cout << "sizeof(long double)=" << sizeof(long double) << endl;    

    // x86
    //sizeof(char) = 1, min = -128, max = 127
    //sizeof(wchar_t) = 2, min = 0, max = 65535
    //sizeof(short) = 2, min = -32768, max = 32767
    //sizeof(int) = 4, min = -2147483648, max = 2147483647
    //sizeof(long) = 4, min = -2147483648, max = 2147483647
    //sizeof(long long int) = 8, min = -9223372036854775808, max = 9223372036854775807
    //sizeof(bool) = 1
    //sizeof(float) = 4
    //sizeof(double) = 8

    // x64
    //sizeof(char) = 1
    //sizeof(wchar_t) = 2
    //sizeof(short) = 2
    //sizeof(int) = 4
    //sizeof(long) = 4
    //sizeof(long long int) = 8
    //sizeof(bool) = 1
    //sizeof(float) = 4
    //sizeof(double) = 8

    // 28 on x86, 40 on x64
    cout << "sizeof(string)=" << sizeof(string) << endl;
    cout << "sizeof(wstring)=" << sizeof(wstring) << endl;

    // 4 on x86, 8 on x64
    cout << "sizeof(char*)=" << sizeof(char*) << endl;
    cout << "sizeof(int*)=" << sizeof(int*) << endl;
    cout << "sizeof(double*)=" << sizeof(double*) << endl;
    cout << "sizeof(void*)=" << sizeof(void*) << endl;
    
    cout << "sizeof(A)=" << sizeof(A) << endl;
    cout << "sizeof(B)=" << sizeof(B) << endl;
    cout << "sizeof(C)=" << sizeof(C) << endl;
    cout << "sizeof(Ca)=" << sizeof(Ca) << endl;
}
