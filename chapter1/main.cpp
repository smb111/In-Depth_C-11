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

template <typename T, typename R>
auto func1(T t, R r) -> decltype(t + r)
{
	return t + r;
}

int main()
{
	auto i = 5;
	
	cout << i << endl;

	decltype(i) j = 1;
	
	const Foo foo = Foo();
	decltype(foo.x) a = 3;
	decltype((foo.x)) b = a;
	a = 3; // a : int
	// b = 4; b : const int &

	cout << func1<int , int>(3,5) << endl;

	return 0;
}
