#include "UsualSort.h"
#include <vector>


void UsualSort::Sort() {
	bool IsSorted = false;
	while (!IsSorted) {
		IsSorted = true;
		for (int i = 0; i < Matrices.size() - 1; i++) {
			if (Matrices.at(i).DiagonalsProduct() > Matrices.at(i + 1).DiagonalsProduct()) {
				std::iter_swap(Matrices.begin() + i , Matrices.begin() + i + 1);
				IsSorted = false;
			}
		}
	}
}
