#pragma once
#include "Matrix.h"
#include <vector>

class Sorter: public Matrix{

public:

	virtual void Sort(std::vector<Matrix> vec) = 0;

};

