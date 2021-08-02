#include "Matrix.h"
#include "ConsoleLoader.h"
#include "FileLoader.h"
#include "QuickSort.h"
#include "UsualSort.h"
#include <vector>
#include <iostream>
#include <algorithm>


int main() {

	Matrix obj(0, 3, 3);
	//ConsoleLoader::InputData(obj);
	//obj.print_array();

	//FileLoader::InputData(obj);
	//obj.print_array();
	Matrix obj1(1, 3, 3);
	Matrix obj2(2, 3, 3);
	Matrix obj3(3, 3, 3);
	Matrix obj4(4, 3, 3);
	Matrix obj5(5, 3, 3);

	std::vector<Matrix> vecs;
	vecs.push_back(obj);
	vecs.push_back(obj3);
	vecs.push_back(obj4);
	vecs.push_back(obj5);
	vecs.push_back(obj2);
	vecs.push_back(obj1);
	QuickSort::Sort(vecs);
	for (auto v : vecs) {
		v.print_array();
	}
	return 0;
}

