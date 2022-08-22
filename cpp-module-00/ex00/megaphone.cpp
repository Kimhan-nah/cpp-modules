#include <cctype>
#include <iostream>
#include <cstring>

int main(int argc, char **argv) {
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND  UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; argv[i]; i++)
	{
		str = argv[i];
		for (unsigned int j = 0; j < str.length(); j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')			// 소문자일 경우
				str[j] = std::toupper(str[j]);
			else if (str[j] >= 'A' && str[j] <= 'Z')
				str[j] = std::tolower(str[j]);
		}
		std::cout << str;
	}
	std::cout << std::endl;

	return (0);
}
