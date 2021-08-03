#pragma once
#include "Loader.h"

class FileLoader: public Loader {

public:
	virtual void Load() override;

	FileLoader (int data, int rows, int columns) 
		: Loader(data, rows, columns) { 
	}


};

