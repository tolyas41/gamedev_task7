#include "Matrix.h"
#include "ConsoleLoader.h"
#include "FileLoader.h"
#include "QuickSort.h"
#include "UsualSort.h"
#include <vector>
#include <iostream>
#include <algorithm>


int main() {

	FileLoader obj_file(0, 3, 3);
	obj_file.Load();
	obj_file.print_array();


	ConsoleLoader obj_console(0, 2, 4);
	//obj_console.Load();
	obj_console.print_array();



	UsualSort usual_obj(0, 0, 0);
	Matrix obj0(0, 3, 3);
	Matrix obj1(1, 3, 3);
	Matrix obj2(2, 3, 3);
	Matrix obj3(3, 3, 3);
	Matrix obj4(4, 3, 3);
	Matrix obj5(5, 3, 3);
	usual_obj.Matrices.push_back(obj0);
	usual_obj.Matrices.push_back(obj3);
	usual_obj.Matrices.push_back(obj5);
	usual_obj.Matrices.push_back(obj2);
	usual_obj.Matrices.push_back(obj4);
	usual_obj.Matrices.push_back(obj1);
	usual_obj.Sort();
	std::cout << "\nUsual Sort\n";
	for (auto v : usual_obj.Matrices) {
		v.print_array();
	}


	QuickSort quick_obj(0, 0, 0);
	quick_obj.Matrices.push_back(obj0);
	quick_obj.Matrices.push_back(obj3);
	quick_obj.Matrices.push_back(obj5);
	quick_obj.Matrices.push_back(obj2);
	quick_obj.Matrices.push_back(obj4);
	quick_obj.Matrices.push_back(obj1);
	quick_obj.Sort();
	std::cout << "\nQuick Sort\n";
	for (auto v : quick_obj.Matrices) {
		v.print_array();
	}


	return 0;
}

