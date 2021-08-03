#pragma once
#include "Sorter.h"

class QuickSort: public Sorter {

public:

	std::vector<Matrix> Matrices;

	virtual void Sort() override;

	QuickSort(int data, int rows, int columns)
		: Sorter(data, rows, columns) {
	}

};

