#include <iostream>
using namespace std;


int main()
{
	int value;
	int Array[20] = {};
	float sum = 0;
	float S;
	float total=0;
	int n;
	for (n = 0; n < 20; n++) 
	{
		cout << "Please enter "<<n+1<<" intgere values :";
		cin >> value;
		Array[n] = value;
		sum += Array[n];
		
	}
	cout << "1.The average value of the elements in the array" << endl;
	float avg;
	avg = sum / n;
	cout << avg;
	cout << endl;

	cout << "2.The standard deviation s of the values in the array " << endl;
	int j;
	for (j = 0; j < 20; j++)
	{
		total += pow(Array[j] - avg,2);
	}
	S = sqrt(total /(n- 1));
	cout << S <<endl;

	cout << "3.Print the number of values that are divisible by 2 or 5 but not 3" << endl;
	int i;
	int count = 0;
	for (i = 0; i < 20; i++)
	{
		if (Array[i] % 2 == 0 && Array[i] % 5 == 0 && Array[i] % 3 != 0)
			cout << Array[i] << endl;
		    count++;
	}
	if (count == 0)
	{
		cout << "NOT Found number that are divisible by 2 or 5 but not 3";
	}
}