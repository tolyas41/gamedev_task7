#pragma once
#include "Matrix.h"

class Loader: public Matrix {

public:

	virtual void Load() = 0;

	Loader(int data, int rows, int columns) 
		: Matrix(data, rows, columns) {
	}
};

