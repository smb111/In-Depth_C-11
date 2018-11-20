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

template <typename T>
class B{
public:
	T t;
};

template <typename T>
class C{
public:
	T t;
};

#include <map>
#include <string>
typedef unsigned int uint;
typedef std::map<std::string, int> map_str_t;
/* C++ 无法使用 typedef 直接重定义模板类型，必须使用关键字 using */
// template <typename T>
// typedef std::map<T, std::string> map_T_str;

/* 使用 using 关键字代替 typedef 定义模板类型 */
template <typename Val>
using str_map_T = std::map<std::string, Val>;
str_map_T<int> map1;


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
	
	B<C<int>> bc;

	map_str_t mymap;
	mymap["string"] = 1;
	cout << mymap["string"] << endl;

	return 0;
}

