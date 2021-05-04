#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif

#include "Product.cpp"

class Factory{
public:
	static Product * createProduct(int type) {
	
	Product *prod = NULL;
	
	switch(type) {
		case 1:{
			prod = new Car;
			break;
		}
		case 2:{
			prod = new Bike;
			break;
		}
		case 3:{
			prod = new Plane;
			break;
		}
		default:{
			cout << "invalid product type please re-enter type" << endl;
			return NULL;
		}
	}

	prod->prepareParts();
	prod->combineParts();
	prod->assembleParts();
	prod->applyLabel();
	
	return prod;
	}
	
};
