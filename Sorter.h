#pragma once
#include "Matrix.h"
#include <vector>

class Sorter: public Matrix{

public:

	virtual void Sort() = 0;

	Sorter(int data, int rows, int columns) 
		: Matrix(data, rows, columns) {
	}

};

