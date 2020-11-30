#include<iostream>
#include<string.h>
#include<iomanip>
#pragma once

enum scale {ounces, kilograms};

class ZooAnimal  
{
	private:
		char const* name;
		int cageNumber;
		int weightDate;
		int weight;
		ZooAnimal *mother;

	public:
		void Create (char const*, int, int, int); // create function
		void Destroy (); // destroy function 
		void isMotherOf (ZooAnimal&);
		void changeWeight (int pounds);
		void changeWeightDate (int today);
		char const* reptName ();
		int reptWeight ();
		void reptWeight (scale which);
		inline int reptWeightDate ();
		int daysSinceLastWeighed (int today);
};
