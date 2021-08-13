#include <bits/stdc++.h>
using namespace std;

// fibbnacci  function 
void fibbnacci(int n)
{
	int a = 0;
	int b = 1;
	int x[n];	// array is required because we have to store the values 
	int sum = 0;
	int even_count = 0;	// for even counting 
	int odd_count = 0;	// for odd counting 
	for (int i = 0; i < n; i++)
	{
		// swapping the values 
		a = b;
		b = sum;
		sum = a + b;
		x[i] = sum;	// storing the fibonacci no into the array 
	}

	cout << "\nTASK 1:\n\n";
	cout << "printing the fibonacci no's upto " << n << " terms is following :\n" << endl;
	for (int i = 0; i < n; i++)
	{
		if (x[i] % 2 == 0)
		{
			even_count++;	// counting the even fibonacci no's
		}
		else
		{
			odd_count++;	//  counting the odd fibonacci no 
		}

		cout << x[i] << " ";	// printing the fibonacci sereis upto n terms from the array 
	}

	cout << "\n\nTASK :2\n";
	// printng in the reverse order 

	cout << "\n\n" << "printing the given fibbnacci series in the reverse order\n\n";
	for (int j = n - 1; j != -1; j--)
	{
		cout << x[j] << " ";
	}

	cout << "\n\nTASK :3\n";
	cout << "\n\n" << "The count of the even no is\n " << even_count << endl;
	cout << "\n" << "The count of the odd no is \n" << odd_count << "\n\n\n";
	cout << "TASK :4\n";

	cout << "printing by fibonacci series upto n terms after adding 4 to the even no's and 3 to odd no's  :" << endl;
	for (int k = 0; k < n; k++)
	{
		if (x[k] % 2 == 0)
		{
			cout << x[k] + 4 << " ";
		}
		else
		{
			cout << x[k] + 3 << " ";
		}
	}

	return;
}

int main()
{
	int n;
	cout << "Ente the value of n upto which you want to print the fibonacci seris :\n";
	cin >> n;
	if (n > 0)
	{
		fibbnacci(n);
	}
	else
	{
		cout << "value of : n should be greater than 0 " << endl;
	}

	return 0;
}
