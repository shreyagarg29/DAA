#include<bits/stdc++.h>

using namespace std;

void printDuplicates(char arr[], int size)
{
	int count[26] = {0};
	for(int i = 0; i < size; i++)
		count[(int)(arr[i] - 97)]++; 

	int max = 0;
	char max_alpha;

	for(int i = 0; i < 26; i++)
		if(count[i] > 1 && max < count[i]){
			max = count[i];
			max_alpha = (char)(i + 97);
		}

	if(max == 0){
		cout << "No Duplicates" << endl;
		return;
	}

	cout << max_alpha << " " << max << endl;
	return;
}

int main()
{
	int T;
	cin >> T;
	int n;
	while(T--)
	{
		cin >> n;
		char arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];

		printDuplicates(arr, n);
	}

	return 0;
}