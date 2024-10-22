#include <string>
#include "./getFirstName.hpp"

using namespace std;

namespace first { // demonstrates getting first name using substr function as well as concatination
	string getFirstName(string name) {
		string firstName = "";

		firstName = firstName + name.substr(0, name.find(' ')); 

		return firstName;
	}
}