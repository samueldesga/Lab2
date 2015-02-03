#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_
using namespace std;
#include <iostream>

class DynamicArray
{

public:
	DynamicArray();
	DynamicArray(int _capacite);
	~DynamicArray();
	void setElement(int _index, int _valeur);
	int getElement(int _index);
	int getCapacite();
	void setCapacite(int _capacite);

private:
	int * tabElements;
	int capacite;

};


#endif //DYNAMICARRAY_H_