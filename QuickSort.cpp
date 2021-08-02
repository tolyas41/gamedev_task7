#include "QuickSort.h"
#include <algorithm>
#include <stdlib.h>
#include <vector>


void QuickSort::Sort(std::vector<Matrix> &vec) {
	
	std::sort(vec.begin(), vec.end(), [](Matrix a, Matrix b) {return (a.DiagonalsProduct() < b.DiagonalsProduct()); });
}
