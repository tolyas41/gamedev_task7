#include "ConsoleLoader.h"
#include <iostream>

void ConsoleLoader::InputData(Matrix& obj) {
	for (int i = 0; i < obj.rows; i++) {
		for (int j = 0; j < obj.columns; j++) {
			std::cin >> obj.data[i][j];
		}
	}
}
