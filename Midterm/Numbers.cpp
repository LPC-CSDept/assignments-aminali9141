#include "Numbers.hpp"

	int Numbers::NumofObjects=0;

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
		NumofObjects++;
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
    	int sum1=0;
    	int sum2=0;
    	for (int i = 0; i < this->values.size(); ++i)
    	{
    		sum1+=this->values[i];
    	}
    	for (int i = 0; i < n.values.size(); ++i)
    	{
    		sum2+=n.values[i];
    	}

    	if(sum1>sum2)
    		return 1;
    	return 0;
    }
	
	void printNumbers(Numbers n)
	{
		for (int i = 0; i < n.values.size(); ++i)
		{
			cout<<n.values[i]<<endl;
		}
	}
