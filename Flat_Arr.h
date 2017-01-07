#pragma once
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;
const static size_t quantity_flat = 8;
const static size_t information = 4;
class Flat_Arr
{
	array<array<float, information>, quantity_flat>list;
public:
	Flat_Arr();
	Flat_Arr(array<array<float, information>, quantity_flat>&);
	const static size_t quantity_flat = 8;
	const static size_t information = 4;
	void outputArr()const;
	~Flat_Arr();
};

