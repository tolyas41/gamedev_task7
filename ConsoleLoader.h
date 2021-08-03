#pragma once
#include "Loader.h"

class ConsoleLoader: public Loader {

public:
	virtual void Load() override;

	 ConsoleLoader(int data, int rows, int columns) 
		 : Loader(data, rows, columns) {
	 }

};

