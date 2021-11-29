#include "Numbers.hpp"

	static int Numbers::NumofObjects=0;

	Numbers::Numbers()
	{
		ID=0;
	}

	Numbers::Numbers(int i,int n)
	{
	  srand(time(0)); 

		ID=i;
		for (int i = 0; i < n; ++i)
		{
			values.push_back(rand()%100);
		}

	}


	Numbers::~Numbers()
	{

	}

	int Numbers::getID()
	{
		return ID;
	}

	int Numbers::getNumObjects(void)
	{
		return NumofObjects;
	}

    int Numbers::operator >(const Numbers& n)
    {

    }
	
	void printNumbers(Numbers n)
	{
		for (int i = 0; i < n.values.size(); ++i)
		{
			cout<<n.values[i]<<endl;
		}
	}
