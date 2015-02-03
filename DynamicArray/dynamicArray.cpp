#include "dynamicArray.h"

DynamicArray::DynamicArray(){
	capacite = 100;
	tabElements = new int[100];
	for (int i = 0; i < 100; i++){
		tabElements[i] = 0;
	}
}
DynamicArray::DynamicArray(int _capacite){
	if (_capacite < 1){
		throw invalid_argument("Le tableau doit avoir une grandeur d'au moins 1");
	}
	else{
		capacite = _capacite;
		tabElements = new int[_capacite];
		for (int i = 0; i < _capacite; i++){
			tabElements[i] = 0;
		}
	}

}
DynamicArray::~DynamicArray(){

}

void DynamicArray::setElement(int _index, int _valeur){
	if (_index >= capacite){
		setCapacite(_index + 1);
	}

	tabElements[_index] = _valeur;
}
int DynamicArray::getElement(int _index){
	if (capacite <= _index || _index < 0){
		throw out_of_range("L'index est en dehors des bornes du tableau");
	}
	else{
		return tabElements[_index];
	}

}
int DynamicArray::getCapacite(){

	return capacite;
}
void DynamicArray::setCapacite(int _capacite){
	if (_capacite >= 1){
		int * tempTabChangeCapacite = new int[_capacite];
		for (int i = 0; i < _capacite; i++){
			tempTabChangeCapacite[i] = 0;
		}
		if (capacite > _capacite){
			for (int i = 0; i < _capacite; i++){
				tempTabChangeCapacite[i] = tabElements[i];
			}
		}
		else{
			for (int i = 0; i < capacite; i++){
				tempTabChangeCapacite[i] = tabElements[i];
			}
		}

		capacite = _capacite;
		delete tabElements;
		tabElements = tempTabChangeCapacite;

	}
	else{
		throw invalid_argument("Le tableau doit au moins avoir une capacité de 1");
	}

}