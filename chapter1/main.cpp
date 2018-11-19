#include <iostream>
using namespace std;

class A {
public:
	int i = 0;
};


class Foo {
public:
	int x;
};

int main()
{
	auto i = 5;
	
	cout << i << endl;

	decltype(i) j = 1;
	

	const Foo foo = Foo();

	decltype(foo.x) a = 3;
	decltype((foo.x)) b = a;
	a = 3;
	// b = 4; b : const int &


	return 0;
}
