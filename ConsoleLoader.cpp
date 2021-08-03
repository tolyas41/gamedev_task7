#include "ConsoleLoader.h"
#include <iostream>

void ConsoleLoader::Load() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cin >> data[i][j];
		}
	}
}
