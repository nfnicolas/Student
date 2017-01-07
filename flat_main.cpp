#include<iostream>
#include<array>
#include<string>
#include"Flat_Arr.h"
using namespace std;
int displayMenu();
void Find_Flat(Flat_Arr&f);
int main(int argc, char*argv[])
{
	string str = R"(This is book show quantity flat with your information
              Information 1 : total area
              Information 2: living area
              Information 3: Quantity people
              Infrmation 4:  ----
P.S. The menu is under construction)";
	cout << str;

	array<array<float, Flat_Arr::information>, Flat_Arr::quantity_flat>list{
		57.3,48.8,3,0,
		57.5,50.0,4,0,
		52.7,45.3,2,0,
		52.7,45.0,1,0,
		67.8,60.0,0,0,
	};
	Flat_Arr ob(list);
	ob.outputArr();

	return 0;
}

int displayMenu()
{
	int selection;
	cout << "MENU";
	cout << "1) Find of flat\n";
	cout << "2)....another point\n";
	cin >> selection;
	return selection;
}

void Find_Flat(Flat_Arr & f)
{
	/*......*/
}