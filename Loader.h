#pragma once
#include "Matrix.h"

class Loader: public Matrix {

public:

	virtual void InputData(Matrix& obj) = 0;
};

