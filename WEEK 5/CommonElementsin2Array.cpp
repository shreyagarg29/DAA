#include<bits/stdc++.h>

using namespace std;

void printDuplicates(int arr1[], int arr2[], int m, int n)
{
	int i = 0;
	int j = 0;

	while(i < m && j < n)
	{
		if(arr1[i] == arr2[j]){
			cout << arr1[i] << " ";
			i++;
			j++;
		}

		else if(arr1[i] > arr2[j]){
			j++;
		}
		else{
			i++;
		}
	}

	cout << endl;

	return;
}

int main()
{
	int T;
	cin >> T;
	int m;
	int n;
	while(T--)
	{
		cin >> m;
		int arr1[m];
		for(int i = 0; i < m; i++)
			cin >> arr1[i];

		cin >> n;
		int arr2[n];
		for(int i = 0; i < n; i++)
			cin >> arr2[i];

		printDuplicates(arr1, arr2, m, n);
	}

	return 0;
}