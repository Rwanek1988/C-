//Rocky Wanek
//April 07, 2023


#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int array_size = 10;
	int nums[array_size];
	
	int i, j, k;
	
	for(k=0; (k < array_size); k++)
	{
		nums[k]= rand()%100;
	}
	
	int temp;
	
	for(i=0; (i < array_size); i++)
	{
		for (k=0; k<array_size; k++)
		{
			cout << nums[k] << " ";
		}
		cout << endl;
		
		for (j=0; j < array_size-1; j++)
		{
			if (nums[j+1] < nums[j])
			{
				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
			}
		}
	}
	
	for (k=0; k<array_size; k++ )
	{
		cout << nums[k] << " ";
	}
	return 0;
	
}
