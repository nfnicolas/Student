#pragma once
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;
const static size_t quantity_flat = 8;
const static size_t information = 4;
class Arr
{
	
	array<array<float, information>, quantity_flat>list;
public:
	Arr(array<array<float,information>,quantity_flat>&);
	const static size_t quantity_flat = 8;
	const static size_t information = 4;
	void outputArr()const;
	~Arr();
};

