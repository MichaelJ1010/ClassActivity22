#include "./getLastName.hpp"
#include <iostream>

using namespace std;

namespace last {
	string getLastName(string name) {
		short int i = 0;
		string lastName;
		while (true) {
			if (isspace(name[i])) {
				lastName = name.substr(i);
				break;
			}
			i++;
		}
		return lastName;
	}
}