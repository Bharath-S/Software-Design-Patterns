#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif

#include "Factory.cpp"

// client code starts
int main() {
	int type;
	while(1){
		cout << endl << "Enter type or Zero for exit" << endl;
		cin >> type;
		if(!type)
			break;
		Product *v = Factory::createProduct(type);
		if(v){
			v->showProduct();
			delete v;
		}
	}
	cout << "Exit.." << endl;
	return 0;
}
