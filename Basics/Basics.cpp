#include <iostream>
#include <vector>

using namespace std;

void demo_c_pointer_1()
{
	char ch = 'o';
	char* pch = &ch;
	*pch = 'x';
	cout << ch << endl;
}

void demo_c_pointer_2()
{
	char ch = 'o';
	void* pv = &ch;
	// int* pi = pv; // not allowed!	
	//*pi = 96;
}

void demo_malloc_1()
{
	int* p = (int*)malloc(4 * sizeof(int));
	p[3] = 64;
	cout << p[0] << p[1] << p[2] << p[3] << endl;
}

void traverse_vector_1(vector<string>& v, string& what)
{
	// method 1
	auto p = find(begin(v), end(v), what);
	//cout << p << endl;

	// method 2
	for (const auto& x : v) {
		if (x == what) {
			cout << "found" << endl;
		}
	}

	// method 3
	// for_each(v, [](string x) {...});

	// method 4 (bad)
	//int ind = -1;
	//for (int i = 0; i < v.size(); ++i) {
	//	if (v[i] == what) {
	//		ind = i;
	//		break;
	//	}
	//}
}	

void naive_sizeof()
{
	// char x = 1; // 8
	// wchar_t x = 1; // 16
	// short x = 1; // 16
	// int x = 1; // 32
	// long int x = 1; // 32
	// long long int x = 1; // 64
	unsigned char x = 1; // 8
	unsigned int nbits = 1;
	while (x <<= 1) {
		nbits++;
	}
	cout << nbits << endl;
}

void increment(int* p, int size)
{
	for (int i = 0; i < size; ++i) { 
		p[i] += 10;
	}
}
void buggy_1()
{
	int a[10] = {};
	increment(a, 20); // bug!
}

