// Linkage example

#include <iostream>
using namespace std;

extern void sayhelloloud();
// extern void sayhello(); // Link error!

extern const string GlobalName;
// extern const string LocalName; // Link error!

int main()
{
	sayhelloloud();
	cout << GlobalName << endl;
}