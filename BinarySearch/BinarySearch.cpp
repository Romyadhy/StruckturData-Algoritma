#include <iostream>
using namespace std;

int mid;
int BinarySearch(int arr[], int first, int last, int x)
{
	while(first <= last)
	{
	 mid = (first + last) / 2;
		
		if (arr[mid] == x)
		{
			return mid;
		}
		
		else if (arr[mid] < x)
		{
			first = mid +  1;
		}
		else
		{
			last = mid - 1;
		}
	}
	return -1;
}


int main ()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 16, 17, 18, 19, 20};
	int midle = sizeof(arr) / sizeof(arr[0]);
	int x;
	
	cout << "Input the number: ";
	cin >> x;
	
	int result = BinarySearch(arr, 0, midle -1, x);
	
	if (result == -1)
	{
		cout << "Number not found";
	}
	else
	{
		cout << "Number is found in indeks " << result << endl;
		
	}
	
	return 0;
}
