#include <iostream>
#include "./getFirstName.hpp"

using namespace std;

int main() {
	string fullName = "John Doe";
	cout << "first name is: " << first::getFirstName(fullName) << endl;
	return 0;
}