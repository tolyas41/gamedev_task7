#include "FileLoader.h"
#include <fstream>

void FileLoader::Load() {
	std::ifstream in_file;
	in_file.open("array.txt");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			in_file >> data[i][j];
		}
	}
	in_file.close();
}
