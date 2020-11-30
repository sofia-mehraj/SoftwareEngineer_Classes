#include"ZooAnimal.h"

using namespace std;


void ZooAnimal::Create (char const *getName, int getCageNo, int getDate, int getWeight)
{
	name = getName;
	cageNumber = getCageNo;
	weightDate = getDate;
	weight = getWeight;
}

void ZooAnimal::Destroy ()
{
	delete [] name;
}

void ZooAnimal::isMotherOf (ZooAnimal& motherOf)
{
	motherOf.mother = this;
}

void ZooAnimal::changeWeight (int pounds){}

void ZooAnimal::changeWeightDate (int today)
{
	weightDate = today;
}

char const* ZooAnimal::reptName()
{
	return name;
}

int ZooAnimal::reptWeight(){}
void ZooAnimal::reptWeight(scale which){}

inline int ZooAnimal::reptWeightDate()
{
	return weightDate;
};

int ZooAnimal::daysSinceLastWeighed(int today)
{
	int startday, thisday;
	thisday = today/100*30 + today - today/100*100;
	startday = weightDate/100*30 + weightDate - weightDate/100*100;
	if (thisday < startday)
		thisday += 360;
	return (thisday-startday); 

}

int main()
{
	ZooAnimal bozo;
	bozo.Create ("Bozo", 408, 1027, 400);
	cout <<"\nThis animal's name is " << bozo.reptName()<< endl;
	//bozo.Destroy ();
	return 0;
} 
 


