#include <iostream>
#include "./getFirstName.hpp"
#include "./getLastName.hpp"

using namespace std;

int main() {
	string fullName = "John Doe";
	cout << "first name is: " << first::getFirstName(fullName) << endl;
	cout << "last name is: " << last::getLastName(fullName) << endl;

	return 0;
}