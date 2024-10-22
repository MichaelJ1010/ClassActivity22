#include <string>
#include "./getFirstName.hpp"

using namespace std;

namespace first {
	string getFirstName(string name) {
		string firstName = "";

		firstName = firstName + name.substr(0, name.find(' '));

		return firstName;
	}
}