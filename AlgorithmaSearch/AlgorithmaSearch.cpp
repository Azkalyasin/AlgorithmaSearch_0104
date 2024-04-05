
#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
	while (true)
	{
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n < 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}
	cout << "\n-----------------------\n";
	cout << " Enter array elemnts \n";
	cout << "\n----------------------\n";
	for ( i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void linearsearch() {
	char ch;
	int ctr;
	int item;

	do
	{
		cout << "\nEnter element you want to search: "; //step 1
		cin >> item;

		ctr = 0;
		i = 0; // step 2
		while (i < n) // step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl; // step 6
				break;
			}
			i++; // step 4
		}
		if (i == n) // step 5
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\ncontions search (y/n): ";
		cin >> ch;
	} while ((ch == 'Y') || (ch == 'y'));
}


void diplay() {
	cout << "Arry elemnts are: ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	input();
	linearsearch();
}

