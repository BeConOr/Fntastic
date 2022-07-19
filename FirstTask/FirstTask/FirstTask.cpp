#include "FirstTask.hpp"

using namespace std;

int main()
{
	std::string oldString;

	std::getline(std::cin, oldString);

	std::string newString(convertString(oldString));

	std::cout << newString << std::endl;

	return 0;
}
