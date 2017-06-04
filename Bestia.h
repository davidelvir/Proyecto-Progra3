#ifndef BESTIAS_H
#define BESTIAS_H
#include "Item.h"
#include<string>

using namespace std;
class Bestia
{
	private:
		vector<Item> items;
		string nombre;
	public:
		Bestia();
		Bestia(string);

		vector<Item> getItems();
		void setItems(vector<Item>);
		void setItem(Item item,int);
		
		string getNombre();
		void setNombre(string nombre);				

};
#endif
