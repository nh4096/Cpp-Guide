// Signed-ness conversion

#include <iostream>
using namespace std;

int main()
{
    char i = -2; // -128 to 127
    unsigned char u; // 0 to 255 
    cout << "signed: " << i << ", unsigned: " << (u=i) << endl;
    cout << CHAR_MIN << "," << CHAR_MAX << "," << UCHAR_MAX << endl;
}
