#pragma once
#include "Sorter.h"

class UsualSort: public Sorter {

public:

	std::vector<Matrix> Matrices;

	virtual void Sort() override;

	UsualSort(int data, int rows, int columns)
		: Sorter(data, rows, columns) {
	}

};

