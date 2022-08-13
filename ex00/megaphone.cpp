#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOAD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	else
	{
		std::string text;
		int i;
		size_t j;

		i = 0;
		while(++i < argc){
			std::string str = argv[i];
			j = 0;
			while (str.length() > j)
			{
				str[j] = std::toupper(str[j]);
				j++;
			}
			text +=str;
			i++;
			if (i != argc -1)
				text += " ";
		}
		std::cout << text << std::endl;
	}
}
