#include "Arr.h"

Arr::Arr(array<array<float, information>, quantity_flat>&listArray):list(listArray)
{
}

void Arr::outputArr() const
{
	cout << "\nThe list flats house 23: \n\n";
	cout << "           ";
	for (size_t i = 0; i < information; ++i)
		cout <<setw(20)<<"Information " << i + 1 ; 
	for (size_t quantity_flat = 0; quantity_flat < list.size(); ++quantity_flat)
	{
		cout << "\nNumber flat " << quantity_flat + 1 ;
		for (size_t information = 0; information < list[quantity_flat].size(); ++information)
			cout  << internal << setw(18) << list[quantity_flat][information];
	}
	cout << endl;
}


Arr::~Arr()
{
}
