#include "StringConverter.hpp"
#include <map>
#include <string>
#include <algorithm>

std::string convertString(const std::string& initialString)
{
	std::string newString("");

	for (size_t i(0); i < initialString.size(); ++i) {
		if ((initialString[i] >= 'A') && (initialString[i] <= 'Z')) {
			newString += (initialString[i] + 'a' - 'A');
		}
		else {
			newString += initialString[i];
		}
	}

	std::map<char, size_t> charNumberInString;

	for (size_t i(0); i < newString.size(); ++i) {
		charNumberInString[newString[i]] += 1;
	}

	for (size_t i(0); i < newString.size(); ++i) {
		if (charNumberInString[newString[i]] > 1) {
			newString.replace(i, 1, ")");
		}
		else {
			newString.replace(i, 1, "(");
		}
	}

	return newString;
}
