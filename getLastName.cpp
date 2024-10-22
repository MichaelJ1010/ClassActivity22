#include "./getLastName.hpp"
#include <iostream>

using namespace std;

namespace last {
	string getLastName(string name) { // only returns last name
		short int i = 0;
		string lastName;
		while (true) { // the loop here is to show other string functions learned
			if (isspace(name[i])) {
				lastName = name.substr(i);
				break;
			}
			i++;
		}
		return lastName;
	}
}