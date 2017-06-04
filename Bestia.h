#ifndef BESTIAS_H
#define BESTIAS_H
#include "Item.h"

using namespace std;
class Bestia
{
	private:
		vector<Item> items;
	public:
		Bestia();
		Bestia(vector<Item>);
		vector<Item> getVector();
		void setVectores(vector<Item>);
		void setVector(vector<Item>,pos);
				


};
#endif
