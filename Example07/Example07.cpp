// Dynamic casting

#include <iostream>
using namespace std;

class Base {
	char symbol;
	virtual void MakeMeVirtual() {}
public:
	void DoSomething() {
		cout << "Base doing..." << endl;
	}
};

class Derived : Base {
public:
	void DoSomethingMore() {
		cout << "Derived doing..." << endl;
	}
};

void UseBasePointer(Derived* pd)
{
	// Run-time check to determine whether pd is actually a Derived*
	//Derived* pb_as_pd = dynamic_cast<Derived*>(pb);
	
	if (pd)	{
		// Safe to call Derived method.
		pd->DoSomethingMore();
	} else {
		// Run-time check failed.
		cerr << "pd is null" << endl;
	}
}

int main()
{
	Base base_obj;
	Derived derived_obj;

	UseBasePointer(&derived_obj);
	UseBasePointer(dynamic_cast<Derived*>(&base_obj));

	// derived to base casting
	// Base* pb = dynamic_cast<Base*>(&derived_obj);

	// base to derived casting
	// Derived* pd = dynamic_cast<Derived*>(&base_obj);

}
