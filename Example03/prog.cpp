#include <iostream>
using namespace std;

// internal linkage
static void sayhello()
{
	cout << "Hello!" << endl;
}

// external linkage
void sayhelloloud()
{
	cout << "HELLO!" << endl;
}

// internal linkage
const string LocalName = "Reflectiva";

// external linkage
extern const string GlobalName = "Reflectivita";
