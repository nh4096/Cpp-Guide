// Header file example

#include <iostream>
#include "sample.h"

using namespace N;
using namespace std;

int main()
{
	colors c = colors::blue;	
	
	int meaning = get_meaning();
	if (!(meaning%2)) {
		c = colors::azure;
	}
	//cout << c << endl;

	my_class* pmc = new my_class;
	pmc->do_something();
	pmc->put_value(100);
	pmc->put_value(200);

	RGB rgb;
	rgb.g = 128;

	value_store<RGB> obj;
}
