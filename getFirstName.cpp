#include <string>
#include "./getFirstName.hpp"

using namespace std;

namespace first { 
	string getFirstName(string name) { // only returns first name from a full name argument
		string firstName = "";

		firstName = firstName + name.substr(0, name.find(' ')); 

		return firstName;
	}
}