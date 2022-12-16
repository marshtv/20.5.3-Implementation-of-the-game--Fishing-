#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ifstream river_file("F:\\__C++\\Skillbox\\20\\20.5.3 Implementation of the game -Fishing-\\Files\\river.txt");
	std::ofstream basket_file("F:\\__C++\\Skillbox\\20\\20.5.3 Implementation of the game -Fishing-\\Files\\basket.txt", std::ios::app);

	int fish_sum = 0;
	std::string fish_user, fish_river;
	std::cout << "Input fish type you want to fish out:" << std::endl;
	std::cin >> fish_user;

	while (!river_file.eof()) {
		river_file >> fish_river;
		if (fish_river == fish_user) {
			basket_file << fish_user << std::endl;
			fish_sum++;
		}
	}
	river_file.close();
	basket_file.close();

	std::cout << "Fishing result: " << fish_sum << " " << fish_user << std::endl;
}
