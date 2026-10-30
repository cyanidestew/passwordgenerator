#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));
	std::string alphabet[] = {
		"a","A",
		"b","B",
		"c","C",
		"d","D",
		"e","E",
		"f","F",
		"g","G",
		"h","H",
		"i","I",
		"j","J",
		"k","K",
		"l","L",
		"m","M",
		"n","N",
		"o","O",
		"p","P",
		"q","Q",
		"r","R",
		"s","S",
		"t","T",
		"u","U",
		"v","V",
		"w","W",
		"x","X",
		"y","Y",
		"z","Z",
		"1","!",
		"2","@",
		"3","#",
		"4","$",
		"5",
		"6",
		"7",
		"8",
		"9",
		"0"
	};
	int size = sizeof(alphabet) / sizeof(alphabet[0]);
	int passSize;
	std::cout << "Basic password generator\n" << "Enter passwords length:";
	std::cin >> passSize;
	std::cout << "\n";
	int index;
	int i = 0;
	while (i != passSize) {
		index = rand() % size;
		std::cout << alphabet[index];
		i++;
	}
	return 0;
}