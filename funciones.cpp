#include <iostream>
#include <string>

using namespace std;

string sayHello();

int main(int argc, char const *argv[])
{
	cout << sayHello();
	return 0;
}

string sayHello()
{
	return "Hello";
}